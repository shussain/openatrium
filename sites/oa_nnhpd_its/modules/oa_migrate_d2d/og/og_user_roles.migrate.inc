<?php

/**
 * @file
 * Update the group ID in user roles.
 *
 * Class should be included only if this is an upgrade from branch 7.x-1.x
 * to branch 7.x-2.x
 */

class OgMigrateUserRoles extends OADrupalMigration {

  public $tableName = 'og_users_roles';

  protected $dependencies = array('og_roles');

  protected $defaultRoles;

  public function __construct(array $arguments) {
    parent::__construct($arguments);
	//print_r($arguments);
    $this->description = 'Copy og_user_role table.';
	$this->dependencies = array('og_membership');
    $destination_key = array(
		  'uid' => array(
		  'type' => 'int',
		  'not null' => TRUE,
		),
		'rid' => array(
		  'type' => 'int',
		  'not null' => TRUE,
		),
		'gid' => array(
		  'type' => 'int',
		  'not null' => TRUE,
		  // Set the alias, so the query in MigrateSourceSQL::performRewind()
		),
	);
	
	
    $this->source = new MigrateSourceSQL($this->query());
    $this->destination = new MigrateDestinationTableCopy($this->tableName, $destination_key);

    $this->map = new MigrateSQLMap($this->machineName,
    array(	'uid' => array(
			'type' => 'int',
			'not null' => TRUE,
			'alias' => 'm',
			),
			'rid' => array(
			  'type' => 'int',
			  'not null' => TRUE,
			  'alias' => 'm',
			),
			'gid' => array(
			  'type' => 'int',
			  'not null' => TRUE,
			  'alias' => 'm',
			  // Set the alias, so the query in MigrateSourceSQL::performRewind()
			  // will not fail.
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
    // If the  workflow states setting is different from old D7 to new D7, a mapping must be done.
	//print_r($row);
	if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
	
	print_r($row);
	//new uid
	$old_uid=$row->uid;
	$new_uid=null;
	$new_uid=$this->get_new_uid($old_uid);
	
	$row->uid=$new_uid?$new_uid:$old_uid;
	//new gid
	$old_gid=$row->gid;
	$new_gid=null;
	if ($row->group_type=='node'){
		$new_gid=$this->get_new_nid($old_gid);
	}
	$row->gid=$new_gid?$new_gid:$old_gid;
	
	$row->migrate_map_sourceid1=$old_uid;
	$row->migrate_map_sourceid3=$old_gid;
	$row->migrate_map_sourceid2=$row->rid;
	$row->migrate_map_destid1=$row->uid;
	$row->migrate_map_destid3=$row->gid;
	$row->migrate_map_destid2=$row->rid;
	
	print_r($row);
	return True;
  }
  
  public function getQuery(){
	  return $this -> query();
  }
  public function getSourceIds(){
	  $result=$this->query()->execute();
	  $source_ids= array();
	  while($rc=$result->fetchObject()){
		  $source_ids[$rc->uid . ':' . $rc->rid . ':' . $rc->gid]=$rc->uid . ':' . $rc->rid . ':' . $rc->gid;
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
		  $source_ids[$rc->sourceid1 . ':' . $rc->sourceid2 . ':' . $rc->sourceid3]=$rc->sourceid1 . ':' . $rc->sourceid2 . ':' . $rc->sourceid3;
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
		  $source_ids[$rc->sourceid1 . ':' . $rc->sourceid2 . ':' . $rc->sourceid3]=$rc->sourceid1 . ':' . $rc->sourceid2 . ':' . $rc->sourceid3;
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
		  $source_ids[$rc->sourceid1 . ':' . $rc->sourceid2 . ':' . $rc->sourceid3]=$rc->sourceid1 . ':' . $rc->sourceid2 . ':' . $rc->sourceid3;
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
		  $source_ids[$rc->sourceid1 . ':' . $rc->sourceid2 . ':' . $rc->sourceid3]=$rc->sourceid1 . ':' . $rc->sourceid2 . ':' . $rc->sourceid3;
	  }
	  return $source_ids;
  }
  public function getUnprocessedAndNeedsUpdateIds(){
	  return array_unique(array_merge($this->getUnprocessedIds() + $this->getNeedsUpdateIds()));
  }
}
