<?php
/**
 * @file
 * oa_field_collection_fields.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function oa_field_collection_fields_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_related_task'.
  $field_bases['field_related_task'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_related_task',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-autocomplete' => array(
            'status' => 0,
          ),
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'lock_revision' => 0,
        'reference_revisions' => 0,
        'sort' => array(
          'direction' => 'ASC',
          'property' => 'title',
          'type' => 'property',
        ),
        'target_bundles' => array(
          'oa_worktracker_task' => 'oa_worktracker_task',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_relation_type'.
  $field_bases['field_relation_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_relation_type',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'relates' => 'Related to',
        'duplicates' => 'Duplicates',
        'duplicated by' => 'Duplicated by',
        'blocks' => 'Blocks',
        'blocked by' => 'Blocked by',
        'precedes' => 'Precedes',
        'follows' => 'Follows',
        'copied to' => 'Copied to',
        'copied from' => 'Copied from',
      ),
      'allowed_values_function' => 'nhpd_oa2_related_task_relation_allowed_values',
      'allowed_values_php' => '',
      'values_field' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
