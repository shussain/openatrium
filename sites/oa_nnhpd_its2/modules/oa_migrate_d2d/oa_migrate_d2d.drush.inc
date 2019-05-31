<?php

/**
 * Implements hook_drush_command().
 */
function oa_migrate_d2d_drush_command() {
  
  $items['oa-its-migrate'] = array(
    'description' => 'Migrate  OA',
    'aliases' => array('oim'),
    
    'options' => array(
	  'operation' => 'clear-only, import-only, clear-and-import. Default:import-only',
	  'update' =>'Process updating all imported items. Effective only for imports.',
	  'groups' =>'Comma delimited group names',
	  'batch_size'=>'Integer, the number of records to be processed in one batch. Default: 1000',
	  'memory_limit'=>'Drupal memory limit, like 860M, 2G, etc. Default: 1024M',
    ),
    'examples' => array(
      'drush oim --operation=clear-only' => 'Clear NHPID Data nodes only.',
      'drush oim --operation=--clear-and-import --update --groups=migrate_group1, migrate_group3'  => 'Clear all the NHPID data nodes first, them migrate them again.',
    ),
  );
  
  return $items;
}

/**
 * Callback for the drush-demo-command command
 */
function drush_oa_migrate_d2d_oa_its_migrate(){
    
    
  // Option
  $operation = drush_get_option('operation', 'import-only');
  $batch_size = drush_get_option('batch_size', '1000');
  $memory_limit=drush_get_option('memory_limit', '1024M');
  if(!drupal_check_memory_limit($memory_limit)){
	  ini_set('memory_limit', $memory_limit);
  }
  //print_r($operation);
  $groups=array(
      'oa_group_1' => 1,
	  'oa_group_data_node_group0' => 2,
	  'oa_group_data_node_group1' => 3,
	  'oa_group_data_node_group2' => 4,
	  'oa_group_data_node_group3' => 5,
	  'oa_group_data_node_group4' => 6,
	  'oa_group_field_collection_group1' => 7,
	  'oa_group_og_group1' => 8,
	  'oa_group_og_group2' => 9,
	  'oa_group_og_group3' => 10,
	  'oa_group_oa_group1' => 11,
	  'oa_group_comment_group1' => 11,

	  
	  
      );
  if(drush_get_option('groups', '')){
	  $groups=select_groups($groups);
  }
  //print_r($groups);
  $migrates=oa_migrate_d2d_get_migrates();
  $migrations = migrate_migrations();
  drush_set_option('strict', FALSE);
  switch($operation){
	  case 'clear-only':
	  case 'clear-and-import':
		print_r($operation);
		arsort($groups);
		foreach($groups as $group=>$weight){
			if(isset($migrates[$group])){
				print_r(t("Rolling back @group...\n", array('@group'=>$group)));
				foreach($migrates[$group] as $migrate){
					//User and Role are better not rolled back
					if($migrate == 'User' or $migrate=='Role'){
						continue;
					}
					$migration=$migrations[$migrate];
					while ($migration->importedCount() > 0){
						drush_invoke_process('@self', 'migrate-reset-status', array($migrate));
						drush_invoke_process('@self', 'migrate-rollback', array($migrate), array('feedback'=>'100 seconds'));
					}
				}
			}
		}
		//delete other nodes which are not migrated
		$types = array('oa_group','oa_space','os_section', 'oa_worktracker_task', 'task_reporting', 'nhpd_wiki', ) ;
		foreach($types as $type){
			drush_invoke_process('@self', 'migrate-wipe', array($type));
		}
		if($operation=='clear-only'){
			break;
		}

	  case 'import-only':
		//print_r($operation);
		asort($groups);
		foreach($groups as $group=>$weight){
			print_r(t("Migrating @group...\n", array('@group'=>$group)));
			if(isset($migrates[$group])){
				foreach($migrates[$group] as $migrate){
					print_r(t("Migrating @migrate ...\n", array('@migrate'=>$migrate)));
					$migration=$migrations[$migrate];
					drush_invoke_process('@self', 'migrate-reset-status', array($migrate));
					if (drush_get_option('update')){
						//drush_invoke_process('@self', 'migrate-import', array($migrate), array('update'=>True, 'feedback'=>'100 seconds'));
						/*
						if (method_exists($migration, 'getUnprocessedAndNeedsUpdateIds')){
							while ($migration->getUnprocessedAndNeedsUpdateIds()){
								$unprocessed_ids = $migration->getUnprocessedAndNeedsUpdateIds();
								$ids_chunks=array_chunk($unprocessed_ids, 1000);
								foreach ($ids_chunks as $ids_chunk){
									$idlist=implode(',', $ids_chunk);
									drush_invoke_process('@self', 'migrate-import', array($migrate), array('update'=>True, 'idlist' =>$idlist, 'feedback'=>'100 seconds'));
								}
							}
						}
						*/
						if (method_exists($migration, 'getSourceIds')){
							$unprocessed_ids = $migration->getSourceIds();
							$unprocessed = count($unprocessed_ids);
							$processed = 0;
							$ids_chunks=array_chunk($unprocessed_ids, $batch_size);
							foreach ($ids_chunks as $ids_chunk){
								$idlist=implode(',', $ids_chunk);
								drush_invoke_process('@self', 'migrate-import', array($migrate), array('update'=>True, 'idlist' =>$idlist, 'feedback'=>'100 seconds'));
								$processed = $processed + count($ids_chunk);
								$remaining = $unprocessed - $processed;
								print_r("Total: $unprocessed. Processed: $processed. Remaining: $remaining\n");
							}
							
						}
						else{
							drush_invoke_process('@self', 'migrate-import', array($migrate), array('update'=>True, 'feedback'=>'100 seconds'));
						}
					}
					else{
						//drush_invoke_process('@self', 'migrate-import', array($migrate), array('feedback'=>'100 seconds'));
						//print_r("not updating\n");
						/*
						if (method_exists($migration, 'getUnprocessedIds')){
							while ($migration->getUnprocessedIds()){
								$unprocessed_ids = $migration->getUnprocessedIds();
								$ids_chunks=array_chunk($unprocessed_ids, 1000);
								foreach ($ids_chunks as $ids_chunk){
									$idlist=implode(',', $ids_chunk);
									//print_r($idlist);
									drush_invoke_process('@self', 'migrate-import', array($migrate), array('update'=>True,'idlist' =>$idlist, 'feedback'=>'100 seconds'));
								}
								
							}
						}
						*/
						if (method_exists($migration, 'getSourceIds')){
							$unprocessed_ids = $migration->getSourceIds();
							$unprocessed = count($unprocessed_ids);
							$ids_chunks=array_chunk($unprocessed_ids, $batch_size);
							$processed = 0;
							//print_r($batch_size);
							foreach ($ids_chunks as $ids_chunk){
								$idlist=implode(',', $ids_chunk);
								//print_r($idlist);
								drush_invoke_process('@self', 'migrate-import', array($migrate), array('update'=>True,'idlist' =>$idlist, 'feedback'=>'100 seconds'));
								$processed = $processed + count($ids_chunk);
								$remaining = $unprocessed - $processed;
								print_r("Total: $unprocessed. Processed: $processed. Remaining: $remaining\n");
							}
						}
						else{
							drush_invoke_process('@self', 'migrate-import', array($migrate), array('feedback'=>'100 seconds'));
						}
					}
					

					print_r(t("Migrating @migrate is processed once.\n", array('@migrate'=>$migrate)));
					
				}
			}
		}
		
	  break;
	  
	  default:
	  drush_set_error(t('I cannot understand the operation "@operation". Please use "clear-only, import-only, or clear-and-import"', array('@operation'=>$operation)));
	 
	  
  }
  
}

function oa_migrate_d2d_get_migrates($group=null){
	$query=db_select('migrate_status', 'm')
		->fields('m', array('machine_name', 'group_name'));

	if ($group){
		$query->condition('group_name', $group);
	}
	else{
		$query->condition('group_name', 'oa_group%', 'LIKE');
	}

	$result=$query->execute();
	$rtn=array();
	while($rc=$result->fetchObject()){
		$rtn[$rc->group_name][]=$rc->machine_name;
	}
	return $rtn;
}

function select_groups($groups){
	$selected_groups = array();
	foreach (explode(',', drush_get_option('groups', '')) as $group){
		$selected_groups[$group]=0;
	}
	return array_intersect_key($groups, $selected_groups);
}
