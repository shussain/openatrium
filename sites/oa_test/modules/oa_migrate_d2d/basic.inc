<?php

/**
 * File
 */
class OACommentMigration extends DrupalComment7Migration {
  public function __construct(array $arguments) {
    
     parent::__construct($arguments);
	 
	 //print_r($this->sourceFields);
  }
  
   public function prepare($entity, stdClass $row) {
   
  }
  

 
	/**
   * Implementation of Migration::prepareRow().
   *
   * Here we pull in additional data from a non-core, non-CCK table.
   *
   * @param $row
   */
   
  public function prepareRow($row) {
 	
	if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
	//print_r($row);
  }
  public function getQuery(){
	  return $this -> query();
  }
  public function getSourceIds(){
	  $result=$this->query()->execute();
	  $source_ids= array();
	  while($rc=$result->fetchObject()){
		  $source_ids[]=$rc->cid;
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
 * File
 */
class OAFileMigration extends DrupalFile7Migration {
  public function __construct(array $arguments) {
    
     parent::__construct($arguments);
	 
	 //print_r($this->sourceFields);
  }
  
   public function prepare($entity, stdClass $row) {
    //print_r($entity);
	if (preg_match('/^((private|public):\/\/)/i',  $row->uri, $matches)) {
      //$entity->source_dir .= 'private_files/';
      //$entity->destination_dir = $entity->destination_dir .  $matches[2];
	  $entity->destination_dir=$matches[1];
    }
	//print_r($entity);
  }
  

  protected function fixUri($uri) {
    $result = str_replace(array('public://', 'private://'), '', $uri);
    return $result;
  }
	/**
   * Implementation of Migration::prepareRow().
   *
   * Here we pull in additional data from a non-core, non-CCK table.
   *
   * @param $row
   */
   
  public function prepareRow($row) {
 	//print_r($row);
	if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
	print_r($row->destination_dir);
	if (preg_match('|^([a-z]+://)|i', $row->uri, $matches)) {
        //$row->destination_dir = $matches[1];
    }
		
	//$methods = get_class_methods($this);
	//print_r($methods);
	//print_r($row);
	//print_r($this);
	//print_r($this->baseDir);
	return True;
  }
   /**
   * Called immediately after the complete destination object is saved.
   *
   * @param $new_user
   *   The user object saved by the migration.
   * @param $row
   *   Raw source data object - passed through to prepare handlers.
   */
   /*
  public function complete($new_user, stdClass $row) {
    // Grant roles to all groups the user is a member of.
    $groups = field_get_items('user', $new_user, 'og_group_node');
    foreach ($groups as $group) {
      $gid = $group['target_id'];
      $og_roles = og_roles('node', NULL, $gid);
      foreach ($row->all_roles as $role_name) {
        // Check for the existence of the OG role
        if ($rid = array_search($role_name, $og_roles)) {
          og_role_grant('node', $gid, $new_user->uid, $rid);
        }
      }
    }
  }
  */
  public function getQuery(){
	  return $this -> query();
  }
  public function getSourceIds(){
	  $result=$this->query()->execute();
	  $source_ids= array();
	  while($rc=$result->fetchObject()){
		  $source_ids[]=$rc->fid;
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
class OAFileMigration_ extends OADrupalMigration {
  protected $tableName ='file_managed';
 public function __construct(array $arguments) {
    parent::__construct($arguments);
	//print_r($arguments);
    $this->description = 'Copy file_managed table.';
    $destination_key = array(
      'fid' => array(
        'type' => 'int',
        'not null' => TRUE,
      ),
	);
	
	
    $this->source = new MigrateSourceSQL($this->query());
    $this->destination = new MigrateDestinationTableCopy($this->tableName, $destination_key);

    $this->map = new MigrateSQLMap($this->machineName,
    array(
		'fid' => array(
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
  public function prepareRow($row) {
    print_r($this);
	print_r($row);
	if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
	if (!$row->migrate_map_needs_update){
		$sql = 'SELECT AUTO_INCREMENT FROM INFORMATION_SCHEMA.TABLES WHERE TABLE_SCHEMA = DATABASE() AND TABLE_NAME = :table_name';
		$result=db_query($sql, array(':table_name' => $this->tableName));
		$next_auto_id = $result->fetchColumn(0);
		$row->migrate_map_destid1=$next_auto_id;
		$row->migrate_map_sourceid1=$row->fid;
		$row->fid = $next_auto_id;
	}

	
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
		  $source_ids[$rc->fid]=$rc->fid ;
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

/**
 * Taxonomy term
 */


class OATermMigration extends DrupalTerm7Migration {
  public function __construct(array $arguments) {
    
     parent::__construct($arguments);
	 
	 //print_r($this->sourceFields);
  }
	/**
   * Implementation of Migration::prepareRow().
   *
   * Here we pull in additional data from a non-core, non-CCK table.
   *
   * @param $row
   */
   
  public function prepareRow($row) {
 	if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
		
	//$methods = get_class_methods($this);
	//print_r($row);
	return True;
  }
   /**
   * Called immediately after the complete destination object is saved.
   *
   * @param $new_user
   *   The user object saved by the migration.
   * @param $row
   *   Raw source data object - passed through to prepare handlers.
   */
   /*
  public function complete($new_user, stdClass $row) {
    // Grant roles to all groups the user is a member of.
    $groups = field_get_items('user', $new_user, 'og_group_node');
    foreach ($groups as $group) {
      $gid = $group['target_id'];
      $og_roles = og_roles('node', NULL, $gid);

      foreach ($row->all_roles as $role_name) {
        // Check for the existence of the OG role
        if ($rid = array_search($role_name, $og_roles)) {
          og_role_grant('node', $gid, $new_user->uid, $rid);
        }
      }
    }
  }
  */
}

/**
 * Users with OG groups
 * ref: https://www.drupal.org/node/2023273
 */
class OAUser extends DrupalUser7Migration {
  public function __construct(array $arguments) {
    // Add any other data we're pulling into the source row, before the parent
    // constructor.
	/*$this->sourceFields += array(
      'field_first_name' => t('User First name'),
      'field_last_name' => t('User last name'),
      'field_user_display_name' => t('User display name'),
      'og_user_node' => t('Og group'),
     );
	 */
     parent::__construct($arguments);
	 $this->addFieldMapping('field_first_name', 'field_first_name');
	 $this->addFieldMapping('field_last_name', 'field_last_name');
	 $this->addFieldMapping('field_user_display_name', 'field_user_display_name');
	 $this->addFieldMapping('field_legacy_uid', 'uid');
	 //$this->addFieldMapping('og_user_node', 'og_user_node')->sourceMigration('og_group');;
	 //print_r($this->sourceFields);
  }
	/**
   * Implementation of Migration::prepareRow().
   *
   * Here we pull in additional data from a non-core, non-CCK table.
   *
   * @param $row
   */
   
  public function prepareRow($row) {
 	if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
	//print_r($row);
	if ($row->uid==1){
		$row->field_first_name=array('Admin');
		$row->field_last_name=array('Admin');
		$row->field_user_display_name=array('Admin');
	}
	
	//$methods = get_class_methods($this);
	//print_r($row);
	return True;
  }
   /**
   * Called immediately after the complete destination object is saved.
   *
   * @param $new_user
   *   The user object saved by the migration.
   * @param $row
   *   Raw source data object - passed through to prepare handlers.
   */
   /*
  public function complete($new_user, stdClass $row) {
    // Grant roles to all groups the user is a member of.
    $groups = field_get_items('user', $new_user, 'og_group_node');
    foreach ($groups as $group) {
      $gid = $group['target_id'];
      $og_roles = og_roles('node', NULL, $gid);

      foreach ($row->all_roles as $role_name) {
        // Check for the existence of the OG role
        if ($rid = array_search($role_name, $og_roles)) {
          og_role_grant('node', $gid, $new_user->uid, $rid);
        }
      }
    }
  }
  */
}