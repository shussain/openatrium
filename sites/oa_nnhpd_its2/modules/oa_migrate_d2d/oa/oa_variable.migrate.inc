<?php

/**
 
 */

class OAMigrateVariable extends OADrupalMigration {
 protected $tableName ='variable';
 public function __construct(array $arguments) {
    parent::__construct($arguments);
	//print_r($arguments);
    $this->description = 'Copy some records of variable table.';
    $destination_key = array(
      'name'=>array(
		'type' => 'varchar',
        'not null' => TRUE,
		'length' => 128,
      ),
	);
	
	
    $this->source = new MigrateSourceSQL($this->query());
    $this->destination = new MigrateDestinationTableCopy($this->tableName, $destination_key);

    $this->map = new MigrateSQLMap($this->machineName,
    array('name' => array(
        'type' => 'varchar',
        'not null' => TRUE,
		'length' => 128,
		'alias' => 'm',
		),
	),

    $destination_key
    );
  }
  public function prepareRow($row) {
 	if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
	if ($row->name == 'nhpd_oa_task_category_allowed_values_setting'){
		$value=unserialize($row->value);
		$setting=$value['setting'];
		$new_setting = array();
		foreach($setting as $space_id=>$sections){
			$new_space_id = $this->get_new_nid($space_id);
			foreach($sections as $section_id => $section_setting){
				$new_section_id = $this->get_new_nid($section_id);
				$new_setting[$new_space_id][$new_section_id]=$section_setting;
			}
		}
		$value['setting']=$new_setting;
		$row->value=serialize($value);
	}
	if ($row->name == 'nhpd_oa_task_custom_fields_allowed_values_setting'){
		$value=unserialize($row->value);
		$setting=$value['sections'];
		$new_setting = array();
		
		foreach($setting as $section_id => $section_setting){
			$new_section_id = $this->get_new_nid($section_id);
			$new_setting[$new_section_id]=$section_setting;
		}

		$value['sections']=$new_setting;
		$row->value=serialize($value);
	}
	if ($row->name == 'nhpd_oa_task_status_allowed_values_setting'){
		// nothing to do, since og role ids are not changed.
	}
	if ($row->name == 'nhpd_oa_task_type_allowed_values_setting'){
		$value=unserialize($row->value);
		$setting=$value['setting'];
		$new_setting = array();
		foreach($setting as $space_id=>$sections){
			$new_space_id = $this->get_new_nid($space_id);
			foreach($sections as $section_id => $section_setting){
				$new_section_id = $this->get_new_nid($section_id);
				$new_setting[$new_space_id][$new_section_id]=$section_setting;
			}
		}
		$value['setting']=$new_setting;
		$row->value=serialize($value);
	}
		
	//$methods = get_class_methods($this);
	//print_r($row);
	return True;
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
  protected function query() {
    $db_or = db_or();
	$db_or->condition('m.name', 'nhpd_oa_%', 'like')
		->condition('m.name', 'oa_worktracker_%', 'like');
	$query = Database::getConnection('default', $this->sourceConnection)->select($this->tableName, 'm');
	$query->fields('m')
		->condition($db_or);
	
		
    return $query;
  }
  
  public function getQuery(){
	  return $this -> query();
  }
    
  public function getSourceIds(){
	  $result=$this->query()->execute();
	  $source_ids= array();
	  while($rc=$result->fetchObject()){
		  $source_ids[$rc->name]=$rc->name;
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
		  $source_ids[$rc->sourceid1]=$rc->sourceid1;
	  }
	  return $source_ids;
  }
  public function getFailedIds(){
	  $machine_name=$this->getMachineName();
	  $result=Database::getConnection('default')
						 ->select('migrate_map_' . strtolower($machine_name), 'm')
						 ->fields('m')
						 ->isNull('destid1')
						 ->execute();
	  $source_ids= array();
	  while($rc=$result->fetchObject()){
		  $source_ids[$rc->sourceid1]=$rc->sourceid1;
	  }
	  return $source_ids;
  }
  public function getUnprocessedIds(){
	  return array_diff_key($this->getSourceIds(), $this->getProcessedIds());
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
		  $source_ids[$rc->sourceid1]=$rc->sourceid1;
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
		  $source_ids[$rc->sourceid1]=$rc->sourceid1;
	  }
	  return $source_ids;
  }
  public function getUnprocessedAndNeedsUpdateIds(){
	  return array_unique(array_merge($this->getUnprocessedIds() + $this->getNeedsUpdateIds()));
  }
}
