<?php
/**
 * @file
 * oa_its_panelizer.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function oa_its_panelizer_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: panelizer_defaults
  $overrides["panelizer_defaults.node:oa_section:default.pipeline"] = 'standard';
  $overrides["panelizer_defaults.node:oa_section:oa_section_worktracker.display|content|new-083432ea-5fb3-4e40-8c9d-09ed848deab7|configuration|exposed|og_group_ref_target_id"] = 'CURRENT';
  $overrides["panelizer_defaults.node:oa_section:oa_section_worktracker.display|content|new-083432ea-5fb3-4e40-8c9d-09ed848deab7|configuration|header_type"] = 'titles';
  $overrides["panelizer_defaults.node:oa_section:oa_section_worktracker.display|content|new-083432ea-5fb3-4e40-8c9d-09ed848deab7|configuration|override_title_heading"] = 'h2';
  $overrides["panelizer_defaults.node:oa_section:oa_section_worktracker.display|content|new-083432ea-5fb3-4e40-8c9d-09ed848deab7|configuration|pager_id"] = '';
  $overrides["panelizer_defaults.node:oa_section:oa_section_worktracker.display|content|new-083432ea-5fb3-4e40-8c9d-09ed848deab7|configuration|use_pager"] = 1;
  $overrides["panelizer_defaults.node:oa_section:oa_section_worktracker.display|content|new-083432ea-5fb3-4e40-8c9d-09ed848deab7|configuration|view_settings"] = 'table';
  $overrides["panelizer_defaults.node:oa_section:oa_section_worktracker.display|content|new-083432ea-5fb3-4e40-8c9d-09ed848deab7|position"] = 3;
  $overrides["panelizer_defaults.node:oa_section:oa_section_worktracker.display|content|new-09e954ae-2d68-459f-bdbf-b1963c54b4e1|position"] = 2;
  $overrides["panelizer_defaults.node:oa_section:oa_section_worktracker.display|panels|contentmain|2"] = 'new-09e954ae-2d68-459f-bdbf-b1963c54b4e1';
  $overrides["panelizer_defaults.node:oa_section:oa_section_worktracker.display|panels|contentmain|3"] = 'new-083432ea-5fb3-4e40-8c9d-09ed848deab7';
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-35bfb19f-2f54-47c3-9d8e-d37ef0e66bdb"] = (object) array(
      'pid' => 'new-35bfb19f-2f54-47c3-9d8e-d37ef0e66bdb',
      'panel' => 'contentmain',
      'type' => 'views_panes',
      'subtype' => 'customized_work_tracker-panel_pane_chart_status',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'exposed' => array(
          'og_group_ref_target_id' => 'CURRENT',
          'og_group_ref_target_id_mine' => 0,
          'og_subspaces_view_all' => 0,
          'og_subspaces_view_parent' => 0,
        ),
        'view_settings' => 'fields',
        'header_type' => 'none',
        'view_mode' => 'teaser',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => array(
          'pane_title' => '%title',
          'pane_collapsed' => 1,
          'pane_empty_check' => 0,
        ),
        'style' => 'collapsible',
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 2,
      'locks' => array(),
      'uuid' => '35bfb19f-2f54-47c3-9d8e-d37ef0e66bdb',
    );
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-9995e8b8-d8cb-4339-a7ad-1f0ea569d2de|position"] = 4;
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-c9d71db5-b552-409c-b30f-ee0696aa6e3f"] = (object) array(
      'pid' => 'new-c9d71db5-b552-409c-b30f-ee0696aa6e3f',
      'panel' => 'contentmain',
      'type' => 'views_panes',
      'subtype' => 'customized_work_tracker-task_list_for_space',
      'shown' => TRUE,
      'access' => array(
        'plugins' => array(),
      ),
      'configuration' => array(
        'items_per_page' => 10,
        'view_settings' => 'table',
        'header_type' => 'none',
        'view_mode' => 'teaser',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 3,
      'locks' => array(),
      'uuid' => 'c9d71db5-b552-409c-b30f-ee0696aa6e3f',
    );
  $overrides["panelizer_defaults.node:oa_space:default.display|panels|contentmain|2"] = 'new-35bfb19f-2f54-47c3-9d8e-d37ef0e66bdb';
  $overrides["panelizer_defaults.node:oa_space:default.display|panels|contentmain|3"] = 'new-c9d71db5-b552-409c-b30f-ee0696aa6e3f';
  $overrides["panelizer_defaults.node:oa_space:default.display|panels|contentmain|4"] = 'new-9995e8b8-d8cb-4339-a7ad-1f0ea569d2de';
  $overrides["panelizer_defaults.node:oa_worktracker_task:default.display|content|new-36e8d7f2-31db-441b-903b-f6932d38e136|position"] = 2;
  $overrides["panelizer_defaults.node:oa_worktracker_task:default.display|content|new-4d5d6600-bc97-4944-b5ea-294203e71036"] = (object) array(
      'pid' => 'new-4d5d6600-bc97-4944-b5ea-294203e71036',
      'panel' => 'sidebar',
      'type' => 'sibling_tasks',
      'subtype' => 'sibling_tasks',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'description' => 'To show info sibling tasks',
        'title' => 'Sibling tasks',
        'override_title' => 0,
        'override_title_text' => '',
        'override_title_heading' => 'h2',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 7,
      'locks' => array(),
      'uuid' => '4d5d6600-bc97-4944-b5ea-294203e71036',
    );
  $overrides["panelizer_defaults.node:oa_worktracker_task:default.display|content|new-4d950f23-b75f-4181-b4bd-bcaee2827726|position"] = 1;
  $overrides["panelizer_defaults.node:oa_worktracker_task:default.display|content|new-6a68f614-9970-4835-a56c-60e699b3a7d0"] = (object) array(
      'pid' => 'new-6a68f614-9970-4835-a56c-60e699b3a7d0',
      'panel' => 'sidebar',
      'type' => 'is_parent_task',
      'subtype' => 'is_parent_task',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'description' => 'To show info "This is a parent task"',
        'title' => 'Is parent task',
        'override_title' => 0,
        'override_title_text' => '',
        'override_title_heading' => 'h2',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 4,
      'locks' => array(),
      'uuid' => '6a68f614-9970-4835-a56c-60e699b3a7d0',
    );
  $overrides["panelizer_defaults.node:oa_worktracker_task:default.display|content|new-93700529-45a6-445c-92a5-2afef2b86fa3|shown"] = FALSE;
  $overrides["panelizer_defaults.node:oa_worktracker_task:default.display|content|new-94dd0270-bff0-413b-9ca0-d89beedd356c"] = (object) array(
      'pid' => 'new-94dd0270-bff0-413b-9ca0-d89beedd356c',
      'panel' => 'sidebar',
      'type' => 'related_tasks',
      'subtype' => 'related_tasks',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'description' => 'To show related tasks information',
        'title' => 'Related tasks',
        'override_title' => 0,
        'override_title_text' => '',
        'override_title_heading' => 'h2',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 8,
      'locks' => array(),
      'uuid' => '94dd0270-bff0-413b-9ca0-d89beedd356c',
    );
  $overrides["panelizer_defaults.node:oa_worktracker_task:default.display|content|new-9b230061-7d4c-428e-86e4-38471a906a11"] = (object) array(
      'pid' => 'new-9b230061-7d4c-428e-86e4-38471a906a11',
      'panel' => 'sidebar',
      'type' => 'oa_watchers_admin',
      'subtype' => 'oa_watchers_admin',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'description' => 'To set watchers for a task, etc',
        'title' => 'Watchers (non-members only)',
        'override_title' => 0,
        'override_title_text' => '',
        'override_title_heading' => 'h2',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 9,
      'locks' => array(),
      'uuid' => '9b230061-7d4c-428e-86e4-38471a906a11',
    );
  $overrides["panelizer_defaults.node:oa_worktracker_task:default.display|content|new-d041f77e-0ecf-42a9-bebf-685553c4a83f"] = (object) array(
      'pid' => 'new-d041f77e-0ecf-42a9-bebf-685553c4a83f',
      'panel' => 'sidebar',
      'type' => 'nhpd_oa_move_copy',
      'subtype' => 'nhpd_oa_move_copy',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'description' => 'To copy or move node',
        'title' => 'Move/Copy',
        'override_title' => 0,
        'override_title_text' => '',
        'override_title_heading' => 'h2',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => 'd041f77e-0ecf-42a9-bebf-685553c4a83f',
    );
  $overrides["panelizer_defaults.node:oa_worktracker_task:default.display|content|new-d4169ef3-aee6-4c97-8ddd-68312287ce77"] = (object) array(
      'pid' => 'new-d4169ef3-aee6-4c97-8ddd-68312287ce77',
      'panel' => 'sidebar',
      'type' => 'subtasks',
      'subtype' => 'subtasks',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'description' => 'To show subtasks information',
        'title' => 'Subtasks',
        'override_title' => 0,
        'override_title_text' => '',
        'override_title_heading' => 'h2',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 6,
      'locks' => array(),
      'uuid' => 'd4169ef3-aee6-4c97-8ddd-68312287ce77',
    );
  $overrides["panelizer_defaults.node:oa_worktracker_task:default.display|content|new-f215e880-fefb-45ac-be9a-83672017196f"] = (object) array(
      'pid' => 'new-f215e880-fefb-45ac-be9a-83672017196f',
      'panel' => 'sidebar',
      'type' => 'entity_field',
      'subtype' => 'node:field_parent_task',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'title',
        'formatter' => 'entityreference_label',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => FALSE,
        'formatter_settings' => array(
          'link' => 1,
          'bypass_access' => 0,
        ),
        'context' => array(),
        'override_title' => 0,
        'override_title_text' => '',
        'override_title_heading' => 'h2',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 5,
      'locks' => array(),
      'uuid' => 'f215e880-fefb-45ac-be9a-83672017196f',
    );
  $overrides["panelizer_defaults.node:oa_worktracker_task:default.display|content|new-fe5afb3a-1258-40e5-9d8a-50ea4cb283b5|position"] = 10;
  $overrides["panelizer_defaults.node:oa_worktracker_task:default.display|content|new-fe734968-2437-401a-a83e-2a48ffc565d3|position"] = 3;
  $overrides["panelizer_defaults.node:oa_worktracker_task:default.display|panels|sidebar|0"] = 'new-d041f77e-0ecf-42a9-bebf-685553c4a83f';
  $overrides["panelizer_defaults.node:oa_worktracker_task:default.display|panels|sidebar|1"] = 'new-4d950f23-b75f-4181-b4bd-bcaee2827726';
  $overrides["panelizer_defaults.node:oa_worktracker_task:default.display|panels|sidebar|10"] = 'new-fe5afb3a-1258-40e5-9d8a-50ea4cb283b5';
  $overrides["panelizer_defaults.node:oa_worktracker_task:default.display|panels|sidebar|2"] = 'new-36e8d7f2-31db-441b-903b-f6932d38e136';
  $overrides["panelizer_defaults.node:oa_worktracker_task:default.display|panels|sidebar|3"] = 'new-fe734968-2437-401a-a83e-2a48ffc565d3';
  $overrides["panelizer_defaults.node:oa_worktracker_task:default.display|panels|sidebar|4"] = 'new-6a68f614-9970-4835-a56c-60e699b3a7d0';
  $overrides["panelizer_defaults.node:oa_worktracker_task:default.display|panels|sidebar|5"] = 'new-f215e880-fefb-45ac-be9a-83672017196f';
  $overrides["panelizer_defaults.node:oa_worktracker_task:default.display|panels|sidebar|6"] = 'new-d4169ef3-aee6-4c97-8ddd-68312287ce77';
  $overrides["panelizer_defaults.node:oa_worktracker_task:default.display|panels|sidebar|7"] = 'new-4d5d6600-bc97-4944-b5ea-294203e71036';
  $overrides["panelizer_defaults.node:oa_worktracker_task:default.display|panels|sidebar|8"] = 'new-94dd0270-bff0-413b-9ca0-d89beedd356c';
  $overrides["panelizer_defaults.node:oa_worktracker_task:default.display|panels|sidebar|9"] = 'new-9b230061-7d4c-428e-86e4-38471a906a11';
  $overrides["panelizer_defaults.user:user:default.display|content|new-23b1f4f1-cda8-42ca-880a-afc2ae92f3e9|configuration|formatter_settings|image_style"] = 'panopoly_image_quarter';
  $overrides["panelizer_defaults.user:user:default.display|content|new-23b1f4f1-cda8-42ca-880a-afc2ae92f3e9|panel"] = 'sidebar';
  $overrides["panelizer_defaults.user:user:default.display|content|new-23b1f4f1-cda8-42ca-880a-afc2ae92f3e9|position"] = 1;
  $overrides["panelizer_defaults.user:user:default.display|content|new-2660b630-9c8d-445e-8e31-0065d281004a"] = (object) array(
      'pid' => 'new-2660b630-9c8d-445e-8e31-0065d281004a',
      'panel' => 'contentheader',
      'type' => 'views_panes',
      'subtype' => 'customized_work_tracker-panel_user_tasks',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'view_settings' => 'table',
        'header_type' => 'none',
        'view_mode' => 'teaser',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 3,
      'locks' => array(),
      'uuid' => '2660b630-9c8d-445e-8e31-0065d281004a',
    );
  $overrides["panelizer_defaults.user:user:default.display|content|new-5a2c841a-b899-449a-86bc-7dcff7404ba0"] = (object) array(
      'pid' => 'new-5a2c841a-b899-449a-86bc-7dcff7404ba0',
      'panel' => 'contentheader',
      'type' => 'views_panes',
      'subtype' => 'nhpd_calendar-panel_pane_my_calendar',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'view_settings' => 'fields',
        'header_type' => 'titles',
        'view_mode' => 'teaser',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 4,
      'locks' => array(),
      'uuid' => '5a2c841a-b899-449a-86bc-7dcff7404ba0',
    );
  $overrides["panelizer_defaults.user:user:default.display|content|new-7e2787f8-3f6c-4b3b-a1bb-e11225e395d5"] = (object) array(
      'pid' => 'new-7e2787f8-3f6c-4b3b-a1bb-e11225e395d5',
      'panel' => 'contentheader',
      'type' => 'views_panes',
      'subtype' => 'oa_worktracker-user_tasks',
      'shown' => FALSE,
      'access' => array(),
      'configuration' => array(
        'show_exposed_form' => 1,
        'items_per_page' => 10,
        'fields_override' => array(
          'title' => 1,
          'timestamp' => 1,
          'realname_1' => 0,
          'realname' => 0,
          'title_1' => 1,
          'field_oa_worktracker_priority' => 1,
          'field_oa_worktracker_task_type' => 1,
          'field_oa_worktracker_task_status' => 1,
          'comment_count' => 1,
          'last_updated' => 1,
        ),
        'exposed' => array(
          'field_oa_worktracker_task_status_value' => array(),
          'field_oa_worktracker_priority_value' => array(),
          'field_oa_worktracker_task_type_value' => array(),
          'flagged' => 0,
        ),
        'context' => array(
          0 => 'panelizer',
        ),
        'override_title' => '',
        'override_title_text' => '',
        'view_settings' => 'fields',
        'header_type' => 'none',
        'view_mode' => 'teaser',
        'widget_title' => 'Your Tasks',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => '7e2787f8-3f6c-4b3b-a1bb-e11225e395d5',
    );
  $overrides["panelizer_defaults.user:user:default.display|content|new-80a6a21b-20e6-4acf-9772-eb089cc6082b"] = (object) array(
      'pid' => 'new-80a6a21b-20e6-4acf-9772-eb089cc6082b',
      'panel' => 'sidebar',
      'type' => 'oa_core_user_spaces',
      'subtype' => 'oa_core_user_spaces',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'featured_spaces' => 1,
        'context' => 'panelizer',
        'override_title' => 0,
        'override_title_text' => '',
        'image_size' => 'none',
        'show_description' => 0,
        'show_sections' => 0,
        'tabs' => array(
          'Favorite' => 'Favorite',
          'Memberships' => 'Memberships',
          'All' => 0,
        ),
        'link_class' => 'btn',
        'show_links' => 0,
        'num_per_page' => 15,
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
        'style' => 'oa_styles_oa_pane',
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => '80a6a21b-20e6-4acf-9772-eb089cc6082b',
    );
  $overrides["panelizer_defaults.user:user:default.display|content|new-c068286a-0523-45cb-9190-9cc350ad6845"] = (object) array(
      'pid' => 'new-c068286a-0523-45cb-9190-9cc350ad6845',
      'panel' => 'contentheader',
      'type' => 'views_panes',
      'subtype' => 'oa_comment_topics-comment_user_topics_replied',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'view_settings' => 'fields',
        'header_type' => 'none',
        'view_mode' => 'teaser',
        'exposed' => array(
          'type' => array(),
          'flagged' => 0,
          'og_group_ref_target_id' => 'CURRENT',
          'og_group_ref_target_id_mine' => 0,
          'og_subspaces_view_all' => 0,
          'og_subspaces_view_parent' => 0,
          'oa_section_ref_target_id' => '',
        ),
        'show_exposed_form' => 0,
        'use_pager' => 1,
        'pager_id' => 1,
        'items_per_page' => 20,
        'override_title' => '',
        'override_title_text' => '',
        'override_title_heading' => 'h2',
        'widget_title' => 'My Reply Topics',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
        'style' => 'oa_styles_oa_pane',
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 2,
      'locks' => array(),
      'uuid' => 'c068286a-0523-45cb-9190-9cc350ad6845',
    );
  $overrides["panelizer_defaults.user:user:default.display|content|new-d3a2a9fb-f88a-4730-bfab-c36f4e0af395"] = (object) array(
      'pid' => 'new-d3a2a9fb-f88a-4730-bfab-c36f4e0af395',
      'panel' => 'sidebar',
      'type' => 'entity_field',
      'subtype' => 'user:field_user_about',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'hidden',
        'formatter' => 'text_default',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => FALSE,
        'formatter_settings' => array(),
        'context' => array(),
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 2,
      'locks' => array(),
      'uuid' => 'd3a2a9fb-f88a-4730-bfab-c36f4e0af395',
    );
  $overrides["panelizer_defaults.user:user:default.display|content|new-d76e85cd-4625-4a52-a17b-e5c65e1a0247"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|content|new-f34b9365-3769-4c85-9788-bbfa336fdcad"] = (object) array(
      'pid' => 'new-f34b9365-3769-4c85-9788-bbfa336fdcad',
      'panel' => 'contentheader',
      'type' => 'views_panes',
      'subtype' => 'oa_comment_topics-comment_user_topics',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'view_settings' => 'fields',
        'header_type' => 'none',
        'view_mode' => 'teaser',
        'exposed' => array(
          'type' => array(),
          'flagged' => 0,
          'og_group_ref_target_id' => 'CURRENT',
          'og_group_ref_target_id_mine' => 0,
          'og_subspaces_view_all' => 0,
          'og_subspaces_view_parent' => 0,
          'oa_section_ref_target_id' => '',
        ),
        'show_exposed_form' => 0,
        'use_pager' => 1,
        'pager_id' => 1,
        'items_per_page' => 20,
        'override_title' => '',
        'override_title_text' => '',
        'override_title_heading' => 'h2',
        'widget_title' => 'My Topics',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
        'style' => 'oa_styles_oa_pane',
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 1,
      'locks' => array(),
      'uuid' => 'f34b9365-3769-4c85-9788-bbfa336fdcad',
    );
  $overrides["panelizer_defaults.user:user:default.display|layout"] = 'radix_selby';
  $overrides["panelizer_defaults.user:user:default.display|panel_settings|style_settings|center"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|panel_settings|style_settings|column1"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|panel_settings|style_settings|column2"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|panel_settings|style_settings|contentcolumn1"] = NULL;
  $overrides["panelizer_defaults.user:user:default.display|panel_settings|style_settings|contentcolumn2"] = NULL;
  $overrides["panelizer_defaults.user:user:default.display|panel_settings|style_settings|contentfooter"] = NULL;
  $overrides["panelizer_defaults.user:user:default.display|panel_settings|style_settings|contentheader"] = NULL;
  $overrides["panelizer_defaults.user:user:default.display|panel_settings|style_settings|contentmain"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|panel_settings|style_settings|default"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|panels|column1"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|panels|column2"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|panels|contentheader"] = array(
    0 => 'new-7e2787f8-3f6c-4b3b-a1bb-e11225e395d5',
    1 => 'new-f34b9365-3769-4c85-9788-bbfa336fdcad',
    2 => 'new-c068286a-0523-45cb-9190-9cc350ad6845',
    3 => 'new-2660b630-9c8d-445e-8e31-0065d281004a',
    4 => 'new-5a2c841a-b899-449a-86bc-7dcff7404ba0',
  );
  $overrides["panelizer_defaults.user:user:default.display|panels|sidebar"] = array(
    0 => 'new-80a6a21b-20e6-4acf-9772-eb089cc6082b',
    1 => 'new-23b1f4f1-cda8-42ca-880a-afc2ae92f3e9',
    2 => 'new-d3a2a9fb-f88a-4730-bfab-c36f4e0af395',
  );
  $overrides["panelizer_defaults.user:user:default.display|title"] = '%user:name';
  $overrides["panelizer_defaults.user:user:default.pipeline"] = 'standard';

 return $overrides;
}
