<?php

/**
 * @file
 * Re-populate group ID and group entity, deprecating the OG group entity.
 *
 * Class should be included only if this is an upgrade from branch 7.x-1.x
 * to branch 7.x-2.x
 */

class OgMigrateMembership extends OADrupalMigration {
 protected $tableName ='og_membership';
 public function __construct(array $arguments) {
    parent::__construct($arguments);
	//print_r($arguments);
    $this->description = 'Copy og_membership table.';
    $destination_key = array(
      'id' => array(
        'type' => 'int',
        'not null' => TRUE,
      ),
	);
	
	
    $this->source = new MigrateSourceSQL($this->query());
    $this->destination = new MigrateDestinationTableCopy($this->tableName, $destination_key);

    $this->map = new MigrateSQLMap($this->machineName,
    array('id' => array(
        'type' => 'int',
        'not null' => TRUE,
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
  public function getQuery(){
	  return $this -> query();
  }
  public function prepareRow($row) {
    // If the  workflow states setting is different from old D7 to new D7, a mapping must be done.
	//print_r($row);
	if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
	
	//new etid
	$old_etid=$row->etid;
	$new_etid=null;
	if ($row->entity_type=='user'){
		$new_etid=$this->get_new_uid($old_etid);
	}
	else if ($row->entity_type=='node'){
		$new_etid=$this->get_new_nid($old_etid);
	}
	$row->etid=$new_etid?$new_etid:$old_etid;
	//new gid
	$old_gid=$row->gid;
	$new_gid=null;
	if ($row->group_type=='node'){
		$new_gid=$this->get_new_nid($old_gid);
	}
	$row->gid=$new_gid?$new_gid:$old_gid;
	
	//print_r($row);
	return True;
  }
  
  public function getSourceIds(){
	  $result=$this->query()->execute();
	  $source_ids= array();
	  while($rc=$result->fetchObject()){
		  $source_ids[$rc->id]=$rc->id;
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
