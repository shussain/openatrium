<?php
/**
 * @file
 * nnhpd_its_settings.features.inc
 */

/**
 * Implements hook_default_command_button().
 */
function nnhpd_its_settings_default_command_button() {
  $items = array();
  $items['my_event'] = entity_import('command_button', '{
    "bundle" : "node_add",
    "name" : "my_event",
    "title" : "Create My Event",
    "language" : "und",
    "field_command_link" : { "und" : [
        {
          "url" : "node\\/add\\/my-event",
          "title" : "Create My Event",
          "attributes" : []
        }
      ]
    }
  }');
  $items['nhpd_imdb'] = entity_import('command_button', '{
    "bundle" : "node_add",
    "name" : "nhpd_imdb",
    "title" : "Create NHPD IMDB",
    "language" : "und",
    "field_command_link" : { "und" : [
        {
          "url" : "node\\/add\\/nhpd-imdb",
          "title" : "Create NHPD IMDB",
          "attributes" : []
        }
      ]
    }
  }');
  $items['nhpd_wiki'] = entity_import('command_button', '{
    "bundle" : "node_add",
    "name" : "nhpd_wiki",
    "title" : "Create Wiki",
    "language" : "und",
    "field_command_link" : { "und" : [
        {
          "url" : "node\\/add\\/nhpd-wiki",
          "title" : "Create Wiki",
          "attributes" : []
        }
      ]
    }
  }');
  $items['oa_section'] = entity_import('command_button', '{
    "bundle" : "node_add",
    "name" : "oa_section",
    "title" : "Create Section Page",
    "language" : "und",
    "field_command_link" : { "und" : [
        {
          "url" : "node\\/add\\/oa-section",
          "title" : "Create Section Page",
          "attributes" : []
        }
      ]
    }
  }');
  $items['oa_space'] = entity_import('command_button', '{
    "bundle" : "node_add",
    "name" : "oa_space",
    "title" : "Create Space",
    "language" : "und",
    "field_command_link" : { "und" : [
        {
          "url" : "node\\/add\\/oa-space",
          "title" : "Create Space",
          "attributes" : []
        }
      ]
    }
  }');
  $items['oa_worktracker_task'] = entity_import('command_button', '{
    "bundle" : "node_add",
    "name" : "oa_worktracker_task",
    "title" : "Create Task",
    "language" : "und",
    "field_command_link" : { "und" : [
        {
          "url" : "node\\/add\\/oa-worktracker-task",
          "title" : "Create Task",
          "attributes" : []
        }
      ]
    }
  }');
  $items['task_reporting'] = entity_import('command_button', '{
    "bundle" : "node_add",
    "name" : "task_reporting",
    "title" : "Create Task reporting",
    "language" : "und",
    "field_command_link" : { "und" : [
        {
          "url" : "node\\/add\\/task-reporting",
          "title" : "Create Task reporting",
          "attributes" : []
        }
      ]
    }
  }');
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function nnhpd_its_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function nnhpd_its_settings_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function nnhpd_its_settings_node_info() {
  $items = array(
    'my_event' => array(
      'name' => t('My Event'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'nhpd_imdb' => array(
      'name' => t('NHPD IMDB'),
      'base' => 'node_content',
      'description' => t('IMDB issue tracking system migrated from NHPDSAS.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'nhpd_wiki' => array(
      'name' => t('Wiki'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'task_reporting' => array(
      'name' => t('Task reporting'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
