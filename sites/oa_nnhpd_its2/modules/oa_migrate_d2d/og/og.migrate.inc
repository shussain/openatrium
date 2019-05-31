<?php

/**
 * @file
 * Parent class to OG migration.
 */
abstract class OADrupalMigration extends DrupalMigration {

  public function __construct($arguments) {
    parent::__construct($arguments);
  }
  public function get_new_uid($legacy_uid){
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
   
}
abstract class OgEntityMigration extends DrupalMigration {

  public $keyName = 'id';

  public function __construct($arguments) {
    parent::__construct($arguments);

    // Create a map object for tracking the relationships between source
    // rows.
    if (empty($this->sourceKey)) {
      $this->sourceKey = array(
        $this->keyName => array(
          'type' => 'int',
          'not null' => TRUE,
        ),
      );
    }

    $this->map = new MigrateSQLMap($this->machineName, $this->sourceKey, MigrateDestinationTable::getKeySchema($this->tableName));
    $this->source = new MigrateSourceSQL($this->query, $this->sourceFields, NULL,
      $this->sourceOptions);
    $this->destination = new MigrateDestinationTable($this->tableName);
  }
   
}
