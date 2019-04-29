<?php

/**
 
 
 *
 
 
 */

class OAMigrateNotificationOverride extends OADrupalMigration {
 protected $tableName ='oa_notifications_override';
 public function __construct(array $arguments) {
    parent::__construct($arguments);
	//print_r($arguments);
    $this->description = 'Copy oa_notifications_override table.';
    $destination_key = array(
      'entity_id' => array(
        'type' => 'int',
        'not null' => TRUE,
      ),
	  'entity_type' => array(
        'type' => 'varchar',
        'not null' => TRUE,
		'length' => 128,
		'alias' => 'm',
      ),
	);
	
	
    $this->source = new MigrateSourceSQL($this->query());
    $this->destination = new MigrateDestinationTableCopy($this->tableName, $destination_key);

    $this->map = new MigrateSQLMap($this->machineName,
    array(
		'entity_id' => array(
        'type' => 'int',
        'not null' => TRUE,
		'alias' => 'm',
      ),
	  'entity_type' => array(
        'type' => 'varchar',
        'not null' => TRUE,
		'length' => 128,
		'alias' => 'm',
      ),
	),

    $destination_key
    );
  }
  protected function query() {
    $query = Database::getConnection('default', $this->sourceConnection)->select($this->tableName, 'm');
	
	$query->fields('m');
		
    return $query;
  }
  public function prepareRow($row) {
    
	//print_r($row);
	if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
	
	//print_r($row);
	
	//new entity_id
	$old_entity_id=$row->entity_id;
	$new_entity_id=null;
	if ($row->entity_type=='node'){
		$new_entity_id=$this->get_new_nid($old_entity_id);
	}
	$row->entity_id=$new_entity_id?$new_entity_id:$old_entity_id;
	
	//print_r($row);
	return True;
  }
  public function getQuery(){
	  return $this -> query();
  }
    
  public function getSourceIds(){
	  $result=$this->query()->execute();
	  $source_ids= array();
	  while($rc=$result->fetchObject()){
		  $source_ids[$rc->entity_id . ':' . $rc->entity_type]=$rc->entity_id . ':' . $rc->entity_type;
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
		  $source_ids[$rc->sourceid1 . ':' . $rc->sourceid2]=$rc->sourceid1 . ':' . $rc->sourceid2;
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
		  $source_ids[$rc->sourceid1 . ':' . $rc->sourceid2]=$rc->sourceid1 . ':' . $rc->sourceid2;
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
		  $source_ids[$rc->sourceid1 . ':' . $rc->sourceid2]=$rc->sourceid1 . ':' . $rc->sourceid2;
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
		  $source_ids[$rc->sourceid1 . ':' . $rc->sourceid2]=$rc->sourceid1 . ':' . $rc->sourceid2;
	  }
	  return $source_ids;
  }
  public function getUnprocessedAndNeedsUpdateIds(){
	  return array_unique(array_merge($this->getUnprocessedIds() + $this->getNeedsUpdateIds()));
  }
}
