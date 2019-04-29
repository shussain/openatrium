<?php

/**
 * @file
 * Re-populate group ID and group entity, deprecating the OG group entity.
 *
 * Class should be included only if this is an upgrade from branch 7.x-1.x
 * to branch 7.x-2.x
 */

class OgMigrateRolePermission extends OADrupalMigration {
 protected $tableName ='og_role_permission';
 public function __construct(array $arguments) {
    parent::__construct($arguments);
	//print_r($arguments);
    $this->description = 'Copy og_role_permission table.';
    $destination_key = array(
      'rid' => array(
        'type' => 'int',
        'not null' => TRUE,
      ),
	  'permission' => array(
        'type' => 'varchar',
        'not null' => TRUE,
		'length' => 128,
      ),
	);
	
	
    $this->source = new MigrateSourceSQL($this->query());
    $this->destination = new MigrateDestinationTableCopy($this->tableName, $destination_key);

    $this->map = new MigrateSQLMap($this->machineName,
    array('rid' => array(
        'type' => 'int',
        'not null' => TRUE,
		'alias' => 'm',
		),
		'permission' => array(
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
  }
  protected function query() {
    $query = Database::getConnection('default', $this->sourceConnection)->select($this->tableName, 'm');
	//print_r($this->tableName);
	$query->fields('m');
		
    return $query;
  }
  public function getQuery(){
	  return $this -> query();
  }
    
  public function getSourceIds(){
	  $result=$this->query()->execute();
	  $source_ids= array();
	  while($rc=$result->fetchObject()){
		  $source_ids[$rc->rid .':' . $rc->permission]=$rc->rid .':' . $rc->permission;
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
