<?php

/**
 * Common mappings for the TPD node migrations.
 */
abstract class NHPIDNodeMigration extends DrupalNode7Migration {
  public function __construct(array $arguments) {
    parent::__construct($arguments);
	
	$this->destination_type = $arguments['destination_type'];
    $this->source_type = $arguments['source_type'];
	$field_instances = field_info_instances('node', $arguments['destination_type']);
	if (isset($arguments['dependencies'])){
		$this->dependencies = $arguments['dependencies'];
	}

	$fields = array();
	
	foreach($field_instances as $field_name => $info){
		if (in_array($field_name, array('body'))){
			continue;
		}
		if ($info['widget']['module']=='field_collection'){
			continue;
		}
		$fields[$field_name] = $info['label'];
	}
	//print_r($fields);
	$this -> destination_fields=$fields;
	foreach($this -> destination_fields as $field_name => $label){
		$field=field_info_field($field_name);
		if (in_array($field_name, array('field_oa_media', 'field_document','field_insert_image', 'field_basic_file_file',))){
			$this->addFieldMapping($field_name, $field_name)
			  ->sourceMigration('Files');
			$this->addFieldMapping($field_name . ':file_class')
			  ->defaultValue('MigrateFileFid');
		}
		
		elseif ($field['type'] == 'text_with_summary' or $field['type'] == 'text_long'){
			$this->addFieldMapping($field_name, $field_name);
			$this->addFieldMapping($field_name . ':value_format', $field_name. '_value_format');
			//print_r('mapping value_formt.');
		}
		
		elseif ($field_name == 'field_legacy_nid'){
			$this->addFieldMapping('field_legacy_nid', 'nid');
		}
		
		else{
			$this->addFieldMapping($field_name, $field_name);
		}
	}
   
  }
   /**
   * Implementation of Migration::prepareRow().
   *
   * Here we pull in additional data from a non-core, non-CCK table.
   *
   * @param $row
   */
   
  public function prepareRow($row) {
    // If the  workflow states setting is different from old D7 to new D7, a mapping must be done.
	//print_r($row);
	if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
	
	//print_r($row);
	// uid
	$old_uid=$row->uid;
	$new_uid=null;
	$new_uid=$this->get_new_user_uid($old_uid);
	
	$row->uid=$new_uid?$new_uid:$old_uid;
	
	// entityreference fields
	foreach($this -> destination_fields as $field_name => $label){
		$field=field_info_field($field_name);
		//mapping entity reference fields target id
		if ($field['type'] == 'entityreference'){
			if ($field['settings']['target_type']=='node'){
				$this->map_node_reference($row, $field_name);
			}
			elseif ($field['settings']['target_type']=='user'){
				$this->map_user_reference($row, $field_name);
			}
			elseif ($field['settings']['target_type']=='taxonomy_term'){
				$this->map_term_reference($row, $field_name);
			}
			
		}
		
		elseif ($field['type'] == 'text_with_summary' or $field['type'] == 'text_long'){
			$texts=$row->{"$field_name"};
			$new_texts = array();
			if($texts){
				foreach($texts as $text){
					$new_texts[]=$this->update_internal_freelinking_links($text);
				}
			}
			$row->$field_name=$new_texts;
		}
		
		elseif ($field['type'] == 'taxonomy_term_reference'){
			$this->map_term_reference($row, $field_name);
		}
		if ($field['name'] == 'oa_section_ref'){
			$old_section_ref = $row->oa_section_ref;
			$new_sesction_ref = array();
			foreach($old_section_ref as $item){
				$new_item=$this->get_new_nid($item);
				$new_sesction_ref[]=$new_item;
			}
			$row->oa_section_ref=$new_sesction_ref;
		}

	}

	//$methods = get_class_methods($this);
	//print_r($row);
	return True;
  }
  public function prepare($entity, stdClass $row) {
    //print_r($entity);
	//print_r($row);
	 // author uid
	
	if ($row->uid){
		$entity->uid=$row->uid;
	}

	
	
	
	foreach($this -> destination_fields as $field_name => $label){
		$field=field_info_field($field_name);

		if(isset($row->{"$field_name:format"})){
			foreach($row->{"$field_name:format"} as $key=>$format){
				$entity->$field_name[$row->{"$field_name:language"}[$key]][$key]['value_format']=$format;
				$entity->$field_name[$row->{"$field_name:language"}[$key]][$key]['format']=$format;
			}
		}
	}
	
	//print_r($entity);
  }
  public function complete($entity, stdClass $row){
	//remove old unique tag prefix to the title

	//remove old tag
	if ($entity->type == 'nhpd_wiki' or $entity->type == 'oa_worktracker_task'){
		$title = $row->title;
		$pattern = '/^\w+-' . $row ->nid . ':/';
		if (preg_match($pattern, $title)){
			$title = preg_replace($pattern, '', $title, 1);
			$entity->title=$title;
		}
		$new_og_group_ref = $this->get_new_og_group_ref($row->nid);
		//print_r($new_og_group_ref);
		$entity->og_group_ref[$row->{"language"}][0]=array('target_id'=>$new_og_group_ref);
	}
	node_save($entity);
	print_r($entity->title . " is migrated \n");
  }
  
  public function get_new_user_uid($legacy_uid){
	$entity_row = Database::getConnection('default')
                 ->select('field_data_field_legacy_uid', 'c')
                 ->fields('c', array('entity_id', 'field_legacy_uid_value'))
				 ->condition('field_legacy_uid_value', $legacy_uid)
                 ->execute()
                 ->fetchObject();
	if($entity_row){
		$entity_id = $entity_row -> entity_id;
		return $entity_id;
	}  
	return null;
  }
  
  public function get_new_nid($legacy_nid){
	$entity_row = Database::getConnection('default')
                 ->select('field_data_field_legacy_nid', 'c')
                 ->fields('c', array('entity_id', 'field_legacy_nid_value'))
				 ->condition('field_legacy_nid_value', $legacy_nid)
                 ->execute()
                 ->fetchObject();
	if($entity_row){
		$entity_id = $entity_row -> entity_id;
		return $entity_id;
	}  
	return null;
  }
   public function get_old_term_name($legacy_tid){
	$entity_row = Database::getConnection('default', $this->sourceConnection)
                 ->select('taxonomy_term_data', 'c')
                 ->fields('c')
				 ->condition('tid', $legacy_tid)
                 ->execute()
                 ->fetchObject();
	if($entity_row){
		$name = $entity_row -> name;
		return $name;
	}  
	return null;
  }
  public function get_sid($legacy_nid){
	$workflow_row = Database::getConnection('legacy', $this->sourceConnection)
                 ->select('workflow_node', 'wd')
                 ->fields('wd', array('nid', 'sid', 'uid', 'stamp'))
				 ->condition('nid', $legacy_nid)
                 ->execute()
                 ->fetchObject();
	//print_r ($legency_nid);
	//print_r ($workflow_row);
	if ($workflow_row ){
		return $workflow_row->sid;
	}
	
	return null;
  }
  
  public function map_node_reference(&$row, $field_name){
	if (property_exists($row, "$field_name")){
		$legacy_nids=$row->{"$field_name"};
		$target_ids= array();
		if (!empty($legacy_nids)){
			foreach($legacy_nids as $legacy_nid){
				$target_ids[] = $this->get_new_nid($legacy_nid);
			}
			$row->{$field_name}=$target_ids;
		}
	}
  }
  public function map_term_reference(&$row, $field_name){
	if (property_exists($row, "$field_name")){
		$legacy_tids=$row->{"$field_name"};
		$target_names= array();
		if (!empty($legacy_tids)){
			foreach($legacy_tids as $legacy_tid){
				$target_names[] = $this->get_old_term_name($legacy_tid);
			}
			$row->{$field_name}=$target_names;
		}
	}
  }
  public function map_user_reference(&$row, $field_name){
	if (property_exists($row, "$field_name")){
		$legacy_uids=$row->{"$field_name"};
		$target_ids= array();
		if (!empty($legacy_uids)){
			foreach($legacy_uids as $legacy_uid){
				$target_ids[] = $this->get_new_user_uid($legacy_uid);
			}
			$row->{$field_name}=$target_ids;
		}
	}
  }
  
  public function get_new_og_group_ref($legacy_nid){

	$old_gid_row = Database::getConnection('default', $this->sourceConnection)
		 ->select('og_membership', 'c')
		 ->fields('c')
		 ->condition('etid', $legacy_nid)
		 ->execute();
	if($old_gid_row->rowCount()>0){
		$old_gid = $old_gid_row->fetchObject() -> gid;
		return $this->get_new_nid($old_gid);
	}
	return NULL;
  }
  
  public function update_internal_freelinking_links($text){
	$pattern='/(\[\[nid:(\d+)\|([^\]]+)\]\])/';
	preg_match_all($pattern, $text, $matches, PREG_OFFSET_CAPTURE);
	for ($i = 0; $i <count($matches[0]); $i++){
		$legacy_nid=$matches[2][$i][0];
		$link_offset=$matches[2][$i][1];
		$link_text=$matches[3][$i][0];
		$new_nid=$this->get_new_nid($legacy_nid);
		if($new_nid){
			$replace="[[nid:$new_nid|";
			$needle="[[nid:$legacy_nid|";
			if($legacy_nid==$link_text){
				$replace="[[nid:$new_nid|$new_nid]]";
				$needle="[[nid:$legacy_nid|$legacy_nid]]";
			}
			$text=str_replace($needle, $replace,$text);
		}
	}
	return $text;
  }
  public function getQuery(){
	  return $this -> query();
  }
  public function getSourceIds(){
	  $result=$this->query()->execute();
	  $source_ids= array();
	  while($rc=$result->fetchObject()){
		  $source_ids[]=$rc->nid;
	  }
	  return $source_ids;
  }
  public function getProcessedIds(){
	  $machine_name=$this->getMachineName();
	  $result=Database::getConnection('default')
						 ->select('migrate_map_' . strtolower($machine_name), 'm')
						 ->fields('m')
						 ->execute();
	  $source_ids= array();
	  while($rc=$result->fetchObject()){
		  $source_ids[]=$rc->sourceid1;
	  }
	  return $source_ids;
  }
  public function getUnprocessedIds(){
	  return array_diff($this->getSourceIds(), $this->getProcessedIds());
  }
  public function getNeedsUpdateIds(){
	  $machine_name=$this->getMachineName();
	  $result=Database::getConnection('default')
						 ->select('migrate_map_' . strtolower($machine_name), 'm')
						 ->fields('m')
						 ->condition('needs_update', 1)
						 ->execute();
	  $source_ids= array();
	  while($rc=$result->fetchObject()){
		  $source_ids[]=$rc->sourceid1;
	  }
	  return $source_ids;
  }
  public function getUpdatedIds(){
	  $machine_name=$this->getMachineName();
	  $result=Database::getConnection('default')
						 ->select('migrate_map_' . strtolower($machine_name), 'm')
						 ->fields('m')
						 ->condition('needs_update', 0)
						 ->execute();
	  $source_ids= array();
	  while($rc=$result->fetchObject()){
		  $source_ids[]=$rc->sourceid1;
	  }
	  return $source_ids;
  }
  public function getUnprocessedAndNeedsUpdateIds(){
	  return array_unique(array_merge($this->getUnprocessedIds() + $this->getNeedsUpdateIds()));
  }
}

/**
 *Group mappings and handling.
 */
class Group extends NHPIDNodeMigration {
	public function __construct(array $arguments) {
    // Add any other data we're pulling into the source row, before the parent
    // constructor.
    
    parent::__construct($arguments);
  } 
 
}

/**
 *Space mappings and handling.
 */
class Space extends NHPIDNodeMigration {
  public function __construct(array $arguments) {
    // Add any other data we're pulling into the source row, before the parent
    // constructor.
    
    parent::__construct($arguments);
  } 
}

/**
 *Section mappings and handling.
 */
class Section extends NHPIDNodeMigration {
  public function __construct(array $arguments) {
    // Add any other data we're pulling into the source row, before the parent
    // constructor.
    
    parent::__construct($arguments);
  } 
}

/**
 *NHPDIMDB mappings and handling.
 */
class NHPDIMDB extends NHPIDNodeMigration {
  public function __construct(array $arguments) {
    // Add any other data we're pulling into the source row, before the parent
    // constructor.
    
    parent::__construct($arguments);
  } 
}

/**
 *TASK mappings and handling.
 */
class TASK extends NHPIDNodeMigration {
  public function __construct(array $arguments) {
    // Add any other data we're pulling into the source row, before the parent
    // constructor.
    
    parent::__construct($arguments);
  } 
}

/**
 *NHPDWiki mappings and handling.
 */
class NHPDWiki extends NHPIDNodeMigration {
  public function __construct(array $arguments) {
    // Add any other data we're pulling into the source row, before the parent
    // constructor.
    
    parent::__construct($arguments);
  } 
  public function prepareRow($row) {
    // If the  workflow states setting is different from old D7 to new D7, a mapping must be done.
	//print_r($row);
	if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
	//print_r($row);
  }
}
/**
 *Event mappings and handling.
 */
class Event extends NHPIDNodeMigration {
  public function __construct(array $arguments) {
    // Add any other data we're pulling into the source row, before the parent
    // constructor.
    
    parent::__construct($arguments);
  } 
}
/**
 *TaskReporting mappings and handling.
 */
class TaskReporting extends NHPIDNodeMigration {
  public function __construct(array $arguments) {
    // Add any other data we're pulling into the source row, before the parent
    // constructor.
    
    parent::__construct($arguments);
  } 
}
/**
 *MyEvent mappings and handling.
 */
class MyEvent extends NHPIDNodeMigration {
  public function __construct(array $arguments) {
    // Add any other data we're pulling into the source row, before the parent
    // constructor.
    
    parent::__construct($arguments);
  } 
}
