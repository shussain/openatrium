<?php
/**
 * @file
 * nnhpd_its_settings.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function nnhpd_its_settings_filter_default_formats() {
  $formats = array();

  // Exported format: NHPD Wiki.
  $formats['nhpd_wiki'] = array(
    'format' => 'nhpd_wiki',
    'name' => 'NHPD Wiki',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'freelinking' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(),
      ),
      'textile' => array(
        'weight' => -45,
        'status' => 1,
        'settings' => array(
          'textile_tags' => 0,
        ),
      ),
      'toc_filter' => array(
        'weight' => -44,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
