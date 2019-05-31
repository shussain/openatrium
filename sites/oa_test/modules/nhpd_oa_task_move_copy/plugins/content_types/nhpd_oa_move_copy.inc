<?php

$plugin = array(
  'single' => TRUE,
  'title' => t('Move/Copy'),
  'description' => t(''),
  'category' => t('Custom Panes'),
  'edit form' => 'nhpd_oa_nhpd_oa_move_copy_form',
  'render callback' => 'nhpd_oa_nhpd_oa_move_copy_render',
  'admin info' => 'nhpd_oa_nhpd_oa_move_copy_info',
  'defaults' => array('description' => t('To copy or move node'),
  'title' => 'Move/Copy',),
  'all contexts' => TRUE,
);
function nhpd_oa_nhpd_oa_move_copy_form($form, &$form_state) {
  $conf = $form_state['conf'];
  $form['description'] = array(
    '#title' => t('Description'),
    '#description' => t('Description (administrative)'),
    '#type' => 'textfield',
    '#required' => FALSE,
    '#default_value' => $conf['description'],
  );

  return $form;
}
function nhpd_oa_nhpd_oa_move_copy_form_submit($form, &$form_state) {
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}

function nhpd_oa_nhpd_oa_move_copy_render($subtype, $conf, $args, $contexts) {
	$block = new stdClass();

	// initial content is blank
	$block->title = t('Copy and Move setting'); // This will be overridden by the user within the panel options.
	$form = drupal_get_form('_nhpd_oa_nhpd_oa_move_copy_render_form');
	$content = drupal_render($form);
	//$content = 'example content';
	$block->content = $content;
	//drupal_set_message(nhpid_api_dump($content, 'red', TRUE));
	return $block;
}

function nhpd_oa_nhpd_oa_move_copy_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $block = new stdClass;
    $block->title = $conf['override_title'] ? $conf['override_title_text'] : 'Node Copy and Move setting';
    return $block;
  }
}

function _nhpd_oa_nhpd_oa_move_copy_render_form($form, &$form_state){
	
	$currentnode_nid = (arg(0) == 'node' && is_numeric(arg(1))) ? arg(1) : NULL;
	
	$form['#access'] = og_user_access('node', $current_space, 'access nhpd oa task move and copy', NULL, FALSE, TRUE);
	$form['nid'] = array(
    '#type' => 'value',
		'#value' => $currentnode_nid,
	);
	
	$form['submit'] = array(
		'#type' => 'submit',
		'#value' => t('Copy/Move'),
		'#submit' => array('_nhpd_oa_nhpd_oa_move_copy_render_form_submit'),
	);

	return $form;
}

function _nhpd_oa_nhpd_oa_move_copy_render_form_submit(&$form, &$form_state){
	$nid = $form_state['values']['nid'];
	drupal_goto("node/$nid/nhpd_oa_task_move_copy");

}