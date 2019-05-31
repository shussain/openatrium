<?php
/**
 * @file
 * nnhpd_its_settings.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function nnhpd_its_settings_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_oa_access|node|nhpd_wiki|default';
  $field_group->group_name = 'group_oa_access';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nhpd_wiki';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Access',
    'weight' => '6',
    'children' => array(
      0 => 'og_group_ref',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-oa-access field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_oa_access|node|nhpd_wiki|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_oa_access|node|nhpd_wiki|form';
  $field_group->group_name = 'group_oa_access';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nhpd_wiki';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Access',
    'weight' => '9',
    'children' => array(
      0 => 'og_group_ref',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-oa-access field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_oa_access|node|nhpd_wiki|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Access');

  return $field_groups;
}
