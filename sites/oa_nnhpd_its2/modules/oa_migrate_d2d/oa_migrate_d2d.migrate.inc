<?php
/**
 * @file oa_migrate_d2d.migrate.inc
 */

/**
 * This is code for NHPID DMS migration from old D7 to new D7.
 */

/**
 * Implements hook_migrate_api().
 */
function oa_migrate_d2d_migrate_api() {
  /**
   * Declare the api version and migration group.
   */
  $data_node_group_0 = array(
  'oa_group'=>'Group',
  );
  $data_node_group_1 = array(
  'oa_space'=>'Space',
  );
  $data_node_group_2 = array(
  'oa_section'=>'Section',
  );
  $data_node_group_3 = array(
  'nhpd_imdb'=>'NHPDIMDB',
  'oa_worktracker_task'=>'TASK',
  );
  
  $data_node_group_4 = array(
  'nhpd_wiki'=>'NHPDWiki',
  'oa_event'=>'Event',
  'task_reporting'=>'TaskReporting',
  'my_event'=>'MyEvent',
  );
  $comment_group_1 = array(
  'comment'=>'OACommentMigration',
  );
  $og_group_1 = array(
  'og_membership_type' => 'OgMigrateMemberShipType',
  );
  $og_group_2 = array(
  'og_membership'=>'OgMigrateMembership',
  );
  $og_group_3 = array(
  'og_roles'=>'OgMigrateRoles',
  'og_users_roles'=>'OgMigrateUserRoles',
  'og_role_permission'=>'OgMigrateRolePermission',
  );
  $oa_group_1 = array(
  'oa_variable'=>'OAMigrateVariable',
  'oa_watchers'=>'OAMigrateOAWatcchers',
  'oa_notifications'=>'OAMigrateNotification',
  'oa_notifications_override'=>'OAMigrateNotificationOverride',
  
  );
  $api = array(
    'api' => 2,
    'groups' => array(
      'oa_group_1' => array(
        'title' => t('Basic Data'),
      ),
	  'oa_group_data_node_group0' => array(
        'title' => t('Data node group 0'),
      ),
	  'oa_group_data_node_group1' => array(
        'title' => t('Data node group 1'),
      ),
	  'oa_group_data_node_group2' => array(
        'title' => t('Data node group 2'),
      ),
	  'oa_group_data_node_group3' => array(
        'title' => t('Data node group 3'),
      ),
	  
	  'oa_group_data_node_group4' => array(
        'title' => t('Data node group 4'),
      ),
	  'oa_group_og_group1' => array(
        'title' => t('OG group 1'),
      ),
	  'oa_group_og_group2' => array(
        'title' => t('OG group 2'),
      ),
	  'oa_group_og_group3' => array(
        'title' => t('OG group 3'),
      ),
	  'oa_group_oa_group1' => array(
        'title' => t('OA group 1'),
      ),
	  
	  'oa_group_field_collection_group1' => array(
        'title' => t('Field collection group 1'),
      ),
	  'oa_group_accessory_tales' => array(
        'title' => t('Accessory Tables'),
      ),
	  'oa_group_comment_group1' => array(
        'title' => t('Comments'),
      ),
	  
      'migrations' => array(),
    ),
  );

  /**
   * Each migration being registered takes an array of arguments, some required
   * and some optional. Start with the common arguments required by all - the
   * source_connection (connection key, set up in settings.php, pointing to
   * the Drupal 6 database), source_version (major version of Drupal), and
   * group_name (a.k.a. import job).
   */
  $common_arguments = array(
    'source_connection' => 'legacy',
    'source_version' => 7,
	'source_database' => array(
    'driver' => 'mysql',
    'database' => 'old_oa_its',
    'username' => 'drupal',
    'password' => 'drupal_pwd',
    'host' => 'localhost',
    'prefix' => '',
	),
  );

  // Register the user migration.
   // Migrate roles
  
  $api['migrations']['Role'] = $common_arguments + array(
    'description' => t('Migration of Roles'),
    'class_name' => 'DrupalRole7Migration',
	'group_name' => 'oa_group_1',
	'role_mappings' => array(
      'manager' => 'manager',
      'data entry' => 'data entry',
      'observer' => 'observer',
    ),
  );

  // We just use the migrate_d2d D7 migration class as-is.
  $api['migrations']['User'] = $common_arguments + array(
    'description' => t('Migration of users'),
    'class_name' => 'OAUser',
	'group_name' => 'oa_group_1',
	'role_migration' => 'Role',
	//'dependencies' => array('oa_group','oa_space'),
  );
  
  // files
  
  $api['migrations']['Files'] = $common_arguments + array(
    'description' => t('Migration of files'),
    //'class_name' => 'DrupalFile7Migration',
	'class_name' => 'OAFileMigration',
	'group_name' => 'oa_group_1',
	//'source_dir' => realpath(".") . '/sites/default/files/private/old_its/',
	//'destination_dir' => realpath(".") . '/sites/default/files/private',
	'source_dir' => 'private://old_its/',
	'destination_dir' => 'private://',
  );
	
  // For vocabulary migrations, source_vocabulary and destination_vocabulary are
  // required arguments. Note that in Drupal 6 vocabularies did not have machine
  // names, so we use the vocabulary ID to uniquely identify them.
  
  $vocabulary_arguments = array(
    'TermSectionType' => array(
      'description' => t('Migration of section terms'),
      'source_vocabulary' => 'section_type',  
      'destination_vocabulary' => 'section_type',
    ),
    
  );
	
  // Again, we're using the migrate_d2d class directly.
  // The soft dependency says that while we don't have to run the user migration
  // first, we want to make sure it's listed first so the vocabularies are
  // listed right ahead of the node migrations.
  
  $common_vocabulary_arguments = $common_arguments + array(
    //'class_name' => 'DrupalTerm7Migration',
	'class_name' => 'OATermMigration',
    'soft_dependencies' => array('User'),
	'group_name' => 'oa_group_1',
  );
  foreach ($vocabulary_arguments as $migration_name => $arguments) {
    $arguments += $common_vocabulary_arguments;
    $api['migrations'][$migration_name] = $arguments;
  }
	
  // Node migrations - each has its own class derived from the migrate_d2d class,
  // specifying its particular field mappings and transformations. source_type
  
  // and destination_type are required arguments.
  
  // node data
  // Tell the node migrations where the users are coming from, so they can
  // set up the dependency and resolve D6->D7 uids.
  $common_node_arguments = $common_arguments + array(
      'user_migration' => 'User'
    );
  
  $data_node_group0_arguments = array();
  foreach ($data_node_group_0 as $type => $class){
	 $data_node_group0_arguments[$type] = array(
      'class_name' => $class,
      'description' => t("Migration of code $type"),
      'source_type' => $type,
      'destination_type' => $type,
	  'group_name' => 'oa_group_data_node_group0',
    );
  }
  
  foreach ($data_node_group0_arguments as $migration_name => $arguments) {
    $arguments = array_merge_recursive($arguments, $common_node_arguments);
    $api['migrations'][$migration_name] = $arguments;
  }
  $data_node_group1_arguments = array();
  foreach ($data_node_group_1 as $type => $class){
	 $data_node_group1_arguments[$type] = array(
      'class_name' => $class,
      'description' => t("Migration of code $type"),
      'source_type' => $type,
      'destination_type' => $type,
	  'group_name' => 'oa_group_data_node_group1',
    );
  }
  foreach ($data_node_group1_arguments as $migration_name => $arguments) {
    $arguments = array_merge_recursive($arguments, $common_node_arguments);
    $api['migrations'][$migration_name] = $arguments;
  }
  
  $data_node_group2_arguments = array();
  foreach ($data_node_group_2 as $type => $class){
	 $data_node_group2_arguments[$type] = array(
      'class_name' => $class,
      'description' => t("Migration of code $type"),
      'source_type' => $type,
      'destination_type' => $type,
	  'group_name' => 'oa_group_data_node_group2',
    );
  }
  foreach ($data_node_group2_arguments as $migration_name => $arguments) {
    $arguments = array_merge_recursive($arguments, $common_node_arguments);
    $api['migrations'][$migration_name] = $arguments;
  }
  
  $data_node_group3_arguments = array();
  foreach ($data_node_group_3 as $type => $class){
	 $data_node_group3_arguments[$type] = array(
      'class_name' => $class,
      'description' => t("Migration of code $type"),
      'source_type' => $type,
      'destination_type' => $type,
	  'group_name' => 'oa_group_data_node_group3',
    );
  }
  foreach ($data_node_group3_arguments as $migration_name => $arguments) {
    $arguments = array_merge_recursive($arguments, $common_node_arguments);
    $api['migrations'][$migration_name] = $arguments;
  }
  $data_node_group4_arguments = array();
  foreach ($data_node_group_4 as $type => $class){
	 $data_node_group4_arguments[$type] = array(
      'class_name' => $class,
      'description' => t("Migration of code $type"),
      'source_type' => $type,
      'destination_type' => $type,
	  'group_name' => 'oa_group_data_node_group4',
    );
  }
  foreach ($data_node_group4_arguments as $migration_name => $arguments) {
    $arguments = array_merge_recursive($arguments, $common_node_arguments);
    $api['migrations'][$migration_name] = $arguments;
  }
  
  $comment_group1_arguments = array();
  foreach ($comment_group_1 as $type => $class){
	 $comment_group1_arguments[$type] = array(
      'class_name' => $class,
      'description' => t("Migration of code $type"),
      'source_type' => 'oa_worktracker_task',
      'destination_type' => 'oa_worktracker_task',
	  'group_name' => 'oa_group_comment_group1',
	  'node_migration' =>'oa_worktracker_task',
    );
  }
  foreach ($comment_group1_arguments as $migration_name => $arguments) {
    $arguments = array_merge_recursive($arguments, $common_node_arguments);
    $api['migrations'][$migration_name] = $arguments;
  }
  
  $og_group1_arguments = array();
  foreach ($og_group_1 as $type => $class){
	 $og_group1_arguments[$type] = array(
      'class_name' => $class,
      'description' => t("Migration of table $type"),
      'source_type' => $type,
      'destination_type' => $type,
	  'group_name' => 'oa_group_og_group1',
    );
  }
  foreach ($og_group1_arguments as $migration_name => $arguments) {
    $arguments = array_merge_recursive($arguments, $common_arguments);
    $api['migrations'][$migration_name] = $arguments;
  }
  $og_group2_arguments = array();
  foreach ($og_group_2 as $type => $class){
	 $og_group2_arguments[$type] = array(
      'class_name' => $class,
      'description' => t("Migration of table $type"),
      'source_type' => $type,
      'destination_type' => $type,
	  'group_name' => 'oa_group_og_group2',
    );
  }
  foreach ($og_group2_arguments as $migration_name => $arguments) {
    $arguments = array_merge_recursive($arguments, $common_arguments);
    $api['migrations'][$migration_name] = $arguments;
  }
  $og_group3_arguments = array();
  foreach ($og_group_3 as $type => $class){
	 $og_group3_arguments[$type] = array(
      'class_name' => $class,
      'description' => t("Migration of table $type"),
      'source_type' => $type,
      'destination_type' => $type,
	  'group_name' => 'oa_group_og_group3',
    );
  }
  foreach ($og_group3_arguments as $migration_name => $arguments) {
    $arguments = array_merge_recursive($arguments, $common_arguments);
    $api['migrations'][$migration_name] = $arguments;
  }
  $oa_group1_arguments = array();
  foreach ($oa_group_1 as $type => $class){
	 $oa_group1_arguments[$type] = array(
      'class_name' => $class,
      'description' => t("Migration of table $type"),
      'source_type' => $type,
      'destination_type' => $type,
	  'group_name' => 'oa_group_oa_group1',
    );
  }
  foreach ($oa_group1_arguments as $migration_name => $arguments) {
    $arguments = array_merge_recursive($arguments, $common_arguments);
    $api['migrations'][$migration_name] = $arguments;
  }
  
  
	/*
  // Menu migrations -- same requirements as users
  $menu_arguments = $common_arguments + array(
    'description' => t('Migration of menus from Drupal 6'),
    'class_name' => 'DrupalMenu6Migration',
  );

  // We just use the migrate_d2d D6 migration class as-is.
  $api['migrations']['Menu'] = $menu_arguments;

  // Menu links migrations -- basic requirements, plus must set up menu dependency
  $menu_links_arguments = $common_arguments + array(
    'description' => t('Migration of menu links from Drupal 6'),
    'class_name' => 'DrupalMenuLinks6Migration',
    'menu_migration' => 'Menu',
  );
  $api['migrations']['MenuLinks'] = $menu_links_arguments;
	*/
	// field collection
	
	$field_collection_fields= array(
		'field_related_tasks2' => array('oa_worktracker_task'),
		
	);
	foreach($field_collection_fields as $type=>$dependencies){
		$api['migrations'][$type] = $common_arguments + array(
		'description' => t('Migration of field collection field_notes'),
		'class_name' => 'OAFCMigration',
		'source_type' => $type,
		'destination_type' => $type,
		'group_name' => 'oa_group_field_collection_group1',
		'dependencies'=>$dependencies,
		);
	}
 

  return $api;
}
