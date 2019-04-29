<?php
/**
 * @file
 * nnhpd_its_settings.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function nnhpd_its_settings_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'customized_work_tracker';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Customized work tracker';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Task List';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'oa_form';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['collapsed_filter'] = 1;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'realname' => 'realname',
    'realname_1' => 'realname_1',
    'field_oa_worktracker_duedate' => 'field_oa_worktracker_duedate',
    'field_oa_worktracker_priority' => 'field_oa_worktracker_priority',
    'field_oa_worktracker_task_status' => 'field_oa_worktracker_task_status',
    'og_group_ref' => 'og_group_ref',
    'oa_section_ref' => 'oa_section_ref',
    'field_oa_worktracker_task_type' => 'field_oa_worktracker_task_type',
    'field_oa_section' => 'field_oa_section',
    'comment_count' => 'comment_count',
    'nid' => 'nid',
    'field_chili_id' => 'field_chili_id',
  );
  $handler->display->display_options['style_options']['default'] = 'field_oa_worktracker_duedate';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'realname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'realname_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_oa_worktracker_duedate' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_oa_worktracker_priority' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_oa_worktracker_task_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'og_group_ref' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'oa_section_ref' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_oa_worktracker_task_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_oa_section' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'comment_count' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_chili_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No data.';
  $handler->display->display_options['empty']['area']['format'] = 'panopoly_wysiwyg_text';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_oa_worktracker_assigned_to_target_id']['id'] = 'field_oa_worktracker_assigned_to_target_id';
  $handler->display->display_options['relationships']['field_oa_worktracker_assigned_to_target_id']['table'] = 'field_data_field_oa_worktracker_assigned_to';
  $handler->display->display_options['relationships']['field_oa_worktracker_assigned_to_target_id']['field'] = 'field_oa_worktracker_assigned_to_target_id';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Assigned to */
  $handler->display->display_options['fields']['field_oa_worktracker_assigned_to']['id'] = 'field_oa_worktracker_assigned_to';
  $handler->display->display_options['fields']['field_oa_worktracker_assigned_to']['table'] = 'field_data_field_oa_worktracker_assigned_to';
  $handler->display->display_options['fields']['field_oa_worktracker_assigned_to']['field'] = 'field_oa_worktracker_assigned_to';
  $handler->display->display_options['fields']['field_oa_worktracker_assigned_to']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Due date */
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['id'] = 'field_oa_worktracker_duedate';
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['table'] = 'field_data_field_oa_worktracker_duedate';
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['field'] = 'field_oa_worktracker_duedate';
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Priority */
  $handler->display->display_options['fields']['field_oa_worktracker_priority']['id'] = 'field_oa_worktracker_priority';
  $handler->display->display_options['fields']['field_oa_worktracker_priority']['table'] = 'field_data_field_oa_worktracker_priority';
  $handler->display->display_options['fields']['field_oa_worktracker_priority']['field'] = 'field_oa_worktracker_priority';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_oa_worktracker_task_status']['id'] = 'field_oa_worktracker_task_status';
  $handler->display->display_options['fields']['field_oa_worktracker_task_status']['table'] = 'field_data_field_oa_worktracker_task_status';
  $handler->display->display_options['fields']['field_oa_worktracker_task_status']['field'] = 'field_oa_worktracker_task_status';
  /* Field: Content: Groups audience */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = 'Space';
  $handler->display->display_options['fields']['og_group_ref']['click_sort_column'] = 'target_id';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['og_group_ref']['group_column'] = 'target_id';
  /* Field: Content: Section */
  $handler->display->display_options['fields']['oa_section_ref']['id'] = 'oa_section_ref';
  $handler->display->display_options['fields']['oa_section_ref']['table'] = 'field_data_oa_section_ref';
  $handler->display->display_options['fields']['oa_section_ref']['field'] = 'oa_section_ref';
  $handler->display->display_options['fields']['oa_section_ref']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_oa_worktracker_task_type']['id'] = 'field_oa_worktracker_task_type';
  $handler->display->display_options['fields']['field_oa_worktracker_task_type']['table'] = 'field_data_field_oa_worktracker_task_type';
  $handler->display->display_options['fields']['field_oa_worktracker_task_type']['field'] = 'field_oa_worktracker_task_type';
  /* Field: Content: Ingredient Name */
  $handler->display->display_options['fields']['field_ingredient_name']['id'] = 'field_ingredient_name';
  $handler->display->display_options['fields']['field_ingredient_name']['table'] = 'field_data_field_ingredient_name';
  $handler->display->display_options['fields']['field_ingredient_name']['field'] = 'field_ingredient_name';
  /* Field: Content: NPN */
  $handler->display->display_options['fields']['field_npn']['id'] = 'field_npn';
  $handler->display->display_options['fields']['field_npn']['table'] = 'field_data_field_npn';
  $handler->display->display_options['fields']['field_npn']['field'] = 'field_npn';
  /* Field: Content: Actual Cost */
  $handler->display->display_options['fields']['field_actual_cost']['id'] = 'field_actual_cost';
  $handler->display->display_options['fields']['field_actual_cost']['table'] = 'field_data_field_actual_cost';
  $handler->display->display_options['fields']['field_actual_cost']['field'] = 'field_actual_cost';
  /* Field: Content: Affects Branch */
  $handler->display->display_options['fields']['field_affects_branch']['id'] = 'field_affects_branch';
  $handler->display->display_options['fields']['field_affects_branch']['table'] = 'field_data_field_affects_branch';
  $handler->display->display_options['fields']['field_affects_branch']['field'] = 'field_affects_branch';
  /* Field: Content: Affects Department */
  $handler->display->display_options['fields']['field_affects_department']['id'] = 'field_affects_department';
  $handler->display->display_options['fields']['field_affects_department']['table'] = 'field_data_field_affects_department';
  $handler->display->display_options['fields']['field_affects_department']['field'] = 'field_affects_department';
  /* Field: Content: Affects Directorate */
  $handler->display->display_options['fields']['field_affects_directorate']['id'] = 'field_affects_directorate';
  $handler->display->display_options['fields']['field_affects_directorate']['table'] = 'field_data_field_affects_directorate';
  $handler->display->display_options['fields']['field_affects_directorate']['field'] = 'field_affects_directorate';
  /* Field: Content: Affects External Stakeholders */
  $handler->display->display_options['fields']['field_affects_external_stakehold']['id'] = 'field_affects_external_stakehold';
  $handler->display->display_options['fields']['field_affects_external_stakehold']['table'] = 'field_data_field_affects_external_stakehold';
  $handler->display->display_options['fields']['field_affects_external_stakehold']['field'] = 'field_affects_external_stakehold';
  /* Field: Content: Alignment Description */
  $handler->display->display_options['fields']['field_alignment_description']['id'] = 'field_alignment_description';
  $handler->display->display_options['fields']['field_alignment_description']['table'] = 'field_data_field_alignment_description';
  $handler->display->display_options['fields']['field_alignment_description']['field'] = 'field_alignment_description';
  /* Field: Content: ApplType */
  $handler->display->display_options['fields']['field_appltype']['id'] = 'field_appltype';
  $handler->display->display_options['fields']['field_appltype']['table'] = 'field_data_field_appltype';
  $handler->display->display_options['fields']['field_appltype']['field'] = 'field_appltype';
  /* Field: Content: ASR Number */
  $handler->display->display_options['fields']['field_asr_number']['id'] = 'field_asr_number';
  $handler->display->display_options['fields']['field_asr_number']['table'] = 'field_data_field_asr_number';
  $handler->display->display_options['fields']['field_asr_number']['field'] = 'field_asr_number';
  $handler->display->display_options['fields']['field_asr_number']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Assigned SME */
  $handler->display->display_options['fields']['field_assigned_sme']['id'] = 'field_assigned_sme';
  $handler->display->display_options['fields']['field_assigned_sme']['table'] = 'field_data_field_assigned_sme';
  $handler->display->display_options['fields']['field_assigned_sme']['field'] = 'field_assigned_sme';
  /* Field: Content: Benefits Description */
  $handler->display->display_options['fields']['field_benefits_description']['id'] = 'field_benefits_description';
  $handler->display->display_options['fields']['field_benefits_description']['table'] = 'field_data_field_benefits_description';
  $handler->display->display_options['fields']['field_benefits_description']['field'] = 'field_benefits_description';
  /* Field: Content: Business Benefit */
  $handler->display->display_options['fields']['field_business_benefit']['id'] = 'field_business_benefit';
  $handler->display->display_options['fields']['field_business_benefit']['table'] = 'field_data_field_business_benefit';
  $handler->display->display_options['fields']['field_business_benefit']['field'] = 'field_business_benefit';
  /* Field: Content: Client email or other contact */
  $handler->display->display_options['fields']['field_client_email_or_other_cont']['id'] = 'field_client_email_or_other_cont';
  $handler->display->display_options['fields']['field_client_email_or_other_cont']['table'] = 'field_data_field_client_email_or_other_cont';
  $handler->display->display_options['fields']['field_client_email_or_other_cont']['field'] = 'field_client_email_or_other_cont';
  /* Field: Content: Client name */
  $handler->display->display_options['fields']['field_client_name']['id'] = 'field_client_name';
  $handler->display->display_options['fields']['field_client_name']['table'] = 'field_data_field_client_name';
  $handler->display->display_options['fields']['field_client_name']['field'] = 'field_client_name';
  /* Field: Content: Client phone */
  $handler->display->display_options['fields']['field_client_phone']['id'] = 'field_client_phone';
  $handler->display->display_options['fields']['field_client_phone']['table'] = 'field_data_field_client_phone';
  $handler->display->display_options['fields']['field_client_phone']['field'] = 'field_client_phone';
  /* Field: Content: Company Code */
  $handler->display->display_options['fields']['field_company_code']['id'] = 'field_company_code';
  $handler->display->display_options['fields']['field_company_code']['table'] = 'field_data_field_company_code';
  $handler->display->display_options['fields']['field_company_code']['field'] = 'field_company_code';
  /* Field: Content: Company Name */
  $handler->display->display_options['fields']['field_company_name']['id'] = 'field_company_name';
  $handler->display->display_options['fields']['field_company_name']['table'] = 'field_data_field_company_name';
  $handler->display->display_options['fields']['field_company_name']['field'] = 'field_company_name';
  /* Field: Content: Component */
  $handler->display->display_options['fields']['field_component']['id'] = 'field_component';
  $handler->display->display_options['fields']['field_component']['table'] = 'field_data_field_component';
  $handler->display->display_options['fields']['field_component']['field'] = 'field_component';
  /* Field: Content: Consultation Completed */
  $handler->display->display_options['fields']['field_consultation_completed']['id'] = 'field_consultation_completed';
  $handler->display->display_options['fields']['field_consultation_completed']['table'] = 'field_data_field_consultation_completed';
  $handler->display->display_options['fields']['field_consultation_completed']['field'] = 'field_consultation_completed';
  /* Field: Content: Consultation Required */
  $handler->display->display_options['fields']['field_consultation_required']['id'] = 'field_consultation_required';
  $handler->display->display_options['fields']['field_consultation_required']['table'] = 'field_data_field_consultation_required';
  $handler->display->display_options['fields']['field_consultation_required']['field'] = 'field_consultation_required';
  /* Field: Content: Content Owner */
  $handler->display->display_options['fields']['field_content_owner']['id'] = 'field_content_owner';
  $handler->display->display_options['fields']['field_content_owner']['table'] = 'field_data_field_content_owner';
  $handler->display->display_options['fields']['field_content_owner']['field'] = 'field_content_owner';
  /* Field: Content: Contractual Requirement */
  $handler->display->display_options['fields']['field_contractual_requirement']['id'] = 'field_contractual_requirement';
  $handler->display->display_options['fields']['field_contractual_requirement']['table'] = 'field_data_field_contractual_requirement';
  $handler->display->display_options['fields']['field_contractual_requirement']['field'] = 'field_contractual_requirement';
  /* Field: Content: CR Sub-Category */
  $handler->display->display_options['fields']['field_cr_sub_category']['id'] = 'field_cr_sub_category';
  $handler->display->display_options['fields']['field_cr_sub_category']['table'] = 'field_data_field_cr_sub_category';
  $handler->display->display_options['fields']['field_cr_sub_category']['field'] = 'field_cr_sub_category';
  /* Field: Content: Current version */
  $handler->display->display_options['fields']['field_current_version']['id'] = 'field_current_version';
  $handler->display->display_options['fields']['field_current_version']['table'] = 'field_data_field_current_version';
  $handler->display->display_options['fields']['field_current_version']['field'] = 'field_current_version';
  $handler->display->display_options['fields']['field_current_version']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: CVP Issue Source */
  $handler->display->display_options['fields']['field_cvp_issue_source']['id'] = 'field_cvp_issue_source';
  $handler->display->display_options['fields']['field_cvp_issue_source']['table'] = 'field_data_field_cvp_issue_source';
  $handler->display->display_options['fields']['field_cvp_issue_source']['field'] = 'field_cvp_issue_source';
  /* Field: Content: Date received */
  $handler->display->display_options['fields']['field_date_received']['id'] = 'field_date_received';
  $handler->display->display_options['fields']['field_date_received']['table'] = 'field_data_field_date_received';
  $handler->display->display_options['fields']['field_date_received']['field'] = 'field_date_received';
  $handler->display->display_options['fields']['field_date_received']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Defect Number */
  $handler->display->display_options['fields']['field_defect_number']['id'] = 'field_defect_number';
  $handler->display->display_options['fields']['field_defect_number']['table'] = 'field_data_field_defect_number';
  $handler->display->display_options['fields']['field_defect_number']['field'] = 'field_defect_number';
  /* Field: Content: Dependencies */
  $handler->display->display_options['fields']['field_dependencies']['id'] = 'field_dependencies';
  $handler->display->display_options['fields']['field_dependencies']['table'] = 'field_data_field_dependencies';
  $handler->display->display_options['fields']['field_dependencies']['field'] = 'field_dependencies';
  /* Field: Content: Directorate */
  $handler->display->display_options['fields']['field_directorate']['id'] = 'field_directorate';
  $handler->display->display_options['fields']['field_directorate']['table'] = 'field_data_field_directorate';
  $handler->display->display_options['fields']['field_directorate']['field'] = 'field_directorate';
  /* Field: Content: Directorate Bureau */
  $handler->display->display_options['fields']['field_directorate_bureau']['id'] = 'field_directorate_bureau';
  $handler->display->display_options['fields']['field_directorate_bureau']['table'] = 'field_data_field_directorate_bureau';
  $handler->display->display_options['fields']['field_directorate_bureau']['field'] = 'field_directorate_bureau';
  /* Field: Content: Directorate or Division */
  $handler->display->display_options['fields']['field_directorate_or_division']['id'] = 'field_directorate_or_division';
  $handler->display->display_options['fields']['field_directorate_or_division']['table'] = 'field_data_field_directorate_or_division';
  $handler->display->display_options['fields']['field_directorate_or_division']['field'] = 'field_directorate_or_division';
  /* Field: Content: Document Version */
  $handler->display->display_options['fields']['field_document_version']['id'] = 'field_document_version';
  $handler->display->display_options['fields']['field_document_version']['table'] = 'field_data_field_document_version';
  $handler->display->display_options['fields']['field_document_version']['field'] = 'field_document_version';
  /* Field: Content: Email Source */
  $handler->display->display_options['fields']['field_email_source']['id'] = 'field_email_source';
  $handler->display->display_options['fields']['field_email_source']['table'] = 'field_data_field_email_source';
  $handler->display->display_options['fields']['field_email_source']['field'] = 'field_email_source';
  /* Field: Content: End Date */
  $handler->display->display_options['fields']['field_end_date']['id'] = 'field_end_date';
  $handler->display->display_options['fields']['field_end_date']['table'] = 'field_data_field_end_date';
  $handler->display->display_options['fields']['field_end_date']['field'] = 'field_end_date';
  $handler->display->display_options['fields']['field_end_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Entry to NHPID */
  $handler->display->display_options['fields']['field_entry_to_nhpid']['id'] = 'field_entry_to_nhpid';
  $handler->display->display_options['fields']['field_entry_to_nhpid']['table'] = 'field_data_field_entry_to_nhpid';
  $handler->display->display_options['fields']['field_entry_to_nhpid']['field'] = 'field_entry_to_nhpid';
  /* Field: Content: Environment */
  $handler->display->display_options['fields']['field_environment']['id'] = 'field_environment';
  $handler->display->display_options['fields']['field_environment']['table'] = 'field_data_field_environment';
  $handler->display->display_options['fields']['field_environment']['field'] = 'field_environment';
  /* Field: Content: Errata */
  $handler->display->display_options['fields']['field_errata']['id'] = 'field_errata';
  $handler->display->display_options['fields']['field_errata']['table'] = 'field_data_field_errata';
  $handler->display->display_options['fields']['field_errata']['field'] = 'field_errata';
  /* Field: Content: Estimated Cost */
  $handler->display->display_options['fields']['field_estimated_cost']['id'] = 'field_estimated_cost';
  $handler->display->display_options['fields']['field_estimated_cost']['table'] = 'field_data_field_estimated_cost';
  $handler->display->display_options['fields']['field_estimated_cost']['field'] = 'field_estimated_cost';
  /* Field: Content: Exempted Product */
  $handler->display->display_options['fields']['field_exempted_product']['id'] = 'field_exempted_product';
  $handler->display->display_options['fields']['field_exempted_product']['table'] = 'field_data_field_exempted_product';
  $handler->display->display_options['fields']['field_exempted_product']['field'] = 'field_exempted_product';
  /* Field: Content: Final Classification Decision */
  $handler->display->display_options['fields']['field_final_class_decision']['id'] = 'field_final_class_decision';
  $handler->display->display_options['fields']['field_final_class_decision']['table'] = 'field_data_field_final_class_decision';
  $handler->display->display_options['fields']['field_final_class_decision']['field'] = 'field_final_class_decision';
  /* Field: Content: Fixed In Build */
  $handler->display->display_options['fields']['field_fixed_in_build']['id'] = 'field_fixed_in_build';
  $handler->display->display_options['fields']['field_fixed_in_build']['table'] = 'field_data_field_fixed_in_build';
  $handler->display->display_options['fields']['field_fixed_in_build']['field'] = 'field_fixed_in_build';
  /* Field: Content: Foods sub-category */
  $handler->display->display_options['fields']['field_foods_sub_category']['id'] = 'field_foods_sub_category';
  $handler->display->display_options['fields']['field_foods_sub_category']['table'] = 'field_data_field_foods_sub_category';
  $handler->display->display_options['fields']['field_foods_sub_category']['field'] = 'field_foods_sub_category';
  /* Field: Content: Found In */
  $handler->display->display_options['fields']['field_found_in']['id'] = 'field_found_in';
  $handler->display->display_options['fields']['field_found_in']['table'] = 'field_data_field_found_in';
  $handler->display->display_options['fields']['field_found_in']['field'] = 'field_found_in';
  /* Field: Content: Found In Build */
  $handler->display->display_options['fields']['field_found_in_build']['id'] = 'field_found_in_build';
  $handler->display->display_options['fields']['field_found_in_build']['table'] = 'field_data_field_found_in_build';
  $handler->display->display_options['fields']['field_found_in_build']['field'] = 'field_found_in_build';
  /* Field: Content: Found In Version */
  $handler->display->display_options['fields']['field_found_in_version']['id'] = 'field_found_in_version';
  $handler->display->display_options['fields']['field_found_in_version']['table'] = 'field_data_field_found_in_version';
  $handler->display->display_options['fields']['field_found_in_version']['field'] = 'field_found_in_version';
  /* Field: Content: IAS Sub-Category */
  $handler->display->display_options['fields']['field_ias_sub_category']['id'] = 'field_ias_sub_category';
  $handler->display->display_options['fields']['field_ias_sub_category']['table'] = 'field_data_field_ias_sub_category';
  $handler->display->display_options['fields']['field_ias_sub_category']['field'] = 'field_ias_sub_category';
  /* Field: Content: If GMP Request */
  $handler->display->display_options['fields']['field_if_gmp_request']['id'] = 'field_if_gmp_request';
  $handler->display->display_options['fields']['field_if_gmp_request']['table'] = 'field_data_field_if_gmp_request';
  $handler->display->display_options['fields']['field_if_gmp_request']['field'] = 'field_if_gmp_request';
  /* Field: Content: If Product General Inquiry */
  $handler->display->display_options['fields']['field_if_product_general_inquery']['id'] = 'field_if_product_general_inquery';
  $handler->display->display_options['fields']['field_if_product_general_inquery']['table'] = 'field_data_field_if_product_general_inquery';
  $handler->display->display_options['fields']['field_if_product_general_inquery']['field'] = 'field_if_product_general_inquery';
  /* Field: Content: If Site General Inquiry */
  $handler->display->display_options['fields']['field_if_site_general_inquiry']['id'] = 'field_if_site_general_inquiry';
  $handler->display->display_options['fields']['field_if_site_general_inquiry']['table'] = 'field_data_field_if_site_general_inquiry';
  $handler->display->display_options['fields']['field_if_site_general_inquiry']['field'] = 'field_if_site_general_inquiry';
  /* Field: Content: Internal group */
  $handler->display->display_options['fields']['field_internal_group']['id'] = 'field_internal_group';
  $handler->display->display_options['fields']['field_internal_group']['table'] = 'field_data_field_internal_group';
  $handler->display->display_options['fields']['field_internal_group']['field'] = 'field_internal_group';
  /* Field: Content: Issue form tracking number */
  $handler->display->display_options['fields']['field_issue_form_tracking_number']['id'] = 'field_issue_form_tracking_number';
  $handler->display->display_options['fields']['field_issue_form_tracking_number']['table'] = 'field_data_field_issue_form_tracking_number';
  $handler->display->display_options['fields']['field_issue_form_tracking_number']['field'] = 'field_issue_form_tracking_number';
  /* Field: Content: Issue source */
  $handler->display->display_options['fields']['field_issue_source']['id'] = 'field_issue_source';
  $handler->display->display_options['fields']['field_issue_source']['table'] = 'field_data_field_issue_source';
  $handler->display->display_options['fields']['field_issue_source']['field'] = 'field_issue_source';
  /* Field: Content: Language */
  $handler->display->display_options['fields']['field_language']['id'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['table'] = 'field_data_field_language';
  $handler->display->display_options['fields']['field_language']['field'] = 'field_language';
  /* Field: Content: License Number */
  $handler->display->display_options['fields']['field_license_number']['id'] = 'field_license_number';
  $handler->display->display_options['fields']['field_license_number']['table'] = 'field_data_field_license_number';
  $handler->display->display_options['fields']['field_license_number']['field'] = 'field_license_number';
  /* Field: Content: Lotus Unique ID */
  $handler->display->display_options['fields']['field_lotus_unique_id']['id'] = 'field_lotus_unique_id';
  $handler->display->display_options['fields']['field_lotus_unique_id']['table'] = 'field_data_field_lotus_unique_id';
  $handler->display->display_options['fields']['field_lotus_unique_id']['field'] = 'field_lotus_unique_id';
  /* Field: Content: MECS Number */
  $handler->display->display_options['fields']['field_mecs_number']['id'] = 'field_mecs_number';
  $handler->display->display_options['fields']['field_mecs_number']['table'] = 'field_data_field_mecs_number';
  $handler->display->display_options['fields']['field_mecs_number']['field'] = 'field_mecs_number';
  /* Field: Content: No. of Affected Submissions */
  $handler->display->display_options['fields']['field_no_of_affected_submissions']['id'] = 'field_no_of_affected_submissions';
  $handler->display->display_options['fields']['field_no_of_affected_submissions']['table'] = 'field_data_field_no_of_affected_submissions';
  $handler->display->display_options['fields']['field_no_of_affected_submissions']['field'] = 'field_no_of_affected_submissions';
  $handler->display->display_options['fields']['field_no_of_affected_submissions']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: PCI Batch */
  $handler->display->display_options['fields']['field_pci_batch']['id'] = 'field_pci_batch';
  $handler->display->display_options['fields']['field_pci_batch']['table'] = 'field_data_field_pci_batch';
  $handler->display->display_options['fields']['field_pci_batch']['field'] = 'field_pci_batch';
  /* Field: Content: Political or Legal Requirement */
  $handler->display->display_options['fields']['field_political_or_legal_require']['id'] = 'field_political_or_legal_require';
  $handler->display->display_options['fields']['field_political_or_legal_require']['table'] = 'field_data_field_political_or_legal_require';
  $handler->display->display_options['fields']['field_political_or_legal_require']['field'] = 'field_political_or_legal_require';
  /* Field: Content: Priorities Alignment */
  $handler->display->display_options['fields']['field_priorities_alignment']['id'] = 'field_priorities_alignment';
  $handler->display->display_options['fields']['field_priorities_alignment']['table'] = 'field_data_field_priorities_alignment';
  $handler->display->display_options['fields']['field_priorities_alignment']['field'] = 'field_priorities_alignment';
  /* Field: Content: Priority Category */
  $handler->display->display_options['fields']['field_priority_category']['id'] = 'field_priority_category';
  $handler->display->display_options['fields']['field_priority_category']['table'] = 'field_data_field_priority_category';
  $handler->display->display_options['fields']['field_priority_category']['field'] = 'field_priority_category';
  /* Field: Content: Product */
  $handler->display->display_options['fields']['field_product']['id'] = 'field_product';
  $handler->display->display_options['fields']['field_product']['table'] = 'field_data_field_product';
  $handler->display->display_options['fields']['field_product']['field'] = 'field_product';
  /* Field: Content: Product Name */
  $handler->display->display_options['fields']['field_product_name']['id'] = 'field_product_name';
  $handler->display->display_options['fields']['field_product_name']['table'] = 'field_data_field_product_name';
  $handler->display->display_options['fields']['field_product_name']['field'] = 'field_product_name';
  /* Field: Content: Product Request Type */
  $handler->display->display_options['fields']['field_product_request_type']['id'] = 'field_product_request_type';
  $handler->display->display_options['fields']['field_product_request_type']['table'] = 'field_data_field_product_request_type';
  $handler->display->display_options['fields']['field_product_request_type']['field'] = 'field_product_request_type';
  /* Field: Content: Reporter Name */
  $handler->display->display_options['fields']['field_reporter_name']['id'] = 'field_reporter_name';
  $handler->display->display_options['fields']['field_reporter_name']['table'] = 'field_data_field_reporter_name';
  $handler->display->display_options['fields']['field_reporter_name']['field'] = 'field_reporter_name';
  /* Field: Content: Request Method */
  $handler->display->display_options['fields']['field_request_method']['id'] = 'field_request_method';
  $handler->display->display_options['fields']['field_request_method']['table'] = 'field_data_field_request_method';
  $handler->display->display_options['fields']['field_request_method']['field'] = 'field_request_method';
  /* Field: Content: Request Rationale */
  $handler->display->display_options['fields']['field_request_rationale']['id'] = 'field_request_rationale';
  $handler->display->display_options['fields']['field_request_rationale']['table'] = 'field_data_field_request_rationale';
  $handler->display->display_options['fields']['field_request_rationale']['field'] = 'field_request_rationale';
  /* Field: Content: Resolution details */
  $handler->display->display_options['fields']['field_resolution_details']['id'] = 'field_resolution_details';
  $handler->display->display_options['fields']['field_resolution_details']['table'] = 'field_data_field_resolution_details';
  $handler->display->display_options['fields']['field_resolution_details']['field'] = 'field_resolution_details';
  /* Field: Content: Response Method */
  $handler->display->display_options['fields']['field_response_method']['id'] = 'field_response_method';
  $handler->display->display_options['fields']['field_response_method']['table'] = 'field_data_field_response_method';
  $handler->display->display_options['fields']['field_response_method']['field'] = 'field_response_method';
  /* Field: Content: Risk Category */
  $handler->display->display_options['fields']['field_risk_category']['id'] = 'field_risk_category';
  $handler->display->display_options['fields']['field_risk_category']['table'] = 'field_data_field_risk_category';
  $handler->display->display_options['fields']['field_risk_category']['field'] = 'field_risk_category';
  /* Field: Content: Root */
  $handler->display->display_options['fields']['field_root']['id'] = 'field_root';
  $handler->display->display_options['fields']['field_root']['table'] = 'field_data_field_root';
  $handler->display->display_options['fields']['field_root']['field'] = 'field_root';
  /* Field: Content: RSS Required */
  $handler->display->display_options['fields']['field_rss_required']['id'] = 'field_rss_required';
  $handler->display->display_options['fields']['field_rss_required']['table'] = 'field_data_field_rss_required';
  $handler->display->display_options['fields']['field_rss_required']['field'] = 'field_rss_required';
  /* Field: Content: SAU Sub-Category */
  $handler->display->display_options['fields']['field_sau_sub_category']['id'] = 'field_sau_sub_category';
  $handler->display->display_options['fields']['field_sau_sub_category']['table'] = 'field_data_field_sau_sub_category';
  $handler->display->display_options['fields']['field_sau_sub_category']['field'] = 'field_sau_sub_category';
  /* Field: Content: Site Request Type */
  $handler->display->display_options['fields']['field_site_request_type']['id'] = 'field_site_request_type';
  $handler->display->display_options['fields']['field_site_request_type']['table'] = 'field_data_field_site_request_type';
  $handler->display->display_options['fields']['field_site_request_type']['field'] = 'field_site_request_type';
  /* Field: Content: Start date */
  $handler->display->display_options['fields']['field_start_date']['id'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['table'] = 'field_data_field_start_date';
  $handler->display->display_options['fields']['field_start_date']['field'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Stream */
  $handler->display->display_options['fields']['field_stream']['id'] = 'field_stream';
  $handler->display->display_options['fields']['field_stream']['table'] = 'field_data_field_stream';
  $handler->display->display_options['fields']['field_stream']['field'] = 'field_stream';
  /* Field: Content: Sub-category */
  $handler->display->display_options['fields']['field_sub_category']['id'] = 'field_sub_category';
  $handler->display->display_options['fields']['field_sub_category']['table'] = 'field_data_field_sub_category';
  $handler->display->display_options['fields']['field_sub_category']['field'] = 'field_sub_category';
  /* Field: Content: Subgroup */
  $handler->display->display_options['fields']['field_subgroup']['id'] = 'field_subgroup';
  $handler->display->display_options['fields']['field_subgroup']['table'] = 'field_data_field_subgroup';
  $handler->display->display_options['fields']['field_subgroup']['field'] = 'field_subgroup';
  /* Field: Content: Submission Number */
  $handler->display->display_options['fields']['field_submission_number']['id'] = 'field_submission_number';
  $handler->display->display_options['fields']['field_submission_number']['table'] = 'field_data_field_submission_number';
  $handler->display->display_options['fields']['field_submission_number']['field'] = 'field_submission_number';
  /* Field: Content: Substance type */
  $handler->display->display_options['fields']['field_substance_type']['id'] = 'field_substance_type';
  $handler->display->display_options['fields']['field_substance_type']['table'] = 'field_data_field_substance_type';
  $handler->display->display_options['fields']['field_substance_type']['field'] = 'field_substance_type';
  /* Field: Content: Target release */
  $handler->display->display_options['fields']['field_target_release']['id'] = 'field_target_release';
  $handler->display->display_options['fields']['field_target_release']['table'] = 'field_data_field_target_release';
  $handler->display->display_options['fields']['field_target_release']['field'] = 'field_target_release';
  /* Field: Content: Tester */
  $handler->display->display_options['fields']['field_tester']['id'] = 'field_tester';
  $handler->display->display_options['fields']['field_tester']['table'] = 'field_data_field_tester';
  $handler->display->display_options['fields']['field_tester']['field'] = 'field_tester';
  /* Field: Content: Total Rated Criteria */
  $handler->display->display_options['fields']['field_total_rated_criteria']['id'] = 'field_total_rated_criteria';
  $handler->display->display_options['fields']['field_total_rated_criteria']['table'] = 'field_data_field_total_rated_criteria';
  $handler->display->display_options['fields']['field_total_rated_criteria']['field'] = 'field_total_rated_criteria';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Groups audience (og_group_ref:target_id) */
  $handler->display->display_options['arguments']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'oa_worktracker_task' => 'oa_worktracker_task',
    'task_inherited' => 'task_inherited',
  );
  /* Filter criterion: Content: Groups audience (og_group_ref:target_id) */
  $handler->display->display_options['filters']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator_id'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['label'] = 'Space';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['identifier'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Section (oa_section_ref:target_id) */
  $handler->display->display_options['filters']['oa_section_ref_target_id']['id'] = 'oa_section_ref_target_id';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['table'] = 'field_data_oa_section_ref';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['field'] = 'oa_section_ref_target_id';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['oa_section_ref_target_id']['expose']['operator_id'] = 'oa_section_ref_target_id_op';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['expose']['label'] = 'Section';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['expose']['operator'] = 'oa_section_ref_target_id_op';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['expose']['identifier'] = 'oa_section_ref_target_id';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Ingredient Name (field_ingredient_name) */
  $handler->display->display_options['filters']['field_ingredient_name_value']['id'] = 'field_ingredient_name_value';
  $handler->display->display_options['filters']['field_ingredient_name_value']['table'] = 'field_data_field_ingredient_name';
  $handler->display->display_options['filters']['field_ingredient_name_value']['field'] = 'field_ingredient_name_value';
  $handler->display->display_options['filters']['field_ingredient_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_ingredient_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ingredient_name_value']['expose']['operator_id'] = 'field_ingredient_name_value_op';
  $handler->display->display_options['filters']['field_ingredient_name_value']['expose']['label'] = 'Ingredient Name';
  $handler->display->display_options['filters']['field_ingredient_name_value']['expose']['operator'] = 'field_ingredient_name_value_op';
  $handler->display->display_options['filters']['field_ingredient_name_value']['expose']['identifier'] = 'field_ingredient_name_value';
  $handler->display->display_options['filters']['field_ingredient_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  $handler->display->display_options['filters']['field_ingredient_name_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_ingredient_name_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_ingredient_name_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_ingredient_name_value']['expose']['autocomplete_field'] = 'field_ingredient_name';
  $handler->display->display_options['filters']['field_ingredient_name_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_ingredient_name_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_ingredient_name_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: NPN (field_npn) */
  $handler->display->display_options['filters']['field_npn_value']['id'] = 'field_npn_value';
  $handler->display->display_options['filters']['field_npn_value']['table'] = 'field_data_field_npn';
  $handler->display->display_options['filters']['field_npn_value']['field'] = 'field_npn_value';
  $handler->display->display_options['filters']['field_npn_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_npn_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_npn_value']['expose']['operator_id'] = 'field_npn_value_op';
  $handler->display->display_options['filters']['field_npn_value']['expose']['label'] = 'NPN';
  $handler->display->display_options['filters']['field_npn_value']['expose']['operator'] = 'field_npn_value_op';
  $handler->display->display_options['filters']['field_npn_value']['expose']['identifier'] = 'field_npn_value';
  $handler->display->display_options['filters']['field_npn_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  $handler->display->display_options['filters']['field_npn_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_npn_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_npn_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_npn_value']['expose']['autocomplete_field'] = 'field_npn';
  $handler->display->display_options['filters']['field_npn_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_npn_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_npn_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: ApplType (field_appltype) */
  $handler->display->display_options['filters']['field_appltype_value']['id'] = 'field_appltype_value';
  $handler->display->display_options['filters']['field_appltype_value']['table'] = 'field_data_field_appltype';
  $handler->display->display_options['filters']['field_appltype_value']['field'] = 'field_appltype_value';
  $handler->display->display_options['filters']['field_appltype_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_appltype_value']['expose']['operator_id'] = 'field_appltype_value_op';
  $handler->display->display_options['filters']['field_appltype_value']['expose']['label'] = 'ApplType';
  $handler->display->display_options['filters']['field_appltype_value']['expose']['operator'] = 'field_appltype_value_op';
  $handler->display->display_options['filters']['field_appltype_value']['expose']['identifier'] = 'field_appltype_value';
  $handler->display->display_options['filters']['field_appltype_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  /* Filter criterion: Content: ASR Number (field_asr_number) */
  $handler->display->display_options['filters']['field_asr_number_value']['id'] = 'field_asr_number_value';
  $handler->display->display_options['filters']['field_asr_number_value']['table'] = 'field_data_field_asr_number';
  $handler->display->display_options['filters']['field_asr_number_value']['field'] = 'field_asr_number_value';
  $handler->display->display_options['filters']['field_asr_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_asr_number_value']['expose']['operator_id'] = 'field_asr_number_value_op';
  $handler->display->display_options['filters']['field_asr_number_value']['expose']['label'] = 'ASR Number (field_asr_number)';
  $handler->display->display_options['filters']['field_asr_number_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_asr_number_value']['expose']['operator'] = 'field_asr_number_value_op';
  $handler->display->display_options['filters']['field_asr_number_value']['expose']['identifier'] = 'field_asr_number_value';
  $handler->display->display_options['filters']['field_asr_number_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  /* Filter criterion: Content: Assigned SME (field_assigned_sme) */
  $handler->display->display_options['filters']['field_assigned_sme_value']['id'] = 'field_assigned_sme_value';
  $handler->display->display_options['filters']['field_assigned_sme_value']['table'] = 'field_data_field_assigned_sme';
  $handler->display->display_options['filters']['field_assigned_sme_value']['field'] = 'field_assigned_sme_value';
  $handler->display->display_options['filters']['field_assigned_sme_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_assigned_sme_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_assigned_sme_value']['expose']['operator_id'] = 'field_assigned_sme_value_op';
  $handler->display->display_options['filters']['field_assigned_sme_value']['expose']['label'] = 'Assigned SME';
  $handler->display->display_options['filters']['field_assigned_sme_value']['expose']['operator'] = 'field_assigned_sme_value_op';
  $handler->display->display_options['filters']['field_assigned_sme_value']['expose']['identifier'] = 'field_assigned_sme_value';
  $handler->display->display_options['filters']['field_assigned_sme_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  $handler->display->display_options['filters']['field_assigned_sme_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_assigned_sme_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_assigned_sme_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_assigned_sme_value']['expose']['autocomplete_field'] = 'field_assigned_sme';
  $handler->display->display_options['filters']['field_assigned_sme_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_assigned_sme_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_assigned_sme_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Client email or other contact (field_client_email_or_other_cont) */
  $handler->display->display_options['filters']['field_client_email_or_other_cont_value']['id'] = 'field_client_email_or_other_cont_value';
  $handler->display->display_options['filters']['field_client_email_or_other_cont_value']['table'] = 'field_data_field_client_email_or_other_cont';
  $handler->display->display_options['filters']['field_client_email_or_other_cont_value']['field'] = 'field_client_email_or_other_cont_value';
  $handler->display->display_options['filters']['field_client_email_or_other_cont_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_client_email_or_other_cont_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_client_email_or_other_cont_value']['expose']['operator_id'] = 'field_client_email_or_other_cont_value_op';
  $handler->display->display_options['filters']['field_client_email_or_other_cont_value']['expose']['label'] = 'Client email or other contact';
  $handler->display->display_options['filters']['field_client_email_or_other_cont_value']['expose']['operator'] = 'field_client_email_or_other_cont_value_op';
  $handler->display->display_options['filters']['field_client_email_or_other_cont_value']['expose']['identifier'] = 'field_client_email_or_other_cont_value';
  $handler->display->display_options['filters']['field_client_email_or_other_cont_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  $handler->display->display_options['filters']['field_client_email_or_other_cont_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_client_email_or_other_cont_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_client_email_or_other_cont_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_client_email_or_other_cont_value']['expose']['autocomplete_field'] = 'field_client_email_or_other_cont';
  $handler->display->display_options['filters']['field_client_email_or_other_cont_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_client_email_or_other_cont_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_client_email_or_other_cont_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Client name (field_client_name) */
  $handler->display->display_options['filters']['field_client_name_value']['id'] = 'field_client_name_value';
  $handler->display->display_options['filters']['field_client_name_value']['table'] = 'field_data_field_client_name';
  $handler->display->display_options['filters']['field_client_name_value']['field'] = 'field_client_name_value';
  $handler->display->display_options['filters']['field_client_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_client_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_client_name_value']['expose']['operator_id'] = 'field_client_name_value_op';
  $handler->display->display_options['filters']['field_client_name_value']['expose']['label'] = 'Client name';
  $handler->display->display_options['filters']['field_client_name_value']['expose']['operator'] = 'field_client_name_value_op';
  $handler->display->display_options['filters']['field_client_name_value']['expose']['identifier'] = 'field_client_name_value';
  $handler->display->display_options['filters']['field_client_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  $handler->display->display_options['filters']['field_client_name_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_client_name_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_client_name_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_client_name_value']['expose']['autocomplete_field'] = 'field_client_name';
  $handler->display->display_options['filters']['field_client_name_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_client_name_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_client_name_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Client phone (field_client_phone) */
  $handler->display->display_options['filters']['field_client_phone_value']['id'] = 'field_client_phone_value';
  $handler->display->display_options['filters']['field_client_phone_value']['table'] = 'field_data_field_client_phone';
  $handler->display->display_options['filters']['field_client_phone_value']['field'] = 'field_client_phone_value';
  $handler->display->display_options['filters']['field_client_phone_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_client_phone_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_client_phone_value']['expose']['operator_id'] = 'field_client_phone_value_op';
  $handler->display->display_options['filters']['field_client_phone_value']['expose']['label'] = 'Client phone';
  $handler->display->display_options['filters']['field_client_phone_value']['expose']['operator'] = 'field_client_phone_value_op';
  $handler->display->display_options['filters']['field_client_phone_value']['expose']['identifier'] = 'field_client_phone_value';
  $handler->display->display_options['filters']['field_client_phone_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  $handler->display->display_options['filters']['field_client_phone_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_client_phone_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_client_phone_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_client_phone_value']['expose']['autocomplete_field'] = 'field_client_phone';
  $handler->display->display_options['filters']['field_client_phone_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_client_phone_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_client_phone_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Company Code (field_company_code) */
  $handler->display->display_options['filters']['field_company_code_value']['id'] = 'field_company_code_value';
  $handler->display->display_options['filters']['field_company_code_value']['table'] = 'field_data_field_company_code';
  $handler->display->display_options['filters']['field_company_code_value']['field'] = 'field_company_code_value';
  $handler->display->display_options['filters']['field_company_code_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_company_code_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_company_code_value']['expose']['operator_id'] = 'field_company_code_value_op';
  $handler->display->display_options['filters']['field_company_code_value']['expose']['label'] = 'Company Code';
  $handler->display->display_options['filters']['field_company_code_value']['expose']['operator'] = 'field_company_code_value_op';
  $handler->display->display_options['filters']['field_company_code_value']['expose']['identifier'] = 'field_company_code_value';
  $handler->display->display_options['filters']['field_company_code_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  $handler->display->display_options['filters']['field_company_code_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_company_code_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_company_code_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_company_code_value']['expose']['autocomplete_field'] = 'field_company_code';
  $handler->display->display_options['filters']['field_company_code_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_company_code_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_company_code_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Company Name (field_company_name) */
  $handler->display->display_options['filters']['field_company_name_value']['id'] = 'field_company_name_value';
  $handler->display->display_options['filters']['field_company_name_value']['table'] = 'field_data_field_company_name';
  $handler->display->display_options['filters']['field_company_name_value']['field'] = 'field_company_name_value';
  $handler->display->display_options['filters']['field_company_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_company_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_company_name_value']['expose']['operator_id'] = 'field_company_name_value_op';
  $handler->display->display_options['filters']['field_company_name_value']['expose']['label'] = 'Company Name';
  $handler->display->display_options['filters']['field_company_name_value']['expose']['operator'] = 'field_company_name_value_op';
  $handler->display->display_options['filters']['field_company_name_value']['expose']['identifier'] = 'field_company_name_value';
  $handler->display->display_options['filters']['field_company_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  $handler->display->display_options['filters']['field_company_name_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_company_name_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_company_name_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_company_name_value']['expose']['autocomplete_field'] = 'field_company_name';
  $handler->display->display_options['filters']['field_company_name_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_company_name_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_company_name_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Content Owner (field_content_owner) */
  $handler->display->display_options['filters']['field_content_owner_value']['id'] = 'field_content_owner_value';
  $handler->display->display_options['filters']['field_content_owner_value']['table'] = 'field_data_field_content_owner';
  $handler->display->display_options['filters']['field_content_owner_value']['field'] = 'field_content_owner_value';
  $handler->display->display_options['filters']['field_content_owner_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_content_owner_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_content_owner_value']['expose']['operator_id'] = 'field_content_owner_value_op';
  $handler->display->display_options['filters']['field_content_owner_value']['expose']['label'] = 'Content Owner';
  $handler->display->display_options['filters']['field_content_owner_value']['expose']['operator'] = 'field_content_owner_value_op';
  $handler->display->display_options['filters']['field_content_owner_value']['expose']['identifier'] = 'field_content_owner_value';
  $handler->display->display_options['filters']['field_content_owner_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  $handler->display->display_options['filters']['field_content_owner_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_content_owner_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_content_owner_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_content_owner_value']['expose']['autocomplete_field'] = 'field_content_owner';
  $handler->display->display_options['filters']['field_content_owner_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_content_owner_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_content_owner_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Current version (field_current_version) */
  $handler->display->display_options['filters']['field_current_version_value']['id'] = 'field_current_version_value';
  $handler->display->display_options['filters']['field_current_version_value']['table'] = 'field_data_field_current_version';
  $handler->display->display_options['filters']['field_current_version_value']['field'] = 'field_current_version_value';
  $handler->display->display_options['filters']['field_current_version_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_current_version_value']['expose']['operator_id'] = 'field_current_version_value_op';
  $handler->display->display_options['filters']['field_current_version_value']['expose']['label'] = 'Current version';
  $handler->display->display_options['filters']['field_current_version_value']['expose']['operator'] = 'field_current_version_value_op';
  $handler->display->display_options['filters']['field_current_version_value']['expose']['identifier'] = 'field_current_version_value';
  $handler->display->display_options['filters']['field_current_version_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  /* Filter criterion: Content: Date received (field_date_received) */
  $handler->display->display_options['filters']['field_date_received_value']['id'] = 'field_date_received_value';
  $handler->display->display_options['filters']['field_date_received_value']['table'] = 'field_data_field_date_received';
  $handler->display->display_options['filters']['field_date_received_value']['field'] = 'field_date_received_value';
  $handler->display->display_options['filters']['field_date_received_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_date_received_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_received_value']['expose']['operator_id'] = 'field_date_received_value_op';
  $handler->display->display_options['filters']['field_date_received_value']['expose']['label'] = 'Date received ';
  $handler->display->display_options['filters']['field_date_received_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_date_received_value']['expose']['operator'] = 'field_date_received_value_op';
  $handler->display->display_options['filters']['field_date_received_value']['expose']['identifier'] = 'field_date_received_value';
  $handler->display->display_options['filters']['field_date_received_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  $handler->display->display_options['filters']['field_date_received_value']['form_type'] = 'date_popup';
  /* Filter criterion: Content: Defect Number (field_defect_number) */
  $handler->display->display_options['filters']['field_defect_number_value']['id'] = 'field_defect_number_value';
  $handler->display->display_options['filters']['field_defect_number_value']['table'] = 'field_data_field_defect_number';
  $handler->display->display_options['filters']['field_defect_number_value']['field'] = 'field_defect_number_value';
  $handler->display->display_options['filters']['field_defect_number_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_defect_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_defect_number_value']['expose']['operator_id'] = 'field_defect_number_value_op';
  $handler->display->display_options['filters']['field_defect_number_value']['expose']['label'] = 'Defect Number';
  $handler->display->display_options['filters']['field_defect_number_value']['expose']['operator'] = 'field_defect_number_value_op';
  $handler->display->display_options['filters']['field_defect_number_value']['expose']['identifier'] = 'field_defect_number_value';
  $handler->display->display_options['filters']['field_defect_number_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  $handler->display->display_options['filters']['field_defect_number_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_defect_number_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_defect_number_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_defect_number_value']['expose']['autocomplete_field'] = 'field_defect_number';
  $handler->display->display_options['filters']['field_defect_number_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_defect_number_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_defect_number_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Directorate (field_directorate) */
  $handler->display->display_options['filters']['field_directorate_value']['id'] = 'field_directorate_value';
  $handler->display->display_options['filters']['field_directorate_value']['table'] = 'field_data_field_directorate';
  $handler->display->display_options['filters']['field_directorate_value']['field'] = 'field_directorate_value';
  $handler->display->display_options['filters']['field_directorate_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_directorate_value']['expose']['operator_id'] = 'field_directorate_value_op';
  $handler->display->display_options['filters']['field_directorate_value']['expose']['label'] = 'Directorate';
  $handler->display->display_options['filters']['field_directorate_value']['expose']['operator'] = 'field_directorate_value_op';
  $handler->display->display_options['filters']['field_directorate_value']['expose']['identifier'] = 'field_directorate_value';
  $handler->display->display_options['filters']['field_directorate_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  /* Filter criterion: Content: Directorate Bureau (field_directorate_bureau) */
  $handler->display->display_options['filters']['field_directorate_bureau_value']['id'] = 'field_directorate_bureau_value';
  $handler->display->display_options['filters']['field_directorate_bureau_value']['table'] = 'field_data_field_directorate_bureau';
  $handler->display->display_options['filters']['field_directorate_bureau_value']['field'] = 'field_directorate_bureau_value';
  $handler->display->display_options['filters']['field_directorate_bureau_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_directorate_bureau_value']['expose']['operator_id'] = 'field_directorate_bureau_value_op';
  $handler->display->display_options['filters']['field_directorate_bureau_value']['expose']['label'] = 'Directorate Bureau';
  $handler->display->display_options['filters']['field_directorate_bureau_value']['expose']['operator'] = 'field_directorate_bureau_value_op';
  $handler->display->display_options['filters']['field_directorate_bureau_value']['expose']['identifier'] = 'field_directorate_bureau_value';
  $handler->display->display_options['filters']['field_directorate_bureau_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  /* Filter criterion: Content: Directorate or Division (field_directorate_or_division) */
  $handler->display->display_options['filters']['field_directorate_or_division_value']['id'] = 'field_directorate_or_division_value';
  $handler->display->display_options['filters']['field_directorate_or_division_value']['table'] = 'field_data_field_directorate_or_division';
  $handler->display->display_options['filters']['field_directorate_or_division_value']['field'] = 'field_directorate_or_division_value';
  $handler->display->display_options['filters']['field_directorate_or_division_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_directorate_or_division_value']['expose']['operator_id'] = 'field_directorate_or_division_value_op';
  $handler->display->display_options['filters']['field_directorate_or_division_value']['expose']['label'] = 'Directorate or Division';
  $handler->display->display_options['filters']['field_directorate_or_division_value']['expose']['operator'] = 'field_directorate_or_division_value_op';
  $handler->display->display_options['filters']['field_directorate_or_division_value']['expose']['identifier'] = 'field_directorate_or_division_value';
  $handler->display->display_options['filters']['field_directorate_or_division_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  /* Filter criterion: Content: End Date (field_end_date) */
  $handler->display->display_options['filters']['field_end_date_value']['id'] = 'field_end_date_value';
  $handler->display->display_options['filters']['field_end_date_value']['table'] = 'field_data_field_end_date';
  $handler->display->display_options['filters']['field_end_date_value']['field'] = 'field_end_date_value';
  $handler->display->display_options['filters']['field_end_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_end_date_value']['expose']['operator_id'] = 'field_end_date_value_op';
  $handler->display->display_options['filters']['field_end_date_value']['expose']['label'] = 'End Date (field_end_date)';
  $handler->display->display_options['filters']['field_end_date_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_end_date_value']['expose']['operator'] = 'field_end_date_value_op';
  $handler->display->display_options['filters']['field_end_date_value']['expose']['identifier'] = 'field_end_date_value';
  $handler->display->display_options['filters']['field_end_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  $handler->display->display_options['filters']['field_end_date_value']['form_type'] = 'date_popup';
  /* Filter criterion: Content: Foods sub-category (field_foods_sub_category) */
  $handler->display->display_options['filters']['field_foods_sub_category_value']['id'] = 'field_foods_sub_category_value';
  $handler->display->display_options['filters']['field_foods_sub_category_value']['table'] = 'field_data_field_foods_sub_category';
  $handler->display->display_options['filters']['field_foods_sub_category_value']['field'] = 'field_foods_sub_category_value';
  $handler->display->display_options['filters']['field_foods_sub_category_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_foods_sub_category_value']['expose']['operator_id'] = 'field_foods_sub_category_value_op';
  $handler->display->display_options['filters']['field_foods_sub_category_value']['expose']['label'] = 'Foods sub-category';
  $handler->display->display_options['filters']['field_foods_sub_category_value']['expose']['operator'] = 'field_foods_sub_category_value_op';
  $handler->display->display_options['filters']['field_foods_sub_category_value']['expose']['identifier'] = 'field_foods_sub_category_value';
  $handler->display->display_options['filters']['field_foods_sub_category_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  /* Filter criterion: Content: IAS Sub-Category (field_ias_sub_category) */
  $handler->display->display_options['filters']['field_ias_sub_category_value']['id'] = 'field_ias_sub_category_value';
  $handler->display->display_options['filters']['field_ias_sub_category_value']['table'] = 'field_data_field_ias_sub_category';
  $handler->display->display_options['filters']['field_ias_sub_category_value']['field'] = 'field_ias_sub_category_value';
  $handler->display->display_options['filters']['field_ias_sub_category_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ias_sub_category_value']['expose']['operator_id'] = 'field_ias_sub_category_value_op';
  $handler->display->display_options['filters']['field_ias_sub_category_value']['expose']['label'] = 'IAS Sub-Category';
  $handler->display->display_options['filters']['field_ias_sub_category_value']['expose']['operator'] = 'field_ias_sub_category_value_op';
  $handler->display->display_options['filters']['field_ias_sub_category_value']['expose']['identifier'] = 'field_ias_sub_category_value';
  $handler->display->display_options['filters']['field_ias_sub_category_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  /* Filter criterion: Content: Language (field_language) */
  $handler->display->display_options['filters']['field_language_value']['id'] = 'field_language_value';
  $handler->display->display_options['filters']['field_language_value']['table'] = 'field_data_field_language';
  $handler->display->display_options['filters']['field_language_value']['field'] = 'field_language_value';
  $handler->display->display_options['filters']['field_language_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_language_value']['expose']['operator_id'] = 'field_language_value_op';
  $handler->display->display_options['filters']['field_language_value']['expose']['label'] = 'Language';
  $handler->display->display_options['filters']['field_language_value']['expose']['operator'] = 'field_language_value_op';
  $handler->display->display_options['filters']['field_language_value']['expose']['identifier'] = 'field_language_value';
  $handler->display->display_options['filters']['field_language_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  /* Filter criterion: Content: MECS Number (field_mecs_number) */
  $handler->display->display_options['filters']['field_mecs_number_value']['id'] = 'field_mecs_number_value';
  $handler->display->display_options['filters']['field_mecs_number_value']['table'] = 'field_data_field_mecs_number';
  $handler->display->display_options['filters']['field_mecs_number_value']['field'] = 'field_mecs_number_value';
  $handler->display->display_options['filters']['field_mecs_number_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_mecs_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_mecs_number_value']['expose']['operator_id'] = 'field_mecs_number_value_op';
  $handler->display->display_options['filters']['field_mecs_number_value']['expose']['label'] = 'MECS Number';
  $handler->display->display_options['filters']['field_mecs_number_value']['expose']['operator'] = 'field_mecs_number_value_op';
  $handler->display->display_options['filters']['field_mecs_number_value']['expose']['identifier'] = 'field_mecs_number_value';
  $handler->display->display_options['filters']['field_mecs_number_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  $handler->display->display_options['filters']['field_mecs_number_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_mecs_number_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_mecs_number_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_mecs_number_value']['expose']['autocomplete_field'] = 'field_mecs_number';
  $handler->display->display_options['filters']['field_mecs_number_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_mecs_number_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_mecs_number_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Product (field_product) */
  $handler->display->display_options['filters']['field_product_value']['id'] = 'field_product_value';
  $handler->display->display_options['filters']['field_product_value']['table'] = 'field_data_field_product';
  $handler->display->display_options['filters']['field_product_value']['field'] = 'field_product_value';
  $handler->display->display_options['filters']['field_product_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_product_value']['expose']['operator_id'] = 'field_product_value_op';
  $handler->display->display_options['filters']['field_product_value']['expose']['label'] = 'Product';
  $handler->display->display_options['filters']['field_product_value']['expose']['operator'] = 'field_product_value_op';
  $handler->display->display_options['filters']['field_product_value']['expose']['identifier'] = 'field_product_value';
  $handler->display->display_options['filters']['field_product_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  /* Filter criterion: Content: Product Name (field_product_name) */
  $handler->display->display_options['filters']['field_product_name_value']['id'] = 'field_product_name_value';
  $handler->display->display_options['filters']['field_product_name_value']['table'] = 'field_data_field_product_name';
  $handler->display->display_options['filters']['field_product_name_value']['field'] = 'field_product_name_value';
  $handler->display->display_options['filters']['field_product_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_product_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_product_name_value']['expose']['operator_id'] = 'field_product_name_value_op';
  $handler->display->display_options['filters']['field_product_name_value']['expose']['label'] = 'Product Name';
  $handler->display->display_options['filters']['field_product_name_value']['expose']['operator'] = 'field_product_name_value_op';
  $handler->display->display_options['filters']['field_product_name_value']['expose']['identifier'] = 'field_product_name_value';
  $handler->display->display_options['filters']['field_product_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  $handler->display->display_options['filters']['field_product_name_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_product_name_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_product_name_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_product_name_value']['expose']['autocomplete_field'] = 'field_product_name';
  $handler->display->display_options['filters']['field_product_name_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_product_name_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_product_name_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Risk Category (field_risk_category) */
  $handler->display->display_options['filters']['field_risk_category_value']['id'] = 'field_risk_category_value';
  $handler->display->display_options['filters']['field_risk_category_value']['table'] = 'field_data_field_risk_category';
  $handler->display->display_options['filters']['field_risk_category_value']['field'] = 'field_risk_category_value';
  $handler->display->display_options['filters']['field_risk_category_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_risk_category_value']['expose']['operator_id'] = 'field_risk_category_value_op';
  $handler->display->display_options['filters']['field_risk_category_value']['expose']['label'] = 'Risk Category';
  $handler->display->display_options['filters']['field_risk_category_value']['expose']['operator'] = 'field_risk_category_value_op';
  $handler->display->display_options['filters']['field_risk_category_value']['expose']['identifier'] = 'field_risk_category_value';
  $handler->display->display_options['filters']['field_risk_category_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  /* Filter criterion: Content: SAU Sub-Category (field_sau_sub_category) */
  $handler->display->display_options['filters']['field_sau_sub_category_value']['id'] = 'field_sau_sub_category_value';
  $handler->display->display_options['filters']['field_sau_sub_category_value']['table'] = 'field_data_field_sau_sub_category';
  $handler->display->display_options['filters']['field_sau_sub_category_value']['field'] = 'field_sau_sub_category_value';
  $handler->display->display_options['filters']['field_sau_sub_category_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sau_sub_category_value']['expose']['operator_id'] = 'field_sau_sub_category_value_op';
  $handler->display->display_options['filters']['field_sau_sub_category_value']['expose']['label'] = 'SAU Sub-Category';
  $handler->display->display_options['filters']['field_sau_sub_category_value']['expose']['operator'] = 'field_sau_sub_category_value_op';
  $handler->display->display_options['filters']['field_sau_sub_category_value']['expose']['identifier'] = 'field_sau_sub_category_value';
  $handler->display->display_options['filters']['field_sau_sub_category_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  /* Filter criterion: Content: Sub-category (field_sub_category) */
  $handler->display->display_options['filters']['field_sub_category_value']['id'] = 'field_sub_category_value';
  $handler->display->display_options['filters']['field_sub_category_value']['table'] = 'field_data_field_sub_category';
  $handler->display->display_options['filters']['field_sub_category_value']['field'] = 'field_sub_category_value';
  $handler->display->display_options['filters']['field_sub_category_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sub_category_value']['expose']['operator_id'] = 'field_sub_category_value_op';
  $handler->display->display_options['filters']['field_sub_category_value']['expose']['label'] = 'Sub-category';
  $handler->display->display_options['filters']['field_sub_category_value']['expose']['operator'] = 'field_sub_category_value_op';
  $handler->display->display_options['filters']['field_sub_category_value']['expose']['identifier'] = 'field_sub_category_value';
  $handler->display->display_options['filters']['field_sub_category_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  /* Filter criterion: Content: Subgroup (field_subgroup) */
  $handler->display->display_options['filters']['field_subgroup_value']['id'] = 'field_subgroup_value';
  $handler->display->display_options['filters']['field_subgroup_value']['table'] = 'field_data_field_subgroup';
  $handler->display->display_options['filters']['field_subgroup_value']['field'] = 'field_subgroup_value';
  $handler->display->display_options['filters']['field_subgroup_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_subgroup_value']['expose']['operator_id'] = 'field_subgroup_value_op';
  $handler->display->display_options['filters']['field_subgroup_value']['expose']['label'] = 'Subgroup';
  $handler->display->display_options['filters']['field_subgroup_value']['expose']['operator'] = 'field_subgroup_value_op';
  $handler->display->display_options['filters']['field_subgroup_value']['expose']['identifier'] = 'field_subgroup_value';
  $handler->display->display_options['filters']['field_subgroup_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  /* Filter criterion: Content: Submission Number (field_submission_number) */
  $handler->display->display_options['filters']['field_submission_number_value']['id'] = 'field_submission_number_value';
  $handler->display->display_options['filters']['field_submission_number_value']['table'] = 'field_data_field_submission_number';
  $handler->display->display_options['filters']['field_submission_number_value']['field'] = 'field_submission_number_value';
  $handler->display->display_options['filters']['field_submission_number_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_submission_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_submission_number_value']['expose']['operator_id'] = 'field_submission_number_value_op';
  $handler->display->display_options['filters']['field_submission_number_value']['expose']['label'] = 'Submission Number';
  $handler->display->display_options['filters']['field_submission_number_value']['expose']['operator'] = 'field_submission_number_value_op';
  $handler->display->display_options['filters']['field_submission_number_value']['expose']['identifier'] = 'field_submission_number_value';
  $handler->display->display_options['filters']['field_submission_number_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  $handler->display->display_options['filters']['field_submission_number_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_submission_number_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_submission_number_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_submission_number_value']['expose']['autocomplete_field'] = 'field_submission_number';
  $handler->display->display_options['filters']['field_submission_number_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_submission_number_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_submission_number_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: License Number (field_license_number) */
  $handler->display->display_options['filters']['field_license_number_value']['id'] = 'field_license_number_value';
  $handler->display->display_options['filters']['field_license_number_value']['table'] = 'field_data_field_license_number';
  $handler->display->display_options['filters']['field_license_number_value']['field'] = 'field_license_number_value';
  $handler->display->display_options['filters']['field_license_number_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_license_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_license_number_value']['expose']['operator_id'] = 'field_license_number_value_op';
  $handler->display->display_options['filters']['field_license_number_value']['expose']['label'] = 'License Number';
  $handler->display->display_options['filters']['field_license_number_value']['expose']['operator'] = 'field_license_number_value_op';
  $handler->display->display_options['filters']['field_license_number_value']['expose']['identifier'] = 'field_license_number_value';
  $handler->display->display_options['filters']['field_license_number_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  $handler->display->display_options['filters']['field_license_number_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_license_number_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_license_number_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_license_number_value']['expose']['autocomplete_field'] = 'field_license_number';
  $handler->display->display_options['filters']['field_license_number_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_license_number_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_license_number_value']['expose']['autocomplete_dependent'] = 0;

  /* Display: Task list for space */
  $handler = $view->new_display('panel_pane', 'Task list for space', 'task_list_for_space');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_user_display_name' => 'field_user_display_name',
    'field_oa_worktracker_duedate' => 'field_oa_worktracker_duedate',
    'field_oa_worktracker_priority' => 'field_oa_worktracker_priority',
    'field_oa_worktracker_task_status' => 'field_oa_worktracker_task_status',
    'og_group_ref' => 'og_group_ref',
    'oa_section_ref' => 'oa_section_ref',
    'field_oa_worktracker_task_type' => 'field_oa_worktracker_task_type',
  );
  $handler->display->display_options['style_options']['default'] = 'field_oa_worktracker_duedate';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_display_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_oa_worktracker_duedate' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_oa_worktracker_priority' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_oa_worktracker_task_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'og_group_ref' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'oa_section_ref' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_oa_worktracker_task_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['label'] = 'Summary';
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php
print \'<br>\';
 print $view->feed_icon; 
print \'<br>\';
?>
';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No tasks.';
  $handler->display->display_options['empty']['area']['format'] = 'panopoly_wysiwyg_text';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_oa_worktracker_assigned_to_target_id']['id'] = 'field_oa_worktracker_assigned_to_target_id';
  $handler->display->display_options['relationships']['field_oa_worktracker_assigned_to_target_id']['table'] = 'field_data_field_oa_worktracker_assigned_to';
  $handler->display->display_options['relationships']['field_oa_worktracker_assigned_to_target_id']['field'] = 'field_oa_worktracker_assigned_to_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: User: Display Name */
  $handler->display->display_options['fields']['field_user_display_name']['id'] = 'field_user_display_name';
  $handler->display->display_options['fields']['field_user_display_name']['table'] = 'field_data_field_user_display_name';
  $handler->display->display_options['fields']['field_user_display_name']['field'] = 'field_user_display_name';
  $handler->display->display_options['fields']['field_user_display_name']['relationship'] = 'field_oa_worktracker_assigned_to_target_id';
  $handler->display->display_options['fields']['field_user_display_name']['label'] = 'Assigned To';
  /* Field: Content: Due date */
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['id'] = 'field_oa_worktracker_duedate';
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['table'] = 'field_data_field_oa_worktracker_duedate';
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['field'] = 'field_oa_worktracker_duedate';
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Priority */
  $handler->display->display_options['fields']['field_oa_worktracker_priority']['id'] = 'field_oa_worktracker_priority';
  $handler->display->display_options['fields']['field_oa_worktracker_priority']['table'] = 'field_data_field_oa_worktracker_priority';
  $handler->display->display_options['fields']['field_oa_worktracker_priority']['field'] = 'field_oa_worktracker_priority';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_oa_worktracker_task_status']['id'] = 'field_oa_worktracker_task_status';
  $handler->display->display_options['fields']['field_oa_worktracker_task_status']['table'] = 'field_data_field_oa_worktracker_task_status';
  $handler->display->display_options['fields']['field_oa_worktracker_task_status']['field'] = 'field_oa_worktracker_task_status';
  /* Field: Content: Groups audience */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = 'Space';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Section */
  $handler->display->display_options['fields']['oa_section_ref']['id'] = 'oa_section_ref';
  $handler->display->display_options['fields']['oa_section_ref']['table'] = 'field_data_oa_section_ref';
  $handler->display->display_options['fields']['oa_section_ref']['field'] = 'oa_section_ref';
  $handler->display->display_options['fields']['oa_section_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['oa_section_ref']['click_sort_column'] = 'target_id';
  $handler->display->display_options['fields']['oa_section_ref']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_oa_worktracker_task_type']['id'] = 'field_oa_worktracker_task_type';
  $handler->display->display_options['fields']['field_oa_worktracker_task_type']['table'] = 'field_data_field_oa_worktracker_task_type';
  $handler->display->display_options['fields']['field_oa_worktracker_task_type']['field'] = 'field_oa_worktracker_task_type';
  /* Field: Content: Closed? */
  $handler->display->display_options['fields']['field_is_closed']['id'] = 'field_is_closed';
  $handler->display->display_options['fields']['field_is_closed']['table'] = 'field_data_field_is_closed';
  $handler->display->display_options['fields']['field_is_closed']['field'] = 'field_is_closed';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Groups audience (og_group_ref:target_id) */
  $handler->display->display_options['arguments']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'oa_worktracker_task' => 'oa_worktracker_task',
    'task_inherited' => 'task_inherited',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Groups audience (og_group_ref:target_id) */
  $handler->display->display_options['filters']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['group'] = 1;
  $handler->display->display_options['filters']['og_group_ref_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator_id'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['label'] = 'Space';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['identifier'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'word';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
    24 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: User: Display Name (field_user_display_name) */
  $handler->display->display_options['filters']['field_user_display_name_value']['id'] = 'field_user_display_name_value';
  $handler->display->display_options['filters']['field_user_display_name_value']['table'] = 'field_data_field_user_display_name';
  $handler->display->display_options['filters']['field_user_display_name_value']['field'] = 'field_user_display_name_value';
  $handler->display->display_options['filters']['field_user_display_name_value']['relationship'] = 'field_oa_worktracker_assigned_to_target_id';
  $handler->display->display_options['filters']['field_user_display_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_user_display_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_user_display_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['operator_id'] = 'field_user_display_name_value_op';
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['label'] = 'Assigned to';
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['operator'] = 'field_user_display_name_value_op';
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['identifier'] = 'field_user_display_name_value';
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['autocomplete_field'] = 'field_user_display_name';
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter_1']['id'] = 'date_filter_1';
  $handler->display->display_options['filters']['date_filter_1']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter_1']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter_1']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter_1']['group'] = 1;
  $handler->display->display_options['filters']['date_filter_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter_1']['expose']['operator_id'] = 'date_filter_1_op';
  $handler->display->display_options['filters']['date_filter_1']['expose']['label'] = 'Post Date';
  $handler->display->display_options['filters']['date_filter_1']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['date_filter_1']['expose']['operator'] = 'date_filter_1_op';
  $handler->display->display_options['filters']['date_filter_1']['expose']['identifier'] = 'date_filter_1';
  $handler->display->display_options['filters']['date_filter_1']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
    24 => 0,
  );
  $handler->display->display_options['filters']['date_filter_1']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter_1']['date_fields'] = array(
    'node.created' => 'node.created',
  );
  $handler->display->display_options['filters']['date_filter_1']['date_method'] = 'AND';
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['group'] = 1;
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op_test';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Due date';
  $handler->display->display_options['filters']['date_filter']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_label'] = 'Operator';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_oa_worktracker_duedate.field_oa_worktracker_duedate_value' => 'field_data_field_oa_worktracker_duedate.field_oa_worktracker_duedate_value',
  );
  /* Filter criterion: Content: Type (field_oa_worktracker_task_type) */
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['id'] = 'field_oa_worktracker_task_type_value';
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['table'] = 'field_data_field_oa_worktracker_task_type';
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['field'] = 'field_oa_worktracker_task_type_value';
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['expose']['operator_id'] = 'field_oa_worktracker_task_type_value_op';
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['expose']['operator'] = 'field_oa_worktracker_task_type_value_op';
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['expose']['identifier'] = 'field_oa_worktracker_task_type_value';
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
    24 => 0,
  );
  /* Filter criterion: Content: Status (field_oa_worktracker_task_status) */
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['id'] = 'field_oa_worktracker_task_status_value';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['table'] = 'field_data_field_oa_worktracker_task_status';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['field'] = 'field_oa_worktracker_task_status_value';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['group'] = 2;
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['expose']['operator_id'] = 'field_oa_worktracker_task_status_value_op';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['expose']['operator'] = 'field_oa_worktracker_task_status_value_op';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['expose']['identifier'] = 'field_oa_worktracker_task_status_value';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  /* Filter criterion: Content: Closed? (field_is_closed) */
  $handler->display->display_options['filters']['field_is_closed_value']['id'] = 'field_is_closed_value';
  $handler->display->display_options['filters']['field_is_closed_value']['table'] = 'field_data_field_is_closed';
  $handler->display->display_options['filters']['field_is_closed_value']['field'] = 'field_is_closed_value';
  $handler->display->display_options['filters']['field_is_closed_value']['group'] = 2;
  $handler->display->display_options['filters']['field_is_closed_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['operator_id'] = 'field_is_closed_value_op';
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['label'] = 'Closed?';
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['operator'] = 'field_is_closed_value_op';
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['identifier'] = 'field_is_closed_value';
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
  );
  $handler->display->display_options['pane_title'] = 'Space task list';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['exposed_form_configure'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['exposed_form_overrides'] = array(
    'filters' => array(
      'og_group_ref_target_id' => '',
      'title' => 'exposed',
      'field_user_display_name_value' => 'exposed',
      'date_filter_1' => 'exposed',
      'date_filter' => 'exposed',
      'field_oa_worktracker_task_type_value' => 'exposed',
      'field_oa_worktracker_task_status_value' => 'exposed',
      'field_is_closed_value' => 'exposed',
    ),
  );
  $handler->display->display_options['link_to_view'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '0';

  /* Display: Related Tasks (reverse) */
  $handler = $view->new_display('panel_pane', 'Related Tasks (reverse)', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Reversed Related Tasks';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'oa_form';
  $handler->display->display_options['exposed_form']['options']['collapsed_filter'] = 1;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Broken/missing handler */
  $handler->display->display_options['arguments']['field_related_tasks_field_related_task_target_id']['id'] = 'field_related_tasks_field_related_task_target_id';
  $handler->display->display_options['arguments']['field_related_tasks_field_related_task_target_id']['table'] = 'field_data_field_related_tasks';
  $handler->display->display_options['arguments']['field_related_tasks_field_related_task_target_id']['field'] = 'field_related_tasks_field_related_task_target_id';
  $handler->display->display_options['arguments']['field_related_tasks_field_related_task_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_related_tasks_field_related_task_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_related_tasks_field_related_task_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_related_tasks_field_related_task_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_related_tasks_field_related_task_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['pane_title'] = 'Related Tasks (reverse)';
  $handler->display->display_options['argument_input'] = array(
    'field_related_tasks_id' => array(
      'type' => 'none',
      'context' => 'entity:command_button.og-membership--1',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Related Tasks (field_related_tasks:id)',
    ),
  );

  /* Display: IMDB */
  $handler = $view->new_display('panel_pane', 'IMDB', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Issue List';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'oa_form';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['collapsed_filter'] = 1;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_is_overall_status' => 'field_is_overall_status',
    'field_is_status' => 'field_is_status',
    'field_is_category' => 'field_is_category',
    'field_is_subcategory' => 'field_is_subcategory',
    'field_is_identifier' => 'field_is_identifier',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_is_overall_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_is_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_is_category' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_is_subcategory' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_is_identifier' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: IS Overall Status */
  $handler->display->display_options['fields']['field_is_overall_status']['id'] = 'field_is_overall_status';
  $handler->display->display_options['fields']['field_is_overall_status']['table'] = 'field_data_field_is_overall_status';
  $handler->display->display_options['fields']['field_is_overall_status']['field'] = 'field_is_overall_status';
  /* Field: Content: IS Status */
  $handler->display->display_options['fields']['field_is_status']['id'] = 'field_is_status';
  $handler->display->display_options['fields']['field_is_status']['table'] = 'field_data_field_is_status';
  $handler->display->display_options['fields']['field_is_status']['field'] = 'field_is_status';
  /* Field: Content: IS Category */
  $handler->display->display_options['fields']['field_is_category']['id'] = 'field_is_category';
  $handler->display->display_options['fields']['field_is_category']['table'] = 'field_data_field_is_category';
  $handler->display->display_options['fields']['field_is_category']['field'] = 'field_is_category';
  /* Field: Content: IS Subcategory */
  $handler->display->display_options['fields']['field_is_subcategory']['id'] = 'field_is_subcategory';
  $handler->display->display_options['fields']['field_is_subcategory']['table'] = 'field_data_field_is_subcategory';
  $handler->display->display_options['fields']['field_is_subcategory']['field'] = 'field_is_subcategory';
  /* Field: Content: IS Identifier */
  $handler->display->display_options['fields']['field_is_identifier']['id'] = 'field_is_identifier';
  $handler->display->display_options['fields']['field_is_identifier']['table'] = 'field_data_field_is_identifier';
  $handler->display->display_options['fields']['field_is_identifier']['field'] = 'field_is_identifier';
  /* Field: Field: Attachments */
  $handler->display->display_options['fields']['field_oa_media']['id'] = 'field_oa_media';
  $handler->display->display_options['fields']['field_oa_media']['table'] = 'field_data_field_oa_media';
  $handler->display->display_options['fields']['field_oa_media']['field'] = 'field_oa_media';
  $handler->display->display_options['fields']['field_oa_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_oa_media']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nhpd_imdb' => 'nhpd_imdb',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Section (oa_section_ref:target_id) */
  $handler->display->display_options['filters']['oa_section_ref_target_id']['id'] = 'oa_section_ref_target_id';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['table'] = 'field_data_oa_section_ref';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['field'] = 'oa_section_ref_target_id';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['group'] = 1;
  $handler->display->display_options['filters']['oa_section_ref_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['oa_section_ref_target_id']['expose']['operator_id'] = 'oa_section_ref_target_id_op';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['expose']['label'] = 'Section';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['expose']['operator'] = 'oa_section_ref_target_id_op';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['expose']['identifier'] = 'oa_section_ref_target_id';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: IS Overall Status (field_is_overall_status) */
  $handler->display->display_options['filters']['field_is_overall_status_value']['id'] = 'field_is_overall_status_value';
  $handler->display->display_options['filters']['field_is_overall_status_value']['table'] = 'field_data_field_is_overall_status';
  $handler->display->display_options['filters']['field_is_overall_status_value']['field'] = 'field_is_overall_status_value';
  $handler->display->display_options['filters']['field_is_overall_status_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_is_overall_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_is_overall_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_is_overall_status_value']['expose']['operator_id'] = 'field_is_overall_status_value_op';
  $handler->display->display_options['filters']['field_is_overall_status_value']['expose']['label'] = 'IS Overall Status';
  $handler->display->display_options['filters']['field_is_overall_status_value']['expose']['operator'] = 'field_is_overall_status_value_op';
  $handler->display->display_options['filters']['field_is_overall_status_value']['expose']['identifier'] = 'field_is_overall_status_value';
  $handler->display->display_options['filters']['field_is_overall_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_is_overall_status_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_is_overall_status_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_is_overall_status_value']['expose']['autocomplete_field'] = 'field_is_overall_status';
  $handler->display->display_options['filters']['field_is_overall_status_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_is_overall_status_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_is_overall_status_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: IS Status (field_is_status) */
  $handler->display->display_options['filters']['field_is_status_value']['id'] = 'field_is_status_value';
  $handler->display->display_options['filters']['field_is_status_value']['table'] = 'field_data_field_is_status';
  $handler->display->display_options['filters']['field_is_status_value']['field'] = 'field_is_status_value';
  $handler->display->display_options['filters']['field_is_status_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_is_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_is_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_is_status_value']['expose']['operator_id'] = 'field_is_status_value_op';
  $handler->display->display_options['filters']['field_is_status_value']['expose']['label'] = 'IS Status';
  $handler->display->display_options['filters']['field_is_status_value']['expose']['operator'] = 'field_is_status_value_op';
  $handler->display->display_options['filters']['field_is_status_value']['expose']['identifier'] = 'field_is_status_value';
  $handler->display->display_options['filters']['field_is_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_is_status_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_is_status_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_is_status_value']['expose']['autocomplete_field'] = 'field_is_status';
  $handler->display->display_options['filters']['field_is_status_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_is_status_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_is_status_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: IS Category (field_is_category) */
  $handler->display->display_options['filters']['field_is_category_value']['id'] = 'field_is_category_value';
  $handler->display->display_options['filters']['field_is_category_value']['table'] = 'field_data_field_is_category';
  $handler->display->display_options['filters']['field_is_category_value']['field'] = 'field_is_category_value';
  $handler->display->display_options['filters']['field_is_category_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_is_category_value']['group'] = 1;
  $handler->display->display_options['filters']['field_is_category_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_is_category_value']['expose']['operator_id'] = 'field_is_category_value_op';
  $handler->display->display_options['filters']['field_is_category_value']['expose']['label'] = 'IS Category';
  $handler->display->display_options['filters']['field_is_category_value']['expose']['operator'] = 'field_is_category_value_op';
  $handler->display->display_options['filters']['field_is_category_value']['expose']['identifier'] = 'field_is_category_value';
  $handler->display->display_options['filters']['field_is_category_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_is_category_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_is_category_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_is_category_value']['expose']['autocomplete_field'] = 'field_is_category';
  $handler->display->display_options['filters']['field_is_category_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_is_category_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_is_category_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: IS Subcategory (field_is_subcategory) */
  $handler->display->display_options['filters']['field_is_subcategory_value']['id'] = 'field_is_subcategory_value';
  $handler->display->display_options['filters']['field_is_subcategory_value']['table'] = 'field_data_field_is_subcategory';
  $handler->display->display_options['filters']['field_is_subcategory_value']['field'] = 'field_is_subcategory_value';
  $handler->display->display_options['filters']['field_is_subcategory_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_is_subcategory_value']['group'] = 1;
  $handler->display->display_options['filters']['field_is_subcategory_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_is_subcategory_value']['expose']['operator_id'] = 'field_is_subcategory_value_op';
  $handler->display->display_options['filters']['field_is_subcategory_value']['expose']['label'] = 'IS Subcategory';
  $handler->display->display_options['filters']['field_is_subcategory_value']['expose']['operator'] = 'field_is_subcategory_value_op';
  $handler->display->display_options['filters']['field_is_subcategory_value']['expose']['identifier'] = 'field_is_subcategory_value';
  $handler->display->display_options['filters']['field_is_subcategory_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_is_subcategory_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_is_subcategory_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_is_subcategory_value']['expose']['autocomplete_field'] = 'field_is_subcategory';
  $handler->display->display_options['filters']['field_is_subcategory_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_is_subcategory_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_is_subcategory_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: IS Identifier (field_is_identifier) */
  $handler->display->display_options['filters']['field_is_identifier_value']['id'] = 'field_is_identifier_value';
  $handler->display->display_options['filters']['field_is_identifier_value']['table'] = 'field_data_field_is_identifier';
  $handler->display->display_options['filters']['field_is_identifier_value']['field'] = 'field_is_identifier_value';
  $handler->display->display_options['filters']['field_is_identifier_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_is_identifier_value']['group'] = 1;
  $handler->display->display_options['filters']['field_is_identifier_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_is_identifier_value']['expose']['operator_id'] = 'field_is_identifier_value_op';
  $handler->display->display_options['filters']['field_is_identifier_value']['expose']['label'] = 'IS Identifier';
  $handler->display->display_options['filters']['field_is_identifier_value']['expose']['operator'] = 'field_is_identifier_value_op';
  $handler->display->display_options['filters']['field_is_identifier_value']['expose']['identifier'] = 'field_is_identifier_value';
  $handler->display->display_options['filters']['field_is_identifier_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_is_identifier_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_is_identifier_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_is_identifier_value']['expose']['autocomplete_field'] = 'field_is_identifier';
  $handler->display->display_options['filters']['field_is_identifier_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_is_identifier_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_is_identifier_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: IS Keywords (field_is_keywords) */
  $handler->display->display_options['filters']['field_is_keywords_value']['id'] = 'field_is_keywords_value';
  $handler->display->display_options['filters']['field_is_keywords_value']['table'] = 'field_data_field_is_keywords';
  $handler->display->display_options['filters']['field_is_keywords_value']['field'] = 'field_is_keywords_value';
  $handler->display->display_options['filters']['field_is_keywords_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_is_keywords_value']['group'] = 1;
  $handler->display->display_options['filters']['field_is_keywords_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_is_keywords_value']['expose']['operator_id'] = 'field_is_keywords_value_op';
  $handler->display->display_options['filters']['field_is_keywords_value']['expose']['label'] = 'IS Keywords';
  $handler->display->display_options['filters']['field_is_keywords_value']['expose']['operator'] = 'field_is_keywords_value_op';
  $handler->display->display_options['filters']['field_is_keywords_value']['expose']['identifier'] = 'field_is_keywords_value';
  $handler->display->display_options['filters']['field_is_keywords_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_is_keywords_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_is_keywords_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_is_keywords_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_is_keywords_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_is_keywords_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['operator'] = 'required';
  $handler->display->display_options['filters']['keys']['group'] = 1;
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search Terms';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['exposed_form_configure'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['exposed_form_overrides'] = array(
    'filters' => array(
      'oa_section_ref_target_id' => '',
      'field_is_overall_status_value' => 'exposed',
      'field_is_status_value' => 'exposed',
      'field_is_category_value' => 'exposed',
      'field_is_subcategory_value' => 'exposed',
      'field_is_identifier_value' => 'exposed',
      'field_is_keywords_value' => 'exposed',
      'keys' => 'exposed',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Subtask */
  $handler = $view->new_display('panel_pane', 'Subtask', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Subtasks';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Parent Task (field_parent_task:target_id) */
  $handler->display->display_options['arguments']['field_parent_task_target_id']['id'] = 'field_parent_task_target_id';
  $handler->display->display_options['arguments']['field_parent_task_target_id']['table'] = 'field_data_field_parent_task';
  $handler->display->display_options['arguments']['field_parent_task_target_id']['field'] = 'field_parent_task_target_id';
  $handler->display->display_options['arguments']['field_parent_task_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_parent_task_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_parent_task_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_parent_task_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_parent_task_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'oa_worktracker_task' => 'oa_worktracker_task',
    'task_inherited' => 'task_inherited',
  );
  $handler->display->display_options['pane_title'] = 'Subtasks';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['exposed_form_configure'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_parent_task_target_id' => array(
      'type' => 'none',
      'context' => 'entity:node.field-parent-task',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Parent Task (field_parent_task)',
    ),
  );

  /* Display: Task report */
  $handler = $view->new_display('page', 'Task report', 'task_report');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_oa_worktracker_assigned_to_target_id']['id'] = 'field_oa_worktracker_assigned_to_target_id';
  $handler->display->display_options['relationships']['field_oa_worktracker_assigned_to_target_id']['table'] = 'field_data_field_oa_worktracker_assigned_to';
  $handler->display->display_options['relationships']['field_oa_worktracker_assigned_to_target_id']['field'] = 'field_oa_worktracker_assigned_to_target_id';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Assigned to */
  $handler->display->display_options['fields']['field_oa_worktracker_assigned_to']['id'] = 'field_oa_worktracker_assigned_to';
  $handler->display->display_options['fields']['field_oa_worktracker_assigned_to']['table'] = 'field_data_field_oa_worktracker_assigned_to';
  $handler->display->display_options['fields']['field_oa_worktracker_assigned_to']['field'] = 'field_oa_worktracker_assigned_to';
  $handler->display->display_options['fields']['field_oa_worktracker_assigned_to']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Due date */
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['id'] = 'field_oa_worktracker_duedate';
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['table'] = 'field_data_field_oa_worktracker_duedate';
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['field'] = 'field_oa_worktracker_duedate';
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Priority */
  $handler->display->display_options['fields']['field_oa_worktracker_priority']['id'] = 'field_oa_worktracker_priority';
  $handler->display->display_options['fields']['field_oa_worktracker_priority']['table'] = 'field_data_field_oa_worktracker_priority';
  $handler->display->display_options['fields']['field_oa_worktracker_priority']['field'] = 'field_oa_worktracker_priority';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_oa_worktracker_task_status']['id'] = 'field_oa_worktracker_task_status';
  $handler->display->display_options['fields']['field_oa_worktracker_task_status']['table'] = 'field_data_field_oa_worktracker_task_status';
  $handler->display->display_options['fields']['field_oa_worktracker_task_status']['field'] = 'field_oa_worktracker_task_status';
  /* Field: Content: Groups audience */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = 'Space';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Section */
  $handler->display->display_options['fields']['oa_section_ref']['id'] = 'oa_section_ref';
  $handler->display->display_options['fields']['oa_section_ref']['table'] = 'field_data_oa_section_ref';
  $handler->display->display_options['fields']['oa_section_ref']['field'] = 'oa_section_ref';
  $handler->display->display_options['fields']['oa_section_ref']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_oa_worktracker_task_type']['id'] = 'field_oa_worktracker_task_type';
  $handler->display->display_options['fields']['field_oa_worktracker_task_type']['table'] = 'field_data_field_oa_worktracker_task_type';
  $handler->display->display_options['fields']['field_oa_worktracker_task_type']['field'] = 'field_oa_worktracker_task_type';
  /* Field: Content: Ingredient Name */
  $handler->display->display_options['fields']['field_ingredient_name']['id'] = 'field_ingredient_name';
  $handler->display->display_options['fields']['field_ingredient_name']['table'] = 'field_data_field_ingredient_name';
  $handler->display->display_options['fields']['field_ingredient_name']['field'] = 'field_ingredient_name';
  /* Field: Content: NPN */
  $handler->display->display_options['fields']['field_npn']['id'] = 'field_npn';
  $handler->display->display_options['fields']['field_npn']['table'] = 'field_data_field_npn';
  $handler->display->display_options['fields']['field_npn']['field'] = 'field_npn';
  /* Field: Content: Actual Cost */
  $handler->display->display_options['fields']['field_actual_cost']['id'] = 'field_actual_cost';
  $handler->display->display_options['fields']['field_actual_cost']['table'] = 'field_data_field_actual_cost';
  $handler->display->display_options['fields']['field_actual_cost']['field'] = 'field_actual_cost';
  /* Field: Content: Affects Branch */
  $handler->display->display_options['fields']['field_affects_branch']['id'] = 'field_affects_branch';
  $handler->display->display_options['fields']['field_affects_branch']['table'] = 'field_data_field_affects_branch';
  $handler->display->display_options['fields']['field_affects_branch']['field'] = 'field_affects_branch';
  /* Field: Content: Affects Department */
  $handler->display->display_options['fields']['field_affects_department']['id'] = 'field_affects_department';
  $handler->display->display_options['fields']['field_affects_department']['table'] = 'field_data_field_affects_department';
  $handler->display->display_options['fields']['field_affects_department']['field'] = 'field_affects_department';
  /* Field: Content: Affects Directorate */
  $handler->display->display_options['fields']['field_affects_directorate']['id'] = 'field_affects_directorate';
  $handler->display->display_options['fields']['field_affects_directorate']['table'] = 'field_data_field_affects_directorate';
  $handler->display->display_options['fields']['field_affects_directorate']['field'] = 'field_affects_directorate';
  /* Field: Content: Affects External Stakeholders */
  $handler->display->display_options['fields']['field_affects_external_stakehold']['id'] = 'field_affects_external_stakehold';
  $handler->display->display_options['fields']['field_affects_external_stakehold']['table'] = 'field_data_field_affects_external_stakehold';
  $handler->display->display_options['fields']['field_affects_external_stakehold']['field'] = 'field_affects_external_stakehold';
  /* Field: Content: Alignment Description */
  $handler->display->display_options['fields']['field_alignment_description']['id'] = 'field_alignment_description';
  $handler->display->display_options['fields']['field_alignment_description']['table'] = 'field_data_field_alignment_description';
  $handler->display->display_options['fields']['field_alignment_description']['field'] = 'field_alignment_description';
  /* Field: Content: ApplType */
  $handler->display->display_options['fields']['field_appltype']['id'] = 'field_appltype';
  $handler->display->display_options['fields']['field_appltype']['table'] = 'field_data_field_appltype';
  $handler->display->display_options['fields']['field_appltype']['field'] = 'field_appltype';
  /* Field: Content: ASR Number */
  $handler->display->display_options['fields']['field_asr_number']['id'] = 'field_asr_number';
  $handler->display->display_options['fields']['field_asr_number']['table'] = 'field_data_field_asr_number';
  $handler->display->display_options['fields']['field_asr_number']['field'] = 'field_asr_number';
  $handler->display->display_options['fields']['field_asr_number']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Assigned SME */
  $handler->display->display_options['fields']['field_assigned_sme']['id'] = 'field_assigned_sme';
  $handler->display->display_options['fields']['field_assigned_sme']['table'] = 'field_data_field_assigned_sme';
  $handler->display->display_options['fields']['field_assigned_sme']['field'] = 'field_assigned_sme';
  /* Field: Content: Benefits Description */
  $handler->display->display_options['fields']['field_benefits_description']['id'] = 'field_benefits_description';
  $handler->display->display_options['fields']['field_benefits_description']['table'] = 'field_data_field_benefits_description';
  $handler->display->display_options['fields']['field_benefits_description']['field'] = 'field_benefits_description';
  /* Field: Content: Business Benefit */
  $handler->display->display_options['fields']['field_business_benefit']['id'] = 'field_business_benefit';
  $handler->display->display_options['fields']['field_business_benefit']['table'] = 'field_data_field_business_benefit';
  $handler->display->display_options['fields']['field_business_benefit']['field'] = 'field_business_benefit';
  /* Field: Content: Client email or other contact */
  $handler->display->display_options['fields']['field_client_email_or_other_cont']['id'] = 'field_client_email_or_other_cont';
  $handler->display->display_options['fields']['field_client_email_or_other_cont']['table'] = 'field_data_field_client_email_or_other_cont';
  $handler->display->display_options['fields']['field_client_email_or_other_cont']['field'] = 'field_client_email_or_other_cont';
  /* Field: Content: Client name */
  $handler->display->display_options['fields']['field_client_name']['id'] = 'field_client_name';
  $handler->display->display_options['fields']['field_client_name']['table'] = 'field_data_field_client_name';
  $handler->display->display_options['fields']['field_client_name']['field'] = 'field_client_name';
  /* Field: Content: Client phone */
  $handler->display->display_options['fields']['field_client_phone']['id'] = 'field_client_phone';
  $handler->display->display_options['fields']['field_client_phone']['table'] = 'field_data_field_client_phone';
  $handler->display->display_options['fields']['field_client_phone']['field'] = 'field_client_phone';
  /* Field: Content: Company Code */
  $handler->display->display_options['fields']['field_company_code']['id'] = 'field_company_code';
  $handler->display->display_options['fields']['field_company_code']['table'] = 'field_data_field_company_code';
  $handler->display->display_options['fields']['field_company_code']['field'] = 'field_company_code';
  /* Field: Content: Company Name */
  $handler->display->display_options['fields']['field_company_name']['id'] = 'field_company_name';
  $handler->display->display_options['fields']['field_company_name']['table'] = 'field_data_field_company_name';
  $handler->display->display_options['fields']['field_company_name']['field'] = 'field_company_name';
  /* Field: Content: Component */
  $handler->display->display_options['fields']['field_component']['id'] = 'field_component';
  $handler->display->display_options['fields']['field_component']['table'] = 'field_data_field_component';
  $handler->display->display_options['fields']['field_component']['field'] = 'field_component';
  /* Field: Content: Consultation Completed */
  $handler->display->display_options['fields']['field_consultation_completed']['id'] = 'field_consultation_completed';
  $handler->display->display_options['fields']['field_consultation_completed']['table'] = 'field_data_field_consultation_completed';
  $handler->display->display_options['fields']['field_consultation_completed']['field'] = 'field_consultation_completed';
  /* Field: Content: Consultation Required */
  $handler->display->display_options['fields']['field_consultation_required']['id'] = 'field_consultation_required';
  $handler->display->display_options['fields']['field_consultation_required']['table'] = 'field_data_field_consultation_required';
  $handler->display->display_options['fields']['field_consultation_required']['field'] = 'field_consultation_required';
  /* Field: Content: Content Owner */
  $handler->display->display_options['fields']['field_content_owner']['id'] = 'field_content_owner';
  $handler->display->display_options['fields']['field_content_owner']['table'] = 'field_data_field_content_owner';
  $handler->display->display_options['fields']['field_content_owner']['field'] = 'field_content_owner';
  /* Field: Content: Contractual Requirement */
  $handler->display->display_options['fields']['field_contractual_requirement']['id'] = 'field_contractual_requirement';
  $handler->display->display_options['fields']['field_contractual_requirement']['table'] = 'field_data_field_contractual_requirement';
  $handler->display->display_options['fields']['field_contractual_requirement']['field'] = 'field_contractual_requirement';
  /* Field: Content: CR Sub-Category */
  $handler->display->display_options['fields']['field_cr_sub_category']['id'] = 'field_cr_sub_category';
  $handler->display->display_options['fields']['field_cr_sub_category']['table'] = 'field_data_field_cr_sub_category';
  $handler->display->display_options['fields']['field_cr_sub_category']['field'] = 'field_cr_sub_category';
  /* Field: Content: Current version */
  $handler->display->display_options['fields']['field_current_version']['id'] = 'field_current_version';
  $handler->display->display_options['fields']['field_current_version']['table'] = 'field_data_field_current_version';
  $handler->display->display_options['fields']['field_current_version']['field'] = 'field_current_version';
  $handler->display->display_options['fields']['field_current_version']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: CVP Issue Source */
  $handler->display->display_options['fields']['field_cvp_issue_source']['id'] = 'field_cvp_issue_source';
  $handler->display->display_options['fields']['field_cvp_issue_source']['table'] = 'field_data_field_cvp_issue_source';
  $handler->display->display_options['fields']['field_cvp_issue_source']['field'] = 'field_cvp_issue_source';
  /* Field: Content: Date received */
  $handler->display->display_options['fields']['field_date_received']['id'] = 'field_date_received';
  $handler->display->display_options['fields']['field_date_received']['table'] = 'field_data_field_date_received';
  $handler->display->display_options['fields']['field_date_received']['field'] = 'field_date_received';
  $handler->display->display_options['fields']['field_date_received']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Defect Number */
  $handler->display->display_options['fields']['field_defect_number']['id'] = 'field_defect_number';
  $handler->display->display_options['fields']['field_defect_number']['table'] = 'field_data_field_defect_number';
  $handler->display->display_options['fields']['field_defect_number']['field'] = 'field_defect_number';
  /* Field: Content: Dependencies */
  $handler->display->display_options['fields']['field_dependencies']['id'] = 'field_dependencies';
  $handler->display->display_options['fields']['field_dependencies']['table'] = 'field_data_field_dependencies';
  $handler->display->display_options['fields']['field_dependencies']['field'] = 'field_dependencies';
  /* Field: Content: Directorate */
  $handler->display->display_options['fields']['field_directorate']['id'] = 'field_directorate';
  $handler->display->display_options['fields']['field_directorate']['table'] = 'field_data_field_directorate';
  $handler->display->display_options['fields']['field_directorate']['field'] = 'field_directorate';
  /* Field: Content: Directorate Bureau */
  $handler->display->display_options['fields']['field_directorate_bureau']['id'] = 'field_directorate_bureau';
  $handler->display->display_options['fields']['field_directorate_bureau']['table'] = 'field_data_field_directorate_bureau';
  $handler->display->display_options['fields']['field_directorate_bureau']['field'] = 'field_directorate_bureau';
  /* Field: Content: Directorate or Division */
  $handler->display->display_options['fields']['field_directorate_or_division']['id'] = 'field_directorate_or_division';
  $handler->display->display_options['fields']['field_directorate_or_division']['table'] = 'field_data_field_directorate_or_division';
  $handler->display->display_options['fields']['field_directorate_or_division']['field'] = 'field_directorate_or_division';
  /* Field: Content: Document Version */
  $handler->display->display_options['fields']['field_document_version']['id'] = 'field_document_version';
  $handler->display->display_options['fields']['field_document_version']['table'] = 'field_data_field_document_version';
  $handler->display->display_options['fields']['field_document_version']['field'] = 'field_document_version';
  /* Field: Content: Email Source */
  $handler->display->display_options['fields']['field_email_source']['id'] = 'field_email_source';
  $handler->display->display_options['fields']['field_email_source']['table'] = 'field_data_field_email_source';
  $handler->display->display_options['fields']['field_email_source']['field'] = 'field_email_source';
  /* Field: Content: End Date */
  $handler->display->display_options['fields']['field_end_date']['id'] = 'field_end_date';
  $handler->display->display_options['fields']['field_end_date']['table'] = 'field_data_field_end_date';
  $handler->display->display_options['fields']['field_end_date']['field'] = 'field_end_date';
  $handler->display->display_options['fields']['field_end_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Entry to NHPID */
  $handler->display->display_options['fields']['field_entry_to_nhpid']['id'] = 'field_entry_to_nhpid';
  $handler->display->display_options['fields']['field_entry_to_nhpid']['table'] = 'field_data_field_entry_to_nhpid';
  $handler->display->display_options['fields']['field_entry_to_nhpid']['field'] = 'field_entry_to_nhpid';
  /* Field: Content: Environment */
  $handler->display->display_options['fields']['field_environment']['id'] = 'field_environment';
  $handler->display->display_options['fields']['field_environment']['table'] = 'field_data_field_environment';
  $handler->display->display_options['fields']['field_environment']['field'] = 'field_environment';
  /* Field: Content: Errata */
  $handler->display->display_options['fields']['field_errata']['id'] = 'field_errata';
  $handler->display->display_options['fields']['field_errata']['table'] = 'field_data_field_errata';
  $handler->display->display_options['fields']['field_errata']['field'] = 'field_errata';
  /* Field: Content: Estimated Cost */
  $handler->display->display_options['fields']['field_estimated_cost']['id'] = 'field_estimated_cost';
  $handler->display->display_options['fields']['field_estimated_cost']['table'] = 'field_data_field_estimated_cost';
  $handler->display->display_options['fields']['field_estimated_cost']['field'] = 'field_estimated_cost';
  /* Field: Content: Exempted Product */
  $handler->display->display_options['fields']['field_exempted_product']['id'] = 'field_exempted_product';
  $handler->display->display_options['fields']['field_exempted_product']['table'] = 'field_data_field_exempted_product';
  $handler->display->display_options['fields']['field_exempted_product']['field'] = 'field_exempted_product';
  /* Field: Content: Final Classification Decision */
  $handler->display->display_options['fields']['field_final_class_decision']['id'] = 'field_final_class_decision';
  $handler->display->display_options['fields']['field_final_class_decision']['table'] = 'field_data_field_final_class_decision';
  $handler->display->display_options['fields']['field_final_class_decision']['field'] = 'field_final_class_decision';
  /* Field: Content: Fixed In Build */
  $handler->display->display_options['fields']['field_fixed_in_build']['id'] = 'field_fixed_in_build';
  $handler->display->display_options['fields']['field_fixed_in_build']['table'] = 'field_data_field_fixed_in_build';
  $handler->display->display_options['fields']['field_fixed_in_build']['field'] = 'field_fixed_in_build';
  /* Field: Content: Foods sub-category */
  $handler->display->display_options['fields']['field_foods_sub_category']['id'] = 'field_foods_sub_category';
  $handler->display->display_options['fields']['field_foods_sub_category']['table'] = 'field_data_field_foods_sub_category';
  $handler->display->display_options['fields']['field_foods_sub_category']['field'] = 'field_foods_sub_category';
  /* Field: Content: Found In */
  $handler->display->display_options['fields']['field_found_in']['id'] = 'field_found_in';
  $handler->display->display_options['fields']['field_found_in']['table'] = 'field_data_field_found_in';
  $handler->display->display_options['fields']['field_found_in']['field'] = 'field_found_in';
  /* Field: Content: Found In Build */
  $handler->display->display_options['fields']['field_found_in_build']['id'] = 'field_found_in_build';
  $handler->display->display_options['fields']['field_found_in_build']['table'] = 'field_data_field_found_in_build';
  $handler->display->display_options['fields']['field_found_in_build']['field'] = 'field_found_in_build';
  /* Field: Content: Found In Version */
  $handler->display->display_options['fields']['field_found_in_version']['id'] = 'field_found_in_version';
  $handler->display->display_options['fields']['field_found_in_version']['table'] = 'field_data_field_found_in_version';
  $handler->display->display_options['fields']['field_found_in_version']['field'] = 'field_found_in_version';
  /* Field: Content: IAS Sub-Category */
  $handler->display->display_options['fields']['field_ias_sub_category']['id'] = 'field_ias_sub_category';
  $handler->display->display_options['fields']['field_ias_sub_category']['table'] = 'field_data_field_ias_sub_category';
  $handler->display->display_options['fields']['field_ias_sub_category']['field'] = 'field_ias_sub_category';
  /* Field: Content: If GMP Request */
  $handler->display->display_options['fields']['field_if_gmp_request']['id'] = 'field_if_gmp_request';
  $handler->display->display_options['fields']['field_if_gmp_request']['table'] = 'field_data_field_if_gmp_request';
  $handler->display->display_options['fields']['field_if_gmp_request']['field'] = 'field_if_gmp_request';
  /* Field: Content: If Product General Inquiry */
  $handler->display->display_options['fields']['field_if_product_general_inquery']['id'] = 'field_if_product_general_inquery';
  $handler->display->display_options['fields']['field_if_product_general_inquery']['table'] = 'field_data_field_if_product_general_inquery';
  $handler->display->display_options['fields']['field_if_product_general_inquery']['field'] = 'field_if_product_general_inquery';
  /* Field: Content: If Site General Inquiry */
  $handler->display->display_options['fields']['field_if_site_general_inquiry']['id'] = 'field_if_site_general_inquiry';
  $handler->display->display_options['fields']['field_if_site_general_inquiry']['table'] = 'field_data_field_if_site_general_inquiry';
  $handler->display->display_options['fields']['field_if_site_general_inquiry']['field'] = 'field_if_site_general_inquiry';
  /* Field: Content: Internal group */
  $handler->display->display_options['fields']['field_internal_group']['id'] = 'field_internal_group';
  $handler->display->display_options['fields']['field_internal_group']['table'] = 'field_data_field_internal_group';
  $handler->display->display_options['fields']['field_internal_group']['field'] = 'field_internal_group';
  /* Field: Content: Issue form tracking number */
  $handler->display->display_options['fields']['field_issue_form_tracking_number']['id'] = 'field_issue_form_tracking_number';
  $handler->display->display_options['fields']['field_issue_form_tracking_number']['table'] = 'field_data_field_issue_form_tracking_number';
  $handler->display->display_options['fields']['field_issue_form_tracking_number']['field'] = 'field_issue_form_tracking_number';
  /* Field: Content: Issue source */
  $handler->display->display_options['fields']['field_issue_source']['id'] = 'field_issue_source';
  $handler->display->display_options['fields']['field_issue_source']['table'] = 'field_data_field_issue_source';
  $handler->display->display_options['fields']['field_issue_source']['field'] = 'field_issue_source';
  /* Field: Content: Language */
  $handler->display->display_options['fields']['field_language']['id'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['table'] = 'field_data_field_language';
  $handler->display->display_options['fields']['field_language']['field'] = 'field_language';
  /* Field: Content: License Number */
  $handler->display->display_options['fields']['field_license_number']['id'] = 'field_license_number';
  $handler->display->display_options['fields']['field_license_number']['table'] = 'field_data_field_license_number';
  $handler->display->display_options['fields']['field_license_number']['field'] = 'field_license_number';
  /* Field: Content: Lotus Unique ID */
  $handler->display->display_options['fields']['field_lotus_unique_id']['id'] = 'field_lotus_unique_id';
  $handler->display->display_options['fields']['field_lotus_unique_id']['table'] = 'field_data_field_lotus_unique_id';
  $handler->display->display_options['fields']['field_lotus_unique_id']['field'] = 'field_lotus_unique_id';
  /* Field: Content: MECS Number */
  $handler->display->display_options['fields']['field_mecs_number']['id'] = 'field_mecs_number';
  $handler->display->display_options['fields']['field_mecs_number']['table'] = 'field_data_field_mecs_number';
  $handler->display->display_options['fields']['field_mecs_number']['field'] = 'field_mecs_number';
  /* Field: Content: No. of Affected Submissions */
  $handler->display->display_options['fields']['field_no_of_affected_submissions']['id'] = 'field_no_of_affected_submissions';
  $handler->display->display_options['fields']['field_no_of_affected_submissions']['table'] = 'field_data_field_no_of_affected_submissions';
  $handler->display->display_options['fields']['field_no_of_affected_submissions']['field'] = 'field_no_of_affected_submissions';
  $handler->display->display_options['fields']['field_no_of_affected_submissions']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: PCI Batch */
  $handler->display->display_options['fields']['field_pci_batch']['id'] = 'field_pci_batch';
  $handler->display->display_options['fields']['field_pci_batch']['table'] = 'field_data_field_pci_batch';
  $handler->display->display_options['fields']['field_pci_batch']['field'] = 'field_pci_batch';
  /* Field: Content: Political or Legal Requirement */
  $handler->display->display_options['fields']['field_political_or_legal_require']['id'] = 'field_political_or_legal_require';
  $handler->display->display_options['fields']['field_political_or_legal_require']['table'] = 'field_data_field_political_or_legal_require';
  $handler->display->display_options['fields']['field_political_or_legal_require']['field'] = 'field_political_or_legal_require';
  /* Field: Content: Priorities Alignment */
  $handler->display->display_options['fields']['field_priorities_alignment']['id'] = 'field_priorities_alignment';
  $handler->display->display_options['fields']['field_priorities_alignment']['table'] = 'field_data_field_priorities_alignment';
  $handler->display->display_options['fields']['field_priorities_alignment']['field'] = 'field_priorities_alignment';
  /* Field: Content: Priority Category */
  $handler->display->display_options['fields']['field_priority_category']['id'] = 'field_priority_category';
  $handler->display->display_options['fields']['field_priority_category']['table'] = 'field_data_field_priority_category';
  $handler->display->display_options['fields']['field_priority_category']['field'] = 'field_priority_category';
  /* Field: Content: Product */
  $handler->display->display_options['fields']['field_product']['id'] = 'field_product';
  $handler->display->display_options['fields']['field_product']['table'] = 'field_data_field_product';
  $handler->display->display_options['fields']['field_product']['field'] = 'field_product';
  /* Field: Content: Product Name */
  $handler->display->display_options['fields']['field_product_name']['id'] = 'field_product_name';
  $handler->display->display_options['fields']['field_product_name']['table'] = 'field_data_field_product_name';
  $handler->display->display_options['fields']['field_product_name']['field'] = 'field_product_name';
  /* Field: Content: Product Request Type */
  $handler->display->display_options['fields']['field_product_request_type']['id'] = 'field_product_request_type';
  $handler->display->display_options['fields']['field_product_request_type']['table'] = 'field_data_field_product_request_type';
  $handler->display->display_options['fields']['field_product_request_type']['field'] = 'field_product_request_type';
  /* Field: Content: Reporter Name */
  $handler->display->display_options['fields']['field_reporter_name']['id'] = 'field_reporter_name';
  $handler->display->display_options['fields']['field_reporter_name']['table'] = 'field_data_field_reporter_name';
  $handler->display->display_options['fields']['field_reporter_name']['field'] = 'field_reporter_name';
  /* Field: Content: Request Method */
  $handler->display->display_options['fields']['field_request_method']['id'] = 'field_request_method';
  $handler->display->display_options['fields']['field_request_method']['table'] = 'field_data_field_request_method';
  $handler->display->display_options['fields']['field_request_method']['field'] = 'field_request_method';
  /* Field: Content: Request Rationale */
  $handler->display->display_options['fields']['field_request_rationale']['id'] = 'field_request_rationale';
  $handler->display->display_options['fields']['field_request_rationale']['table'] = 'field_data_field_request_rationale';
  $handler->display->display_options['fields']['field_request_rationale']['field'] = 'field_request_rationale';
  /* Field: Content: Resolution details */
  $handler->display->display_options['fields']['field_resolution_details']['id'] = 'field_resolution_details';
  $handler->display->display_options['fields']['field_resolution_details']['table'] = 'field_data_field_resolution_details';
  $handler->display->display_options['fields']['field_resolution_details']['field'] = 'field_resolution_details';
  /* Field: Content: Response Method */
  $handler->display->display_options['fields']['field_response_method']['id'] = 'field_response_method';
  $handler->display->display_options['fields']['field_response_method']['table'] = 'field_data_field_response_method';
  $handler->display->display_options['fields']['field_response_method']['field'] = 'field_response_method';
  /* Field: Content: Risk Category */
  $handler->display->display_options['fields']['field_risk_category']['id'] = 'field_risk_category';
  $handler->display->display_options['fields']['field_risk_category']['table'] = 'field_data_field_risk_category';
  $handler->display->display_options['fields']['field_risk_category']['field'] = 'field_risk_category';
  /* Field: Content: Root */
  $handler->display->display_options['fields']['field_root']['id'] = 'field_root';
  $handler->display->display_options['fields']['field_root']['table'] = 'field_data_field_root';
  $handler->display->display_options['fields']['field_root']['field'] = 'field_root';
  /* Field: Content: RSS Required */
  $handler->display->display_options['fields']['field_rss_required']['id'] = 'field_rss_required';
  $handler->display->display_options['fields']['field_rss_required']['table'] = 'field_data_field_rss_required';
  $handler->display->display_options['fields']['field_rss_required']['field'] = 'field_rss_required';
  /* Field: Content: SAU Sub-Category */
  $handler->display->display_options['fields']['field_sau_sub_category']['id'] = 'field_sau_sub_category';
  $handler->display->display_options['fields']['field_sau_sub_category']['table'] = 'field_data_field_sau_sub_category';
  $handler->display->display_options['fields']['field_sau_sub_category']['field'] = 'field_sau_sub_category';
  /* Field: Content: Site Request Type */
  $handler->display->display_options['fields']['field_site_request_type']['id'] = 'field_site_request_type';
  $handler->display->display_options['fields']['field_site_request_type']['table'] = 'field_data_field_site_request_type';
  $handler->display->display_options['fields']['field_site_request_type']['field'] = 'field_site_request_type';
  /* Field: Content: Space Blueprint */
  $handler->display->display_options['fields']['field_oa_space_type']['id'] = 'field_oa_space_type';
  $handler->display->display_options['fields']['field_oa_space_type']['table'] = 'field_data_field_oa_space_type';
  $handler->display->display_options['fields']['field_oa_space_type']['field'] = 'field_oa_space_type';
  /* Field: Content: Start date */
  $handler->display->display_options['fields']['field_start_date']['id'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['table'] = 'field_data_field_start_date';
  $handler->display->display_options['fields']['field_start_date']['field'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Stream */
  $handler->display->display_options['fields']['field_stream']['id'] = 'field_stream';
  $handler->display->display_options['fields']['field_stream']['table'] = 'field_data_field_stream';
  $handler->display->display_options['fields']['field_stream']['field'] = 'field_stream';
  /* Field: Content: Sub-category */
  $handler->display->display_options['fields']['field_sub_category']['id'] = 'field_sub_category';
  $handler->display->display_options['fields']['field_sub_category']['table'] = 'field_data_field_sub_category';
  $handler->display->display_options['fields']['field_sub_category']['field'] = 'field_sub_category';
  /* Field: Content: Subgroup */
  $handler->display->display_options['fields']['field_subgroup']['id'] = 'field_subgroup';
  $handler->display->display_options['fields']['field_subgroup']['table'] = 'field_data_field_subgroup';
  $handler->display->display_options['fields']['field_subgroup']['field'] = 'field_subgroup';
  /* Field: Content: Submission Number */
  $handler->display->display_options['fields']['field_submission_number']['id'] = 'field_submission_number';
  $handler->display->display_options['fields']['field_submission_number']['table'] = 'field_data_field_submission_number';
  $handler->display->display_options['fields']['field_submission_number']['field'] = 'field_submission_number';
  /* Field: Content: Substance type */
  $handler->display->display_options['fields']['field_substance_type']['id'] = 'field_substance_type';
  $handler->display->display_options['fields']['field_substance_type']['table'] = 'field_data_field_substance_type';
  $handler->display->display_options['fields']['field_substance_type']['field'] = 'field_substance_type';
  /* Field: Content: Target release */
  $handler->display->display_options['fields']['field_target_release']['id'] = 'field_target_release';
  $handler->display->display_options['fields']['field_target_release']['table'] = 'field_data_field_target_release';
  $handler->display->display_options['fields']['field_target_release']['field'] = 'field_target_release';
  /* Field: Content: Tester */
  $handler->display->display_options['fields']['field_tester']['id'] = 'field_tester';
  $handler->display->display_options['fields']['field_tester']['table'] = 'field_data_field_tester';
  $handler->display->display_options['fields']['field_tester']['field'] = 'field_tester';
  /* Field: Content: Total Rated Criteria */
  $handler->display->display_options['fields']['field_total_rated_criteria']['id'] = 'field_total_rated_criteria';
  $handler->display->display_options['fields']['field_total_rated_criteria']['table'] = 'field_data_field_total_rated_criteria';
  $handler->display->display_options['fields']['field_total_rated_criteria']['field'] = 'field_total_rated_criteria';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Groups audience (og_group_ref:target_id) */
  $handler->display->display_options['arguments']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'task_report';
  $handler->display->display_options['menu']['title'] = 'Task report';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: view field for section */
  $handler = $view->new_display('page', 'view field for section', 'view_field_for_section');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Tasks List';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Assigned to */
  $handler->display->display_options['fields']['field_oa_worktracker_assigned_to']['id'] = 'field_oa_worktracker_assigned_to';
  $handler->display->display_options['fields']['field_oa_worktracker_assigned_to']['table'] = 'field_data_field_oa_worktracker_assigned_to';
  $handler->display->display_options['fields']['field_oa_worktracker_assigned_to']['field'] = 'field_oa_worktracker_assigned_to';
  $handler->display->display_options['fields']['field_oa_worktracker_assigned_to']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Due date */
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['id'] = 'field_oa_worktracker_duedate';
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['table'] = 'field_data_field_oa_worktracker_duedate';
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['field'] = 'field_oa_worktracker_duedate';
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Priority */
  $handler->display->display_options['fields']['field_oa_worktracker_priority']['id'] = 'field_oa_worktracker_priority';
  $handler->display->display_options['fields']['field_oa_worktracker_priority']['table'] = 'field_data_field_oa_worktracker_priority';
  $handler->display->display_options['fields']['field_oa_worktracker_priority']['field'] = 'field_oa_worktracker_priority';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_oa_worktracker_task_status']['id'] = 'field_oa_worktracker_task_status';
  $handler->display->display_options['fields']['field_oa_worktracker_task_status']['table'] = 'field_data_field_oa_worktracker_task_status';
  $handler->display->display_options['fields']['field_oa_worktracker_task_status']['field'] = 'field_oa_worktracker_task_status';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_oa_worktracker_task_type']['id'] = 'field_oa_worktracker_task_type';
  $handler->display->display_options['fields']['field_oa_worktracker_task_type']['table'] = 'field_data_field_oa_worktracker_task_type';
  $handler->display->display_options['fields']['field_oa_worktracker_task_type']['field'] = 'field_oa_worktracker_task_type';
  /* Field: Content: Ingredient Name */
  $handler->display->display_options['fields']['field_ingredient_name']['id'] = 'field_ingredient_name';
  $handler->display->display_options['fields']['field_ingredient_name']['table'] = 'field_data_field_ingredient_name';
  $handler->display->display_options['fields']['field_ingredient_name']['field'] = 'field_ingredient_name';
  /* Field: Content: NPN */
  $handler->display->display_options['fields']['field_npn']['id'] = 'field_npn';
  $handler->display->display_options['fields']['field_npn']['table'] = 'field_data_field_npn';
  $handler->display->display_options['fields']['field_npn']['field'] = 'field_npn';
  /* Field: Content: Actual Cost */
  $handler->display->display_options['fields']['field_actual_cost']['id'] = 'field_actual_cost';
  $handler->display->display_options['fields']['field_actual_cost']['table'] = 'field_data_field_actual_cost';
  $handler->display->display_options['fields']['field_actual_cost']['field'] = 'field_actual_cost';
  /* Field: Content: Affects Branch */
  $handler->display->display_options['fields']['field_affects_branch']['id'] = 'field_affects_branch';
  $handler->display->display_options['fields']['field_affects_branch']['table'] = 'field_data_field_affects_branch';
  $handler->display->display_options['fields']['field_affects_branch']['field'] = 'field_affects_branch';
  /* Field: Content: Affects Department */
  $handler->display->display_options['fields']['field_affects_department']['id'] = 'field_affects_department';
  $handler->display->display_options['fields']['field_affects_department']['table'] = 'field_data_field_affects_department';
  $handler->display->display_options['fields']['field_affects_department']['field'] = 'field_affects_department';
  /* Field: Content: Affects Directorate */
  $handler->display->display_options['fields']['field_affects_directorate']['id'] = 'field_affects_directorate';
  $handler->display->display_options['fields']['field_affects_directorate']['table'] = 'field_data_field_affects_directorate';
  $handler->display->display_options['fields']['field_affects_directorate']['field'] = 'field_affects_directorate';
  /* Field: Content: Affects External Stakeholders */
  $handler->display->display_options['fields']['field_affects_external_stakehold']['id'] = 'field_affects_external_stakehold';
  $handler->display->display_options['fields']['field_affects_external_stakehold']['table'] = 'field_data_field_affects_external_stakehold';
  $handler->display->display_options['fields']['field_affects_external_stakehold']['field'] = 'field_affects_external_stakehold';
  /* Field: Content: Alignment Description */
  $handler->display->display_options['fields']['field_alignment_description']['id'] = 'field_alignment_description';
  $handler->display->display_options['fields']['field_alignment_description']['table'] = 'field_data_field_alignment_description';
  $handler->display->display_options['fields']['field_alignment_description']['field'] = 'field_alignment_description';
  /* Field: Content: ApplType */
  $handler->display->display_options['fields']['field_appltype']['id'] = 'field_appltype';
  $handler->display->display_options['fields']['field_appltype']['table'] = 'field_data_field_appltype';
  $handler->display->display_options['fields']['field_appltype']['field'] = 'field_appltype';
  /* Field: Content: ASR Number */
  $handler->display->display_options['fields']['field_asr_number']['id'] = 'field_asr_number';
  $handler->display->display_options['fields']['field_asr_number']['table'] = 'field_data_field_asr_number';
  $handler->display->display_options['fields']['field_asr_number']['field'] = 'field_asr_number';
  $handler->display->display_options['fields']['field_asr_number']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Assigned SME */
  $handler->display->display_options['fields']['field_assigned_sme']['id'] = 'field_assigned_sme';
  $handler->display->display_options['fields']['field_assigned_sme']['table'] = 'field_data_field_assigned_sme';
  $handler->display->display_options['fields']['field_assigned_sme']['field'] = 'field_assigned_sme';
  /* Field: Content: Benefits Description */
  $handler->display->display_options['fields']['field_benefits_description']['id'] = 'field_benefits_description';
  $handler->display->display_options['fields']['field_benefits_description']['table'] = 'field_data_field_benefits_description';
  $handler->display->display_options['fields']['field_benefits_description']['field'] = 'field_benefits_description';
  /* Field: Content: Business Benefit */
  $handler->display->display_options['fields']['field_business_benefit']['id'] = 'field_business_benefit';
  $handler->display->display_options['fields']['field_business_benefit']['table'] = 'field_data_field_business_benefit';
  $handler->display->display_options['fields']['field_business_benefit']['field'] = 'field_business_benefit';
  /* Field: Content: Client email or other contact */
  $handler->display->display_options['fields']['field_client_email_or_other_cont']['id'] = 'field_client_email_or_other_cont';
  $handler->display->display_options['fields']['field_client_email_or_other_cont']['table'] = 'field_data_field_client_email_or_other_cont';
  $handler->display->display_options['fields']['field_client_email_or_other_cont']['field'] = 'field_client_email_or_other_cont';
  /* Field: Content: Client name */
  $handler->display->display_options['fields']['field_client_name']['id'] = 'field_client_name';
  $handler->display->display_options['fields']['field_client_name']['table'] = 'field_data_field_client_name';
  $handler->display->display_options['fields']['field_client_name']['field'] = 'field_client_name';
  /* Field: Content: Client phone */
  $handler->display->display_options['fields']['field_client_phone']['id'] = 'field_client_phone';
  $handler->display->display_options['fields']['field_client_phone']['table'] = 'field_data_field_client_phone';
  $handler->display->display_options['fields']['field_client_phone']['field'] = 'field_client_phone';
  /* Field: Content: Company Code */
  $handler->display->display_options['fields']['field_company_code']['id'] = 'field_company_code';
  $handler->display->display_options['fields']['field_company_code']['table'] = 'field_data_field_company_code';
  $handler->display->display_options['fields']['field_company_code']['field'] = 'field_company_code';
  /* Field: Content: Company Name */
  $handler->display->display_options['fields']['field_company_name']['id'] = 'field_company_name';
  $handler->display->display_options['fields']['field_company_name']['table'] = 'field_data_field_company_name';
  $handler->display->display_options['fields']['field_company_name']['field'] = 'field_company_name';
  /* Field: Content: Component */
  $handler->display->display_options['fields']['field_component']['id'] = 'field_component';
  $handler->display->display_options['fields']['field_component']['table'] = 'field_data_field_component';
  $handler->display->display_options['fields']['field_component']['field'] = 'field_component';
  /* Field: Content: Consultation Completed */
  $handler->display->display_options['fields']['field_consultation_completed']['id'] = 'field_consultation_completed';
  $handler->display->display_options['fields']['field_consultation_completed']['table'] = 'field_data_field_consultation_completed';
  $handler->display->display_options['fields']['field_consultation_completed']['field'] = 'field_consultation_completed';
  /* Field: Content: Consultation Required */
  $handler->display->display_options['fields']['field_consultation_required']['id'] = 'field_consultation_required';
  $handler->display->display_options['fields']['field_consultation_required']['table'] = 'field_data_field_consultation_required';
  $handler->display->display_options['fields']['field_consultation_required']['field'] = 'field_consultation_required';
  /* Field: Content: Content Owner */
  $handler->display->display_options['fields']['field_content_owner']['id'] = 'field_content_owner';
  $handler->display->display_options['fields']['field_content_owner']['table'] = 'field_data_field_content_owner';
  $handler->display->display_options['fields']['field_content_owner']['field'] = 'field_content_owner';
  /* Field: Content: Contractual Requirement */
  $handler->display->display_options['fields']['field_contractual_requirement']['id'] = 'field_contractual_requirement';
  $handler->display->display_options['fields']['field_contractual_requirement']['table'] = 'field_data_field_contractual_requirement';
  $handler->display->display_options['fields']['field_contractual_requirement']['field'] = 'field_contractual_requirement';
  /* Field: Content: CR Sub-Category */
  $handler->display->display_options['fields']['field_cr_sub_category']['id'] = 'field_cr_sub_category';
  $handler->display->display_options['fields']['field_cr_sub_category']['table'] = 'field_data_field_cr_sub_category';
  $handler->display->display_options['fields']['field_cr_sub_category']['field'] = 'field_cr_sub_category';
  /* Field: Content: Current version */
  $handler->display->display_options['fields']['field_current_version']['id'] = 'field_current_version';
  $handler->display->display_options['fields']['field_current_version']['table'] = 'field_data_field_current_version';
  $handler->display->display_options['fields']['field_current_version']['field'] = 'field_current_version';
  $handler->display->display_options['fields']['field_current_version']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: CVP Issue Source */
  $handler->display->display_options['fields']['field_cvp_issue_source']['id'] = 'field_cvp_issue_source';
  $handler->display->display_options['fields']['field_cvp_issue_source']['table'] = 'field_data_field_cvp_issue_source';
  $handler->display->display_options['fields']['field_cvp_issue_source']['field'] = 'field_cvp_issue_source';
  /* Field: Content: Date received */
  $handler->display->display_options['fields']['field_date_received']['id'] = 'field_date_received';
  $handler->display->display_options['fields']['field_date_received']['table'] = 'field_data_field_date_received';
  $handler->display->display_options['fields']['field_date_received']['field'] = 'field_date_received';
  $handler->display->display_options['fields']['field_date_received']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Defect Number */
  $handler->display->display_options['fields']['field_defect_number']['id'] = 'field_defect_number';
  $handler->display->display_options['fields']['field_defect_number']['table'] = 'field_data_field_defect_number';
  $handler->display->display_options['fields']['field_defect_number']['field'] = 'field_defect_number';
  /* Field: Content: Dependencies */
  $handler->display->display_options['fields']['field_dependencies']['id'] = 'field_dependencies';
  $handler->display->display_options['fields']['field_dependencies']['table'] = 'field_data_field_dependencies';
  $handler->display->display_options['fields']['field_dependencies']['field'] = 'field_dependencies';
  /* Field: Content: Directorate */
  $handler->display->display_options['fields']['field_directorate']['id'] = 'field_directorate';
  $handler->display->display_options['fields']['field_directorate']['table'] = 'field_data_field_directorate';
  $handler->display->display_options['fields']['field_directorate']['field'] = 'field_directorate';
  /* Field: Content: Directorate Bureau */
  $handler->display->display_options['fields']['field_directorate_bureau']['id'] = 'field_directorate_bureau';
  $handler->display->display_options['fields']['field_directorate_bureau']['table'] = 'field_data_field_directorate_bureau';
  $handler->display->display_options['fields']['field_directorate_bureau']['field'] = 'field_directorate_bureau';
  /* Field: Content: Directorate or Division */
  $handler->display->display_options['fields']['field_directorate_or_division']['id'] = 'field_directorate_or_division';
  $handler->display->display_options['fields']['field_directorate_or_division']['table'] = 'field_data_field_directorate_or_division';
  $handler->display->display_options['fields']['field_directorate_or_division']['field'] = 'field_directorate_or_division';
  /* Field: Content: Document Version */
  $handler->display->display_options['fields']['field_document_version']['id'] = 'field_document_version';
  $handler->display->display_options['fields']['field_document_version']['table'] = 'field_data_field_document_version';
  $handler->display->display_options['fields']['field_document_version']['field'] = 'field_document_version';
  /* Field: Content: Email Source */
  $handler->display->display_options['fields']['field_email_source']['id'] = 'field_email_source';
  $handler->display->display_options['fields']['field_email_source']['table'] = 'field_data_field_email_source';
  $handler->display->display_options['fields']['field_email_source']['field'] = 'field_email_source';
  /* Field: Content: End Date */
  $handler->display->display_options['fields']['field_end_date']['id'] = 'field_end_date';
  $handler->display->display_options['fields']['field_end_date']['table'] = 'field_data_field_end_date';
  $handler->display->display_options['fields']['field_end_date']['field'] = 'field_end_date';
  $handler->display->display_options['fields']['field_end_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Entry to NHPID */
  $handler->display->display_options['fields']['field_entry_to_nhpid']['id'] = 'field_entry_to_nhpid';
  $handler->display->display_options['fields']['field_entry_to_nhpid']['table'] = 'field_data_field_entry_to_nhpid';
  $handler->display->display_options['fields']['field_entry_to_nhpid']['field'] = 'field_entry_to_nhpid';
  /* Field: Content: Environment */
  $handler->display->display_options['fields']['field_environment']['id'] = 'field_environment';
  $handler->display->display_options['fields']['field_environment']['table'] = 'field_data_field_environment';
  $handler->display->display_options['fields']['field_environment']['field'] = 'field_environment';
  /* Field: Content: Errata */
  $handler->display->display_options['fields']['field_errata']['id'] = 'field_errata';
  $handler->display->display_options['fields']['field_errata']['table'] = 'field_data_field_errata';
  $handler->display->display_options['fields']['field_errata']['field'] = 'field_errata';
  /* Field: Content: Estimated Cost */
  $handler->display->display_options['fields']['field_estimated_cost']['id'] = 'field_estimated_cost';
  $handler->display->display_options['fields']['field_estimated_cost']['table'] = 'field_data_field_estimated_cost';
  $handler->display->display_options['fields']['field_estimated_cost']['field'] = 'field_estimated_cost';
  /* Field: Content: Exempted Product */
  $handler->display->display_options['fields']['field_exempted_product']['id'] = 'field_exempted_product';
  $handler->display->display_options['fields']['field_exempted_product']['table'] = 'field_data_field_exempted_product';
  $handler->display->display_options['fields']['field_exempted_product']['field'] = 'field_exempted_product';
  /* Field: Content: Final Classification Decision */
  $handler->display->display_options['fields']['field_final_class_decision']['id'] = 'field_final_class_decision';
  $handler->display->display_options['fields']['field_final_class_decision']['table'] = 'field_data_field_final_class_decision';
  $handler->display->display_options['fields']['field_final_class_decision']['field'] = 'field_final_class_decision';
  /* Field: Content: Fixed In Build */
  $handler->display->display_options['fields']['field_fixed_in_build']['id'] = 'field_fixed_in_build';
  $handler->display->display_options['fields']['field_fixed_in_build']['table'] = 'field_data_field_fixed_in_build';
  $handler->display->display_options['fields']['field_fixed_in_build']['field'] = 'field_fixed_in_build';
  /* Field: Content: Foods sub-category */
  $handler->display->display_options['fields']['field_foods_sub_category']['id'] = 'field_foods_sub_category';
  $handler->display->display_options['fields']['field_foods_sub_category']['table'] = 'field_data_field_foods_sub_category';
  $handler->display->display_options['fields']['field_foods_sub_category']['field'] = 'field_foods_sub_category';
  /* Field: Content: Found In */
  $handler->display->display_options['fields']['field_found_in']['id'] = 'field_found_in';
  $handler->display->display_options['fields']['field_found_in']['table'] = 'field_data_field_found_in';
  $handler->display->display_options['fields']['field_found_in']['field'] = 'field_found_in';
  /* Field: Content: Found In Build */
  $handler->display->display_options['fields']['field_found_in_build']['id'] = 'field_found_in_build';
  $handler->display->display_options['fields']['field_found_in_build']['table'] = 'field_data_field_found_in_build';
  $handler->display->display_options['fields']['field_found_in_build']['field'] = 'field_found_in_build';
  /* Field: Content: Found In Version */
  $handler->display->display_options['fields']['field_found_in_version']['id'] = 'field_found_in_version';
  $handler->display->display_options['fields']['field_found_in_version']['table'] = 'field_data_field_found_in_version';
  $handler->display->display_options['fields']['field_found_in_version']['field'] = 'field_found_in_version';
  /* Field: Content: IAS Sub-Category */
  $handler->display->display_options['fields']['field_ias_sub_category']['id'] = 'field_ias_sub_category';
  $handler->display->display_options['fields']['field_ias_sub_category']['table'] = 'field_data_field_ias_sub_category';
  $handler->display->display_options['fields']['field_ias_sub_category']['field'] = 'field_ias_sub_category';
  /* Field: Content: If GMP Request */
  $handler->display->display_options['fields']['field_if_gmp_request']['id'] = 'field_if_gmp_request';
  $handler->display->display_options['fields']['field_if_gmp_request']['table'] = 'field_data_field_if_gmp_request';
  $handler->display->display_options['fields']['field_if_gmp_request']['field'] = 'field_if_gmp_request';
  /* Field: Content: If Product General Inquiry */
  $handler->display->display_options['fields']['field_if_product_general_inquery']['id'] = 'field_if_product_general_inquery';
  $handler->display->display_options['fields']['field_if_product_general_inquery']['table'] = 'field_data_field_if_product_general_inquery';
  $handler->display->display_options['fields']['field_if_product_general_inquery']['field'] = 'field_if_product_general_inquery';
  /* Field: Content: If Site General Inquiry */
  $handler->display->display_options['fields']['field_if_site_general_inquiry']['id'] = 'field_if_site_general_inquiry';
  $handler->display->display_options['fields']['field_if_site_general_inquiry']['table'] = 'field_data_field_if_site_general_inquiry';
  $handler->display->display_options['fields']['field_if_site_general_inquiry']['field'] = 'field_if_site_general_inquiry';
  /* Field: Content: Internal group */
  $handler->display->display_options['fields']['field_internal_group']['id'] = 'field_internal_group';
  $handler->display->display_options['fields']['field_internal_group']['table'] = 'field_data_field_internal_group';
  $handler->display->display_options['fields']['field_internal_group']['field'] = 'field_internal_group';
  /* Field: Content: Issue form tracking number */
  $handler->display->display_options['fields']['field_issue_form_tracking_number']['id'] = 'field_issue_form_tracking_number';
  $handler->display->display_options['fields']['field_issue_form_tracking_number']['table'] = 'field_data_field_issue_form_tracking_number';
  $handler->display->display_options['fields']['field_issue_form_tracking_number']['field'] = 'field_issue_form_tracking_number';
  /* Field: Content: Issue source */
  $handler->display->display_options['fields']['field_issue_source']['id'] = 'field_issue_source';
  $handler->display->display_options['fields']['field_issue_source']['table'] = 'field_data_field_issue_source';
  $handler->display->display_options['fields']['field_issue_source']['field'] = 'field_issue_source';
  /* Field: Content: Language */
  $handler->display->display_options['fields']['field_language']['id'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['table'] = 'field_data_field_language';
  $handler->display->display_options['fields']['field_language']['field'] = 'field_language';
  /* Field: Content: License Number */
  $handler->display->display_options['fields']['field_license_number']['id'] = 'field_license_number';
  $handler->display->display_options['fields']['field_license_number']['table'] = 'field_data_field_license_number';
  $handler->display->display_options['fields']['field_license_number']['field'] = 'field_license_number';
  /* Field: Content: Lotus Unique ID */
  $handler->display->display_options['fields']['field_lotus_unique_id']['id'] = 'field_lotus_unique_id';
  $handler->display->display_options['fields']['field_lotus_unique_id']['table'] = 'field_data_field_lotus_unique_id';
  $handler->display->display_options['fields']['field_lotus_unique_id']['field'] = 'field_lotus_unique_id';
  /* Field: Content: MECS Number */
  $handler->display->display_options['fields']['field_mecs_number']['id'] = 'field_mecs_number';
  $handler->display->display_options['fields']['field_mecs_number']['table'] = 'field_data_field_mecs_number';
  $handler->display->display_options['fields']['field_mecs_number']['field'] = 'field_mecs_number';
  /* Field: Content: No. of Affected Submissions */
  $handler->display->display_options['fields']['field_no_of_affected_submissions']['id'] = 'field_no_of_affected_submissions';
  $handler->display->display_options['fields']['field_no_of_affected_submissions']['table'] = 'field_data_field_no_of_affected_submissions';
  $handler->display->display_options['fields']['field_no_of_affected_submissions']['field'] = 'field_no_of_affected_submissions';
  $handler->display->display_options['fields']['field_no_of_affected_submissions']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: PCI Batch */
  $handler->display->display_options['fields']['field_pci_batch']['id'] = 'field_pci_batch';
  $handler->display->display_options['fields']['field_pci_batch']['table'] = 'field_data_field_pci_batch';
  $handler->display->display_options['fields']['field_pci_batch']['field'] = 'field_pci_batch';
  /* Field: Content: Political or Legal Requirement */
  $handler->display->display_options['fields']['field_political_or_legal_require']['id'] = 'field_political_or_legal_require';
  $handler->display->display_options['fields']['field_political_or_legal_require']['table'] = 'field_data_field_political_or_legal_require';
  $handler->display->display_options['fields']['field_political_or_legal_require']['field'] = 'field_political_or_legal_require';
  /* Field: Content: Priorities Alignment */
  $handler->display->display_options['fields']['field_priorities_alignment']['id'] = 'field_priorities_alignment';
  $handler->display->display_options['fields']['field_priorities_alignment']['table'] = 'field_data_field_priorities_alignment';
  $handler->display->display_options['fields']['field_priorities_alignment']['field'] = 'field_priorities_alignment';
  /* Field: Content: Priority Category */
  $handler->display->display_options['fields']['field_priority_category']['id'] = 'field_priority_category';
  $handler->display->display_options['fields']['field_priority_category']['table'] = 'field_data_field_priority_category';
  $handler->display->display_options['fields']['field_priority_category']['field'] = 'field_priority_category';
  /* Field: Content: Product */
  $handler->display->display_options['fields']['field_product']['id'] = 'field_product';
  $handler->display->display_options['fields']['field_product']['table'] = 'field_data_field_product';
  $handler->display->display_options['fields']['field_product']['field'] = 'field_product';
  /* Field: Content: Product Name */
  $handler->display->display_options['fields']['field_product_name']['id'] = 'field_product_name';
  $handler->display->display_options['fields']['field_product_name']['table'] = 'field_data_field_product_name';
  $handler->display->display_options['fields']['field_product_name']['field'] = 'field_product_name';
  /* Field: Content: Product Request Type */
  $handler->display->display_options['fields']['field_product_request_type']['id'] = 'field_product_request_type';
  $handler->display->display_options['fields']['field_product_request_type']['table'] = 'field_data_field_product_request_type';
  $handler->display->display_options['fields']['field_product_request_type']['field'] = 'field_product_request_type';
  /* Field: Content: Reporter Name */
  $handler->display->display_options['fields']['field_reporter_name']['id'] = 'field_reporter_name';
  $handler->display->display_options['fields']['field_reporter_name']['table'] = 'field_data_field_reporter_name';
  $handler->display->display_options['fields']['field_reporter_name']['field'] = 'field_reporter_name';
  /* Field: Content: Request Method */
  $handler->display->display_options['fields']['field_request_method']['id'] = 'field_request_method';
  $handler->display->display_options['fields']['field_request_method']['table'] = 'field_data_field_request_method';
  $handler->display->display_options['fields']['field_request_method']['field'] = 'field_request_method';
  /* Field: Content: Request Rationale */
  $handler->display->display_options['fields']['field_request_rationale']['id'] = 'field_request_rationale';
  $handler->display->display_options['fields']['field_request_rationale']['table'] = 'field_data_field_request_rationale';
  $handler->display->display_options['fields']['field_request_rationale']['field'] = 'field_request_rationale';
  /* Field: Content: Resolution details */
  $handler->display->display_options['fields']['field_resolution_details']['id'] = 'field_resolution_details';
  $handler->display->display_options['fields']['field_resolution_details']['table'] = 'field_data_field_resolution_details';
  $handler->display->display_options['fields']['field_resolution_details']['field'] = 'field_resolution_details';
  /* Field: Content: Response Method */
  $handler->display->display_options['fields']['field_response_method']['id'] = 'field_response_method';
  $handler->display->display_options['fields']['field_response_method']['table'] = 'field_data_field_response_method';
  $handler->display->display_options['fields']['field_response_method']['field'] = 'field_response_method';
  /* Field: Content: Risk Category */
  $handler->display->display_options['fields']['field_risk_category']['id'] = 'field_risk_category';
  $handler->display->display_options['fields']['field_risk_category']['table'] = 'field_data_field_risk_category';
  $handler->display->display_options['fields']['field_risk_category']['field'] = 'field_risk_category';
  /* Field: Content: Root */
  $handler->display->display_options['fields']['field_root']['id'] = 'field_root';
  $handler->display->display_options['fields']['field_root']['table'] = 'field_data_field_root';
  $handler->display->display_options['fields']['field_root']['field'] = 'field_root';
  /* Field: Content: RSS Required */
  $handler->display->display_options['fields']['field_rss_required']['id'] = 'field_rss_required';
  $handler->display->display_options['fields']['field_rss_required']['table'] = 'field_data_field_rss_required';
  $handler->display->display_options['fields']['field_rss_required']['field'] = 'field_rss_required';
  /* Field: Content: SAU Sub-Category */
  $handler->display->display_options['fields']['field_sau_sub_category']['id'] = 'field_sau_sub_category';
  $handler->display->display_options['fields']['field_sau_sub_category']['table'] = 'field_data_field_sau_sub_category';
  $handler->display->display_options['fields']['field_sau_sub_category']['field'] = 'field_sau_sub_category';
  /* Field: Content: Site Request Type */
  $handler->display->display_options['fields']['field_site_request_type']['id'] = 'field_site_request_type';
  $handler->display->display_options['fields']['field_site_request_type']['table'] = 'field_data_field_site_request_type';
  $handler->display->display_options['fields']['field_site_request_type']['field'] = 'field_site_request_type';
  /* Field: Content: Start date */
  $handler->display->display_options['fields']['field_start_date']['id'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['table'] = 'field_data_field_start_date';
  $handler->display->display_options['fields']['field_start_date']['field'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Stream */
  $handler->display->display_options['fields']['field_stream']['id'] = 'field_stream';
  $handler->display->display_options['fields']['field_stream']['table'] = 'field_data_field_stream';
  $handler->display->display_options['fields']['field_stream']['field'] = 'field_stream';
  /* Field: Content: Sub-category */
  $handler->display->display_options['fields']['field_sub_category']['id'] = 'field_sub_category';
  $handler->display->display_options['fields']['field_sub_category']['table'] = 'field_data_field_sub_category';
  $handler->display->display_options['fields']['field_sub_category']['field'] = 'field_sub_category';
  /* Field: Content: Subgroup */
  $handler->display->display_options['fields']['field_subgroup']['id'] = 'field_subgroup';
  $handler->display->display_options['fields']['field_subgroup']['table'] = 'field_data_field_subgroup';
  $handler->display->display_options['fields']['field_subgroup']['field'] = 'field_subgroup';
  /* Field: Content: Submission Number */
  $handler->display->display_options['fields']['field_submission_number']['id'] = 'field_submission_number';
  $handler->display->display_options['fields']['field_submission_number']['table'] = 'field_data_field_submission_number';
  $handler->display->display_options['fields']['field_submission_number']['field'] = 'field_submission_number';
  /* Field: Content: Substance type */
  $handler->display->display_options['fields']['field_substance_type']['id'] = 'field_substance_type';
  $handler->display->display_options['fields']['field_substance_type']['table'] = 'field_data_field_substance_type';
  $handler->display->display_options['fields']['field_substance_type']['field'] = 'field_substance_type';
  /* Field: Content: Target release */
  $handler->display->display_options['fields']['field_target_release']['id'] = 'field_target_release';
  $handler->display->display_options['fields']['field_target_release']['table'] = 'field_data_field_target_release';
  $handler->display->display_options['fields']['field_target_release']['field'] = 'field_target_release';
  /* Field: Content: Tester */
  $handler->display->display_options['fields']['field_tester']['id'] = 'field_tester';
  $handler->display->display_options['fields']['field_tester']['table'] = 'field_data_field_tester';
  $handler->display->display_options['fields']['field_tester']['field'] = 'field_tester';
  /* Field: Content: Total Rated Criteria */
  $handler->display->display_options['fields']['field_total_rated_criteria']['id'] = 'field_total_rated_criteria';
  $handler->display->display_options['fields']['field_total_rated_criteria']['table'] = 'field_data_field_total_rated_criteria';
  $handler->display->display_options['fields']['field_total_rated_criteria']['field'] = 'field_total_rated_criteria';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Section (oa_section_ref:target_id) */
  $handler->display->display_options['arguments']['oa_section_ref_target_id']['id'] = 'oa_section_ref_target_id';
  $handler->display->display_options['arguments']['oa_section_ref_target_id']['table'] = 'field_data_oa_section_ref';
  $handler->display->display_options['arguments']['oa_section_ref_target_id']['field'] = 'oa_section_ref_target_id';
  $handler->display->display_options['arguments']['oa_section_ref_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['oa_section_ref_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['oa_section_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['oa_section_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['oa_section_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'oa_worktracker_task' => 'oa_worktracker_task',
    'task_inherited' => 'task_inherited',
  );
  /* Filter criterion: Content: Ingredient Name (field_ingredient_name) */
  $handler->display->display_options['filters']['field_ingredient_name_value']['id'] = 'field_ingredient_name_value';
  $handler->display->display_options['filters']['field_ingredient_name_value']['table'] = 'field_data_field_ingredient_name';
  $handler->display->display_options['filters']['field_ingredient_name_value']['field'] = 'field_ingredient_name_value';
  $handler->display->display_options['filters']['field_ingredient_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_ingredient_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ingredient_name_value']['expose']['operator_id'] = 'field_ingredient_name_value_op';
  $handler->display->display_options['filters']['field_ingredient_name_value']['expose']['label'] = 'Ingredient Name';
  $handler->display->display_options['filters']['field_ingredient_name_value']['expose']['operator'] = 'field_ingredient_name_value_op';
  $handler->display->display_options['filters']['field_ingredient_name_value']['expose']['identifier'] = 'field_ingredient_name_value';
  $handler->display->display_options['filters']['field_ingredient_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  $handler->display->display_options['filters']['field_ingredient_name_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_ingredient_name_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_ingredient_name_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_ingredient_name_value']['expose']['autocomplete_field'] = 'field_ingredient_name';
  $handler->display->display_options['filters']['field_ingredient_name_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_ingredient_name_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_ingredient_name_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: NPN (field_npn) */
  $handler->display->display_options['filters']['field_npn_value']['id'] = 'field_npn_value';
  $handler->display->display_options['filters']['field_npn_value']['table'] = 'field_data_field_npn';
  $handler->display->display_options['filters']['field_npn_value']['field'] = 'field_npn_value';
  $handler->display->display_options['filters']['field_npn_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_npn_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_npn_value']['expose']['operator_id'] = 'field_npn_value_op';
  $handler->display->display_options['filters']['field_npn_value']['expose']['label'] = 'NPN';
  $handler->display->display_options['filters']['field_npn_value']['expose']['operator'] = 'field_npn_value_op';
  $handler->display->display_options['filters']['field_npn_value']['expose']['identifier'] = 'field_npn_value';
  $handler->display->display_options['filters']['field_npn_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  $handler->display->display_options['filters']['field_npn_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_npn_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_npn_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_npn_value']['expose']['autocomplete_field'] = 'field_npn';
  $handler->display->display_options['filters']['field_npn_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_npn_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_npn_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: ApplType (field_appltype) */
  $handler->display->display_options['filters']['field_appltype_value']['id'] = 'field_appltype_value';
  $handler->display->display_options['filters']['field_appltype_value']['table'] = 'field_data_field_appltype';
  $handler->display->display_options['filters']['field_appltype_value']['field'] = 'field_appltype_value';
  $handler->display->display_options['filters']['field_appltype_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_appltype_value']['expose']['operator_id'] = 'field_appltype_value_op';
  $handler->display->display_options['filters']['field_appltype_value']['expose']['label'] = 'ApplType';
  $handler->display->display_options['filters']['field_appltype_value']['expose']['operator'] = 'field_appltype_value_op';
  $handler->display->display_options['filters']['field_appltype_value']['expose']['identifier'] = 'field_appltype_value';
  $handler->display->display_options['filters']['field_appltype_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  /* Filter criterion: Content: ASR Number (field_asr_number) */
  $handler->display->display_options['filters']['field_asr_number_value']['id'] = 'field_asr_number_value';
  $handler->display->display_options['filters']['field_asr_number_value']['table'] = 'field_data_field_asr_number';
  $handler->display->display_options['filters']['field_asr_number_value']['field'] = 'field_asr_number_value';
  $handler->display->display_options['filters']['field_asr_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_asr_number_value']['expose']['operator_id'] = 'field_asr_number_value_op';
  $handler->display->display_options['filters']['field_asr_number_value']['expose']['label'] = 'ASR Number (field_asr_number)';
  $handler->display->display_options['filters']['field_asr_number_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_asr_number_value']['expose']['operator'] = 'field_asr_number_value_op';
  $handler->display->display_options['filters']['field_asr_number_value']['expose']['identifier'] = 'field_asr_number_value';
  $handler->display->display_options['filters']['field_asr_number_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  /* Filter criterion: Content: Assigned SME (field_assigned_sme) */
  $handler->display->display_options['filters']['field_assigned_sme_value']['id'] = 'field_assigned_sme_value';
  $handler->display->display_options['filters']['field_assigned_sme_value']['table'] = 'field_data_field_assigned_sme';
  $handler->display->display_options['filters']['field_assigned_sme_value']['field'] = 'field_assigned_sme_value';
  $handler->display->display_options['filters']['field_assigned_sme_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_assigned_sme_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_assigned_sme_value']['expose']['operator_id'] = 'field_assigned_sme_value_op';
  $handler->display->display_options['filters']['field_assigned_sme_value']['expose']['label'] = 'Assigned SME';
  $handler->display->display_options['filters']['field_assigned_sme_value']['expose']['operator'] = 'field_assigned_sme_value_op';
  $handler->display->display_options['filters']['field_assigned_sme_value']['expose']['identifier'] = 'field_assigned_sme_value';
  $handler->display->display_options['filters']['field_assigned_sme_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  $handler->display->display_options['filters']['field_assigned_sme_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_assigned_sme_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_assigned_sme_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_assigned_sme_value']['expose']['autocomplete_field'] = 'field_assigned_sme';
  $handler->display->display_options['filters']['field_assigned_sme_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_assigned_sme_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_assigned_sme_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Client email or other contact (field_client_email_or_other_cont) */
  $handler->display->display_options['filters']['field_client_email_or_other_cont_value']['id'] = 'field_client_email_or_other_cont_value';
  $handler->display->display_options['filters']['field_client_email_or_other_cont_value']['table'] = 'field_data_field_client_email_or_other_cont';
  $handler->display->display_options['filters']['field_client_email_or_other_cont_value']['field'] = 'field_client_email_or_other_cont_value';
  $handler->display->display_options['filters']['field_client_email_or_other_cont_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_client_email_or_other_cont_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_client_email_or_other_cont_value']['expose']['operator_id'] = 'field_client_email_or_other_cont_value_op';
  $handler->display->display_options['filters']['field_client_email_or_other_cont_value']['expose']['label'] = 'Client email or other contact';
  $handler->display->display_options['filters']['field_client_email_or_other_cont_value']['expose']['operator'] = 'field_client_email_or_other_cont_value_op';
  $handler->display->display_options['filters']['field_client_email_or_other_cont_value']['expose']['identifier'] = 'field_client_email_or_other_cont_value';
  $handler->display->display_options['filters']['field_client_email_or_other_cont_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  $handler->display->display_options['filters']['field_client_email_or_other_cont_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_client_email_or_other_cont_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_client_email_or_other_cont_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_client_email_or_other_cont_value']['expose']['autocomplete_field'] = 'field_client_email_or_other_cont';
  $handler->display->display_options['filters']['field_client_email_or_other_cont_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_client_email_or_other_cont_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_client_email_or_other_cont_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Client name (field_client_name) */
  $handler->display->display_options['filters']['field_client_name_value']['id'] = 'field_client_name_value';
  $handler->display->display_options['filters']['field_client_name_value']['table'] = 'field_data_field_client_name';
  $handler->display->display_options['filters']['field_client_name_value']['field'] = 'field_client_name_value';
  $handler->display->display_options['filters']['field_client_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_client_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_client_name_value']['expose']['operator_id'] = 'field_client_name_value_op';
  $handler->display->display_options['filters']['field_client_name_value']['expose']['label'] = 'Client name';
  $handler->display->display_options['filters']['field_client_name_value']['expose']['operator'] = 'field_client_name_value_op';
  $handler->display->display_options['filters']['field_client_name_value']['expose']['identifier'] = 'field_client_name_value';
  $handler->display->display_options['filters']['field_client_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  $handler->display->display_options['filters']['field_client_name_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_client_name_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_client_name_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_client_name_value']['expose']['autocomplete_field'] = 'field_client_name';
  $handler->display->display_options['filters']['field_client_name_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_client_name_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_client_name_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Client phone (field_client_phone) */
  $handler->display->display_options['filters']['field_client_phone_value']['id'] = 'field_client_phone_value';
  $handler->display->display_options['filters']['field_client_phone_value']['table'] = 'field_data_field_client_phone';
  $handler->display->display_options['filters']['field_client_phone_value']['field'] = 'field_client_phone_value';
  $handler->display->display_options['filters']['field_client_phone_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_client_phone_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_client_phone_value']['expose']['operator_id'] = 'field_client_phone_value_op';
  $handler->display->display_options['filters']['field_client_phone_value']['expose']['label'] = 'Client phone';
  $handler->display->display_options['filters']['field_client_phone_value']['expose']['operator'] = 'field_client_phone_value_op';
  $handler->display->display_options['filters']['field_client_phone_value']['expose']['identifier'] = 'field_client_phone_value';
  $handler->display->display_options['filters']['field_client_phone_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  $handler->display->display_options['filters']['field_client_phone_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_client_phone_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_client_phone_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_client_phone_value']['expose']['autocomplete_field'] = 'field_client_phone';
  $handler->display->display_options['filters']['field_client_phone_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_client_phone_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_client_phone_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Company Code (field_company_code) */
  $handler->display->display_options['filters']['field_company_code_value']['id'] = 'field_company_code_value';
  $handler->display->display_options['filters']['field_company_code_value']['table'] = 'field_data_field_company_code';
  $handler->display->display_options['filters']['field_company_code_value']['field'] = 'field_company_code_value';
  $handler->display->display_options['filters']['field_company_code_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_company_code_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_company_code_value']['expose']['operator_id'] = 'field_company_code_value_op';
  $handler->display->display_options['filters']['field_company_code_value']['expose']['label'] = 'Company Code';
  $handler->display->display_options['filters']['field_company_code_value']['expose']['operator'] = 'field_company_code_value_op';
  $handler->display->display_options['filters']['field_company_code_value']['expose']['identifier'] = 'field_company_code_value';
  $handler->display->display_options['filters']['field_company_code_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  $handler->display->display_options['filters']['field_company_code_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_company_code_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_company_code_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_company_code_value']['expose']['autocomplete_field'] = 'field_company_code';
  $handler->display->display_options['filters']['field_company_code_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_company_code_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_company_code_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Company Name (field_company_name) */
  $handler->display->display_options['filters']['field_company_name_value']['id'] = 'field_company_name_value';
  $handler->display->display_options['filters']['field_company_name_value']['table'] = 'field_data_field_company_name';
  $handler->display->display_options['filters']['field_company_name_value']['field'] = 'field_company_name_value';
  $handler->display->display_options['filters']['field_company_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_company_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_company_name_value']['expose']['operator_id'] = 'field_company_name_value_op';
  $handler->display->display_options['filters']['field_company_name_value']['expose']['label'] = 'Company Name';
  $handler->display->display_options['filters']['field_company_name_value']['expose']['operator'] = 'field_company_name_value_op';
  $handler->display->display_options['filters']['field_company_name_value']['expose']['identifier'] = 'field_company_name_value';
  $handler->display->display_options['filters']['field_company_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  $handler->display->display_options['filters']['field_company_name_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_company_name_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_company_name_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_company_name_value']['expose']['autocomplete_field'] = 'field_company_name';
  $handler->display->display_options['filters']['field_company_name_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_company_name_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_company_name_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Content Owner (field_content_owner) */
  $handler->display->display_options['filters']['field_content_owner_value']['id'] = 'field_content_owner_value';
  $handler->display->display_options['filters']['field_content_owner_value']['table'] = 'field_data_field_content_owner';
  $handler->display->display_options['filters']['field_content_owner_value']['field'] = 'field_content_owner_value';
  $handler->display->display_options['filters']['field_content_owner_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_content_owner_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_content_owner_value']['expose']['operator_id'] = 'field_content_owner_value_op';
  $handler->display->display_options['filters']['field_content_owner_value']['expose']['label'] = 'Content Owner';
  $handler->display->display_options['filters']['field_content_owner_value']['expose']['operator'] = 'field_content_owner_value_op';
  $handler->display->display_options['filters']['field_content_owner_value']['expose']['identifier'] = 'field_content_owner_value';
  $handler->display->display_options['filters']['field_content_owner_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  $handler->display->display_options['filters']['field_content_owner_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_content_owner_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_content_owner_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_content_owner_value']['expose']['autocomplete_field'] = 'field_content_owner';
  $handler->display->display_options['filters']['field_content_owner_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_content_owner_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_content_owner_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Current version (field_current_version) */
  $handler->display->display_options['filters']['field_current_version_value']['id'] = 'field_current_version_value';
  $handler->display->display_options['filters']['field_current_version_value']['table'] = 'field_data_field_current_version';
  $handler->display->display_options['filters']['field_current_version_value']['field'] = 'field_current_version_value';
  $handler->display->display_options['filters']['field_current_version_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_current_version_value']['expose']['operator_id'] = 'field_current_version_value_op';
  $handler->display->display_options['filters']['field_current_version_value']['expose']['label'] = 'Current version';
  $handler->display->display_options['filters']['field_current_version_value']['expose']['operator'] = 'field_current_version_value_op';
  $handler->display->display_options['filters']['field_current_version_value']['expose']['identifier'] = 'field_current_version_value';
  $handler->display->display_options['filters']['field_current_version_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  /* Filter criterion: Content: Date received (field_date_received) */
  $handler->display->display_options['filters']['field_date_received_value']['id'] = 'field_date_received_value';
  $handler->display->display_options['filters']['field_date_received_value']['table'] = 'field_data_field_date_received';
  $handler->display->display_options['filters']['field_date_received_value']['field'] = 'field_date_received_value';
  $handler->display->display_options['filters']['field_date_received_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_date_received_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_received_value']['expose']['operator_id'] = 'field_date_received_value_op';
  $handler->display->display_options['filters']['field_date_received_value']['expose']['label'] = 'Date received ';
  $handler->display->display_options['filters']['field_date_received_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_date_received_value']['expose']['operator'] = 'field_date_received_value_op';
  $handler->display->display_options['filters']['field_date_received_value']['expose']['identifier'] = 'field_date_received_value';
  $handler->display->display_options['filters']['field_date_received_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  $handler->display->display_options['filters']['field_date_received_value']['form_type'] = 'date_popup';
  /* Filter criterion: Content: Defect Number (field_defect_number) */
  $handler->display->display_options['filters']['field_defect_number_value']['id'] = 'field_defect_number_value';
  $handler->display->display_options['filters']['field_defect_number_value']['table'] = 'field_data_field_defect_number';
  $handler->display->display_options['filters']['field_defect_number_value']['field'] = 'field_defect_number_value';
  $handler->display->display_options['filters']['field_defect_number_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_defect_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_defect_number_value']['expose']['operator_id'] = 'field_defect_number_value_op';
  $handler->display->display_options['filters']['field_defect_number_value']['expose']['label'] = 'Defect Number';
  $handler->display->display_options['filters']['field_defect_number_value']['expose']['operator'] = 'field_defect_number_value_op';
  $handler->display->display_options['filters']['field_defect_number_value']['expose']['identifier'] = 'field_defect_number_value';
  $handler->display->display_options['filters']['field_defect_number_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  $handler->display->display_options['filters']['field_defect_number_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_defect_number_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_defect_number_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_defect_number_value']['expose']['autocomplete_field'] = 'field_defect_number';
  $handler->display->display_options['filters']['field_defect_number_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_defect_number_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_defect_number_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Directorate (field_directorate) */
  $handler->display->display_options['filters']['field_directorate_value']['id'] = 'field_directorate_value';
  $handler->display->display_options['filters']['field_directorate_value']['table'] = 'field_data_field_directorate';
  $handler->display->display_options['filters']['field_directorate_value']['field'] = 'field_directorate_value';
  $handler->display->display_options['filters']['field_directorate_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_directorate_value']['expose']['operator_id'] = 'field_directorate_value_op';
  $handler->display->display_options['filters']['field_directorate_value']['expose']['label'] = 'Directorate';
  $handler->display->display_options['filters']['field_directorate_value']['expose']['operator'] = 'field_directorate_value_op';
  $handler->display->display_options['filters']['field_directorate_value']['expose']['identifier'] = 'field_directorate_value';
  $handler->display->display_options['filters']['field_directorate_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  /* Filter criterion: Content: Directorate Bureau (field_directorate_bureau) */
  $handler->display->display_options['filters']['field_directorate_bureau_value']['id'] = 'field_directorate_bureau_value';
  $handler->display->display_options['filters']['field_directorate_bureau_value']['table'] = 'field_data_field_directorate_bureau';
  $handler->display->display_options['filters']['field_directorate_bureau_value']['field'] = 'field_directorate_bureau_value';
  $handler->display->display_options['filters']['field_directorate_bureau_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_directorate_bureau_value']['expose']['operator_id'] = 'field_directorate_bureau_value_op';
  $handler->display->display_options['filters']['field_directorate_bureau_value']['expose']['label'] = 'Directorate Bureau';
  $handler->display->display_options['filters']['field_directorate_bureau_value']['expose']['operator'] = 'field_directorate_bureau_value_op';
  $handler->display->display_options['filters']['field_directorate_bureau_value']['expose']['identifier'] = 'field_directorate_bureau_value';
  $handler->display->display_options['filters']['field_directorate_bureau_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  /* Filter criterion: Content: Directorate or Division (field_directorate_or_division) */
  $handler->display->display_options['filters']['field_directorate_or_division_value']['id'] = 'field_directorate_or_division_value';
  $handler->display->display_options['filters']['field_directorate_or_division_value']['table'] = 'field_data_field_directorate_or_division';
  $handler->display->display_options['filters']['field_directorate_or_division_value']['field'] = 'field_directorate_or_division_value';
  $handler->display->display_options['filters']['field_directorate_or_division_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_directorate_or_division_value']['expose']['operator_id'] = 'field_directorate_or_division_value_op';
  $handler->display->display_options['filters']['field_directorate_or_division_value']['expose']['label'] = 'Directorate or Division';
  $handler->display->display_options['filters']['field_directorate_or_division_value']['expose']['operator'] = 'field_directorate_or_division_value_op';
  $handler->display->display_options['filters']['field_directorate_or_division_value']['expose']['identifier'] = 'field_directorate_or_division_value';
  $handler->display->display_options['filters']['field_directorate_or_division_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  /* Filter criterion: Content: End Date (field_end_date) */
  $handler->display->display_options['filters']['field_end_date_value']['id'] = 'field_end_date_value';
  $handler->display->display_options['filters']['field_end_date_value']['table'] = 'field_data_field_end_date';
  $handler->display->display_options['filters']['field_end_date_value']['field'] = 'field_end_date_value';
  $handler->display->display_options['filters']['field_end_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_end_date_value']['expose']['operator_id'] = 'field_end_date_value_op';
  $handler->display->display_options['filters']['field_end_date_value']['expose']['label'] = 'End Date (field_end_date)';
  $handler->display->display_options['filters']['field_end_date_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_end_date_value']['expose']['operator'] = 'field_end_date_value_op';
  $handler->display->display_options['filters']['field_end_date_value']['expose']['identifier'] = 'field_end_date_value';
  $handler->display->display_options['filters']['field_end_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  $handler->display->display_options['filters']['field_end_date_value']['form_type'] = 'date_popup';
  /* Filter criterion: Content: Foods sub-category (field_foods_sub_category) */
  $handler->display->display_options['filters']['field_foods_sub_category_value']['id'] = 'field_foods_sub_category_value';
  $handler->display->display_options['filters']['field_foods_sub_category_value']['table'] = 'field_data_field_foods_sub_category';
  $handler->display->display_options['filters']['field_foods_sub_category_value']['field'] = 'field_foods_sub_category_value';
  $handler->display->display_options['filters']['field_foods_sub_category_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_foods_sub_category_value']['expose']['operator_id'] = 'field_foods_sub_category_value_op';
  $handler->display->display_options['filters']['field_foods_sub_category_value']['expose']['label'] = 'Foods sub-category';
  $handler->display->display_options['filters']['field_foods_sub_category_value']['expose']['operator'] = 'field_foods_sub_category_value_op';
  $handler->display->display_options['filters']['field_foods_sub_category_value']['expose']['identifier'] = 'field_foods_sub_category_value';
  $handler->display->display_options['filters']['field_foods_sub_category_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  /* Filter criterion: Content: IAS Sub-Category (field_ias_sub_category) */
  $handler->display->display_options['filters']['field_ias_sub_category_value']['id'] = 'field_ias_sub_category_value';
  $handler->display->display_options['filters']['field_ias_sub_category_value']['table'] = 'field_data_field_ias_sub_category';
  $handler->display->display_options['filters']['field_ias_sub_category_value']['field'] = 'field_ias_sub_category_value';
  $handler->display->display_options['filters']['field_ias_sub_category_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ias_sub_category_value']['expose']['operator_id'] = 'field_ias_sub_category_value_op';
  $handler->display->display_options['filters']['field_ias_sub_category_value']['expose']['label'] = 'IAS Sub-Category';
  $handler->display->display_options['filters']['field_ias_sub_category_value']['expose']['operator'] = 'field_ias_sub_category_value_op';
  $handler->display->display_options['filters']['field_ias_sub_category_value']['expose']['identifier'] = 'field_ias_sub_category_value';
  $handler->display->display_options['filters']['field_ias_sub_category_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  /* Filter criterion: Content: Language (field_language) */
  $handler->display->display_options['filters']['field_language_value']['id'] = 'field_language_value';
  $handler->display->display_options['filters']['field_language_value']['table'] = 'field_data_field_language';
  $handler->display->display_options['filters']['field_language_value']['field'] = 'field_language_value';
  $handler->display->display_options['filters']['field_language_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_language_value']['expose']['operator_id'] = 'field_language_value_op';
  $handler->display->display_options['filters']['field_language_value']['expose']['label'] = 'Language';
  $handler->display->display_options['filters']['field_language_value']['expose']['operator'] = 'field_language_value_op';
  $handler->display->display_options['filters']['field_language_value']['expose']['identifier'] = 'field_language_value';
  $handler->display->display_options['filters']['field_language_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  /* Filter criterion: Content: MECS Number (field_mecs_number) */
  $handler->display->display_options['filters']['field_mecs_number_value']['id'] = 'field_mecs_number_value';
  $handler->display->display_options['filters']['field_mecs_number_value']['table'] = 'field_data_field_mecs_number';
  $handler->display->display_options['filters']['field_mecs_number_value']['field'] = 'field_mecs_number_value';
  $handler->display->display_options['filters']['field_mecs_number_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_mecs_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_mecs_number_value']['expose']['operator_id'] = 'field_mecs_number_value_op';
  $handler->display->display_options['filters']['field_mecs_number_value']['expose']['label'] = 'MECS Number';
  $handler->display->display_options['filters']['field_mecs_number_value']['expose']['operator'] = 'field_mecs_number_value_op';
  $handler->display->display_options['filters']['field_mecs_number_value']['expose']['identifier'] = 'field_mecs_number_value';
  $handler->display->display_options['filters']['field_mecs_number_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  $handler->display->display_options['filters']['field_mecs_number_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_mecs_number_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_mecs_number_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_mecs_number_value']['expose']['autocomplete_field'] = 'field_mecs_number';
  $handler->display->display_options['filters']['field_mecs_number_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_mecs_number_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_mecs_number_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Product (field_product) */
  $handler->display->display_options['filters']['field_product_value']['id'] = 'field_product_value';
  $handler->display->display_options['filters']['field_product_value']['table'] = 'field_data_field_product';
  $handler->display->display_options['filters']['field_product_value']['field'] = 'field_product_value';
  $handler->display->display_options['filters']['field_product_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_product_value']['expose']['operator_id'] = 'field_product_value_op';
  $handler->display->display_options['filters']['field_product_value']['expose']['label'] = 'Product';
  $handler->display->display_options['filters']['field_product_value']['expose']['operator'] = 'field_product_value_op';
  $handler->display->display_options['filters']['field_product_value']['expose']['identifier'] = 'field_product_value';
  $handler->display->display_options['filters']['field_product_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  /* Filter criterion: Content: Product Name (field_product_name) */
  $handler->display->display_options['filters']['field_product_name_value']['id'] = 'field_product_name_value';
  $handler->display->display_options['filters']['field_product_name_value']['table'] = 'field_data_field_product_name';
  $handler->display->display_options['filters']['field_product_name_value']['field'] = 'field_product_name_value';
  $handler->display->display_options['filters']['field_product_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_product_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_product_name_value']['expose']['operator_id'] = 'field_product_name_value_op';
  $handler->display->display_options['filters']['field_product_name_value']['expose']['label'] = 'Product Name';
  $handler->display->display_options['filters']['field_product_name_value']['expose']['operator'] = 'field_product_name_value_op';
  $handler->display->display_options['filters']['field_product_name_value']['expose']['identifier'] = 'field_product_name_value';
  $handler->display->display_options['filters']['field_product_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  $handler->display->display_options['filters']['field_product_name_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_product_name_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_product_name_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_product_name_value']['expose']['autocomplete_field'] = 'field_product_name';
  $handler->display->display_options['filters']['field_product_name_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_product_name_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_product_name_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Risk Category (field_risk_category) */
  $handler->display->display_options['filters']['field_risk_category_value']['id'] = 'field_risk_category_value';
  $handler->display->display_options['filters']['field_risk_category_value']['table'] = 'field_data_field_risk_category';
  $handler->display->display_options['filters']['field_risk_category_value']['field'] = 'field_risk_category_value';
  $handler->display->display_options['filters']['field_risk_category_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_risk_category_value']['expose']['operator_id'] = 'field_risk_category_value_op';
  $handler->display->display_options['filters']['field_risk_category_value']['expose']['label'] = 'Risk Category';
  $handler->display->display_options['filters']['field_risk_category_value']['expose']['operator'] = 'field_risk_category_value_op';
  $handler->display->display_options['filters']['field_risk_category_value']['expose']['identifier'] = 'field_risk_category_value';
  $handler->display->display_options['filters']['field_risk_category_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  /* Filter criterion: Content: SAU Sub-Category (field_sau_sub_category) */
  $handler->display->display_options['filters']['field_sau_sub_category_value']['id'] = 'field_sau_sub_category_value';
  $handler->display->display_options['filters']['field_sau_sub_category_value']['table'] = 'field_data_field_sau_sub_category';
  $handler->display->display_options['filters']['field_sau_sub_category_value']['field'] = 'field_sau_sub_category_value';
  $handler->display->display_options['filters']['field_sau_sub_category_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sau_sub_category_value']['expose']['operator_id'] = 'field_sau_sub_category_value_op';
  $handler->display->display_options['filters']['field_sau_sub_category_value']['expose']['label'] = 'SAU Sub-Category';
  $handler->display->display_options['filters']['field_sau_sub_category_value']['expose']['operator'] = 'field_sau_sub_category_value_op';
  $handler->display->display_options['filters']['field_sau_sub_category_value']['expose']['identifier'] = 'field_sau_sub_category_value';
  $handler->display->display_options['filters']['field_sau_sub_category_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  /* Filter criterion: Content: Sub-category (field_sub_category) */
  $handler->display->display_options['filters']['field_sub_category_value']['id'] = 'field_sub_category_value';
  $handler->display->display_options['filters']['field_sub_category_value']['table'] = 'field_data_field_sub_category';
  $handler->display->display_options['filters']['field_sub_category_value']['field'] = 'field_sub_category_value';
  $handler->display->display_options['filters']['field_sub_category_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sub_category_value']['expose']['operator_id'] = 'field_sub_category_value_op';
  $handler->display->display_options['filters']['field_sub_category_value']['expose']['label'] = 'Sub-category';
  $handler->display->display_options['filters']['field_sub_category_value']['expose']['operator'] = 'field_sub_category_value_op';
  $handler->display->display_options['filters']['field_sub_category_value']['expose']['identifier'] = 'field_sub_category_value';
  $handler->display->display_options['filters']['field_sub_category_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  /* Filter criterion: Content: Subgroup (field_subgroup) */
  $handler->display->display_options['filters']['field_subgroup_value']['id'] = 'field_subgroup_value';
  $handler->display->display_options['filters']['field_subgroup_value']['table'] = 'field_data_field_subgroup';
  $handler->display->display_options['filters']['field_subgroup_value']['field'] = 'field_subgroup_value';
  $handler->display->display_options['filters']['field_subgroup_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_subgroup_value']['expose']['operator_id'] = 'field_subgroup_value_op';
  $handler->display->display_options['filters']['field_subgroup_value']['expose']['label'] = 'Subgroup';
  $handler->display->display_options['filters']['field_subgroup_value']['expose']['operator'] = 'field_subgroup_value_op';
  $handler->display->display_options['filters']['field_subgroup_value']['expose']['identifier'] = 'field_subgroup_value';
  $handler->display->display_options['filters']['field_subgroup_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  /* Filter criterion: Content: Submission Number (field_submission_number) */
  $handler->display->display_options['filters']['field_submission_number_value']['id'] = 'field_submission_number_value';
  $handler->display->display_options['filters']['field_submission_number_value']['table'] = 'field_data_field_submission_number';
  $handler->display->display_options['filters']['field_submission_number_value']['field'] = 'field_submission_number_value';
  $handler->display->display_options['filters']['field_submission_number_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_submission_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_submission_number_value']['expose']['operator_id'] = 'field_submission_number_value_op';
  $handler->display->display_options['filters']['field_submission_number_value']['expose']['label'] = 'Submission Number';
  $handler->display->display_options['filters']['field_submission_number_value']['expose']['operator'] = 'field_submission_number_value_op';
  $handler->display->display_options['filters']['field_submission_number_value']['expose']['identifier'] = 'field_submission_number_value';
  $handler->display->display_options['filters']['field_submission_number_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  $handler->display->display_options['filters']['field_submission_number_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_submission_number_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_submission_number_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_submission_number_value']['expose']['autocomplete_field'] = 'field_submission_number';
  $handler->display->display_options['filters']['field_submission_number_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_submission_number_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_submission_number_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: License Number (field_license_number) */
  $handler->display->display_options['filters']['field_license_number_value']['id'] = 'field_license_number_value';
  $handler->display->display_options['filters']['field_license_number_value']['table'] = 'field_data_field_license_number';
  $handler->display->display_options['filters']['field_license_number_value']['field'] = 'field_license_number_value';
  $handler->display->display_options['filters']['field_license_number_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_license_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_license_number_value']['expose']['operator_id'] = 'field_license_number_value_op';
  $handler->display->display_options['filters']['field_license_number_value']['expose']['label'] = 'License Number';
  $handler->display->display_options['filters']['field_license_number_value']['expose']['operator'] = 'field_license_number_value_op';
  $handler->display->display_options['filters']['field_license_number_value']['expose']['identifier'] = 'field_license_number_value';
  $handler->display->display_options['filters']['field_license_number_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  $handler->display->display_options['filters']['field_license_number_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_license_number_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_license_number_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_license_number_value']['expose']['autocomplete_field'] = 'field_license_number';
  $handler->display->display_options['filters']['field_license_number_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_license_number_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_license_number_value']['expose']['autocomplete_dependent'] = 0;
  $handler->display->display_options['path'] = 'view_field_for_section';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_xls');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'XLS Export';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xlsx';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'task list.xlsx';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Assigned to */
  $handler->display->display_options['fields']['field_oa_worktracker_assigned_to']['id'] = 'field_oa_worktracker_assigned_to';
  $handler->display->display_options['fields']['field_oa_worktracker_assigned_to']['table'] = 'field_data_field_oa_worktracker_assigned_to';
  $handler->display->display_options['fields']['field_oa_worktracker_assigned_to']['field'] = 'field_oa_worktracker_assigned_to';
  $handler->display->display_options['fields']['field_oa_worktracker_assigned_to']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_oa_worktracker_assigned_to']['click_sort_column'] = 'target_id';
  $handler->display->display_options['fields']['field_oa_worktracker_assigned_to']['settings'] = array(
    'link' => 0,
  );
  /* Field: User: Display Name */
  $handler->display->display_options['fields']['field_user_display_name']['id'] = 'field_user_display_name';
  $handler->display->display_options['fields']['field_user_display_name']['table'] = 'field_data_field_user_display_name';
  $handler->display->display_options['fields']['field_user_display_name']['field'] = 'field_user_display_name';
  $handler->display->display_options['fields']['field_user_display_name']['relationship'] = 'field_oa_worktracker_assigned_to_target_id';
  $handler->display->display_options['fields']['field_user_display_name']['label'] = 'Assigned to';
  /* Field: Content: Due date */
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['id'] = 'field_oa_worktracker_duedate';
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['table'] = 'field_data_field_oa_worktracker_duedate';
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['field'] = 'field_oa_worktracker_duedate';
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['settings'] = array(
    'format_type' => 'panopoly_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Priority */
  $handler->display->display_options['fields']['field_oa_worktracker_priority']['id'] = 'field_oa_worktracker_priority';
  $handler->display->display_options['fields']['field_oa_worktracker_priority']['table'] = 'field_data_field_oa_worktracker_priority';
  $handler->display->display_options['fields']['field_oa_worktracker_priority']['field'] = 'field_oa_worktracker_priority';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_oa_worktracker_task_status']['id'] = 'field_oa_worktracker_task_status';
  $handler->display->display_options['fields']['field_oa_worktracker_task_status']['table'] = 'field_data_field_oa_worktracker_task_status';
  $handler->display->display_options['fields']['field_oa_worktracker_task_status']['field'] = 'field_oa_worktracker_task_status';
  /* Field: Content: Closed? */
  $handler->display->display_options['fields']['field_is_closed']['id'] = 'field_is_closed';
  $handler->display->display_options['fields']['field_is_closed']['table'] = 'field_data_field_is_closed';
  $handler->display->display_options['fields']['field_is_closed']['field'] = 'field_is_closed';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_oa_worktracker_task_type']['id'] = 'field_oa_worktracker_task_type';
  $handler->display->display_options['fields']['field_oa_worktracker_task_type']['table'] = 'field_data_field_oa_worktracker_task_type';
  $handler->display->display_options['fields']['field_oa_worktracker_task_type']['field'] = 'field_oa_worktracker_task_type';
  /* Field: Content: Groups audience */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = 'Space';
  $handler->display->display_options['fields']['og_group_ref']['click_sort_column'] = 'target_id';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref']['group_column'] = 'target_id';
  /* Field: Content: Section */
  $handler->display->display_options['fields']['oa_section_ref']['id'] = 'oa_section_ref';
  $handler->display->display_options['fields']['oa_section_ref']['table'] = 'field_data_oa_section_ref';
  $handler->display->display_options['fields']['oa_section_ref']['field'] = 'oa_section_ref';
  $handler->display->display_options['fields']['oa_section_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['oa_section_ref']['click_sort_column'] = 'target_id';
  $handler->display->display_options['fields']['oa_section_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'oa_worktracker_task' => 'oa_worktracker_task',
    'task_inherited' => 'task_inherited',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Groups audience (og_group_ref:target_id) */
  $handler->display->display_options['filters']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['group'] = 1;
  $handler->display->display_options['filters']['og_group_ref_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator_id'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['label'] = 'Space';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['identifier'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Section (oa_section_ref:target_id) */
  $handler->display->display_options['filters']['oa_section_ref_target_id']['id'] = 'oa_section_ref_target_id';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['table'] = 'field_data_oa_section_ref';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['field'] = 'oa_section_ref_target_id';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['group'] = 1;
  $handler->display->display_options['filters']['oa_section_ref_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['oa_section_ref_target_id']['expose']['operator_id'] = 'oa_section_ref_target_id_op';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['expose']['label'] = 'Section';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['expose']['operator'] = 'oa_section_ref_target_id_op';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['expose']['identifier'] = 'oa_section_ref_target_id';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: User: Display Name (field_user_display_name) */
  $handler->display->display_options['filters']['field_user_display_name_value']['id'] = 'field_user_display_name_value';
  $handler->display->display_options['filters']['field_user_display_name_value']['table'] = 'field_data_field_user_display_name';
  $handler->display->display_options['filters']['field_user_display_name_value']['field'] = 'field_user_display_name_value';
  $handler->display->display_options['filters']['field_user_display_name_value']['relationship'] = 'field_oa_worktracker_assigned_to_target_id';
  $handler->display->display_options['filters']['field_user_display_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_user_display_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['operator_id'] = 'field_user_display_name_value_op';
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['label'] = 'Display Name (field_user_display_name)';
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['operator'] = 'field_user_display_name_value_op';
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['identifier'] = 'field_user_display_name_value';
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['autocomplete_field'] = 'field_user_display_name';
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['group'] = 1;
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Due date';
  $handler->display->display_options['filters']['date_filter']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_oa_worktracker_duedate.field_oa_worktracker_duedate_value' => 'field_data_field_oa_worktracker_duedate.field_oa_worktracker_duedate_value',
  );
  /* Filter criterion: Content: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['group'] = 1;
  $handler->display->display_options['filters']['created']['exposed'] = TRUE;
  $handler->display->display_options['filters']['created']['expose']['operator_id'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['label'] = 'Post date';
  $handler->display->display_options['filters']['created']['expose']['operator'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['identifier'] = 'created';
  $handler->display->display_options['filters']['created']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
  );
  /* Filter criterion: Content: Status (field_oa_worktracker_task_status) */
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['id'] = 'field_oa_worktracker_task_status_value';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['table'] = 'field_data_field_oa_worktracker_task_status';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['field'] = 'field_oa_worktracker_task_status_value';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['group'] = 2;
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['expose']['operator_id'] = 'field_oa_worktracker_task_status_value_op';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['expose']['operator'] = 'field_oa_worktracker_task_status_value_op';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['expose']['identifier'] = 'field_oa_worktracker_task_status_value';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
  );
  /* Filter criterion: Content: Closed? (field_is_closed) */
  $handler->display->display_options['filters']['field_is_closed_value']['id'] = 'field_is_closed_value';
  $handler->display->display_options['filters']['field_is_closed_value']['table'] = 'field_data_field_is_closed';
  $handler->display->display_options['filters']['field_is_closed_value']['field'] = 'field_is_closed_value';
  $handler->display->display_options['filters']['field_is_closed_value']['group'] = 2;
  $handler->display->display_options['filters']['field_is_closed_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['operator_id'] = 'field_is_closed_value_op';
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['label'] = 'Is closed';
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['operator'] = 'field_is_closed_value_op';
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['identifier'] = 'field_is_closed_value';
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
  );
  $handler->display->display_options['path'] = 'data_export_xls';
  $handler->display->display_options['displays'] = array(
    'task_list_for_space' => 'task_list_for_space',
    'view_field_for_space' => 'view_field_for_space',
    'page_task_list_for_section_fixed_filters' => 'page_task_list_for_section_fixed_filters',
    'default' => 0,
    'panel_pane_2' => 0,
    'panel_pane_4' => 0,
    'panel_pane_5' => 0,
    'task_report' => 0,
    'view_field_for_section' => 0,
    'panel_pane_chart_status' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Chart status for space */
  $handler = $view->new_display('panel_pane', 'Chart status for space', 'panel_pane_chart_status');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Chart Status';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'field_oa_worktracker_task_status';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'nid' => 'nid',
    'field_oa_worktracker_task_status' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'field_oa_worktracker_task_status' => '#2f7ed8',
    'nid' => '#0d233a',
  );
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_oa_worktracker_task_status']['id'] = 'field_oa_worktracker_task_status';
  $handler->display->display_options['fields']['field_oa_worktracker_task_status']['table'] = 'field_data_field_oa_worktracker_task_status';
  $handler->display->display_options['fields']['field_oa_worktracker_task_status']['field'] = 'field_oa_worktracker_task_status';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Groups audience (og_group_ref:target_id) */
  $handler->display->display_options['arguments']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Groups audience (og_group_ref:target_id) */
  $handler->display->display_options['filters']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['value'] = 'NHP Risk Reporting - 91583';
  $handler->display->display_options['filters']['og_group_ref_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator_id'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['label'] = 'Space';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['identifier'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
  );
  /* Filter criterion: Content: Closed? (field_is_closed) */
  $handler->display->display_options['filters']['field_is_closed_value']['id'] = 'field_is_closed_value';
  $handler->display->display_options['filters']['field_is_closed_value']['table'] = 'field_data_field_is_closed';
  $handler->display->display_options['filters']['field_is_closed_value']['field'] = 'field_is_closed_value';
  $handler->display->display_options['filters']['field_is_closed_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['operator_id'] = 'field_is_closed_value_op';
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['label'] = 'Closed?';
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['operator'] = 'field_is_closed_value_op';
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['identifier'] = 'field_is_closed_value';
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'oa_worktracker_task' => 'oa_worktracker_task',
  );
  $handler->display->display_options['pane_title'] = 'Task Chart status';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['exposed_form_configure'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['exposed_form_overrides'] = array(
    'filters' => array(
      'og_group_ref_target_id' => '',
      'field_is_closed_value' => 'exposed',
    ),
  );
  $handler->display->display_options['link_to_view'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '0';

  /* Display: View Field-Task list for space */
  $handler = $view->new_display('panel_pane', 'View Field-Task list for space', 'view_field_for_space');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_user_display_name' => 'field_user_display_name',
    'field_oa_worktracker_duedate' => 'field_oa_worktracker_duedate',
    'field_oa_worktracker_priority' => 'field_oa_worktracker_priority',
    'field_oa_worktracker_task_status' => 'field_oa_worktracker_task_status',
    'og_group_ref' => 'og_group_ref',
    'oa_section_ref' => 'oa_section_ref',
    'field_oa_worktracker_task_type' => 'field_oa_worktracker_task_type',
  );
  $handler->display->display_options['style_options']['default'] = 'field_oa_worktracker_duedate';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_display_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_oa_worktracker_duedate' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_oa_worktracker_priority' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_oa_worktracker_task_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'og_group_ref' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'oa_section_ref' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_oa_worktracker_task_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['label'] = 'Summary';
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php
print \'<br>\';
 print $view->feed_icon; 
print \'<br>\';
?>
';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No tasks.';
  $handler->display->display_options['empty']['area']['format'] = 'panopoly_wysiwyg_text';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_oa_worktracker_assigned_to_target_id']['id'] = 'field_oa_worktracker_assigned_to_target_id';
  $handler->display->display_options['relationships']['field_oa_worktracker_assigned_to_target_id']['table'] = 'field_data_field_oa_worktracker_assigned_to';
  $handler->display->display_options['relationships']['field_oa_worktracker_assigned_to_target_id']['field'] = 'field_oa_worktracker_assigned_to_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: User: Display Name */
  $handler->display->display_options['fields']['field_user_display_name']['id'] = 'field_user_display_name';
  $handler->display->display_options['fields']['field_user_display_name']['table'] = 'field_data_field_user_display_name';
  $handler->display->display_options['fields']['field_user_display_name']['field'] = 'field_user_display_name';
  $handler->display->display_options['fields']['field_user_display_name']['relationship'] = 'field_oa_worktracker_assigned_to_target_id';
  $handler->display->display_options['fields']['field_user_display_name']['label'] = 'Assigned To';
  /* Field: Content: Due date */
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['id'] = 'field_oa_worktracker_duedate';
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['table'] = 'field_data_field_oa_worktracker_duedate';
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['field'] = 'field_oa_worktracker_duedate';
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Priority */
  $handler->display->display_options['fields']['field_oa_worktracker_priority']['id'] = 'field_oa_worktracker_priority';
  $handler->display->display_options['fields']['field_oa_worktracker_priority']['table'] = 'field_data_field_oa_worktracker_priority';
  $handler->display->display_options['fields']['field_oa_worktracker_priority']['field'] = 'field_oa_worktracker_priority';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_oa_worktracker_task_status']['id'] = 'field_oa_worktracker_task_status';
  $handler->display->display_options['fields']['field_oa_worktracker_task_status']['table'] = 'field_data_field_oa_worktracker_task_status';
  $handler->display->display_options['fields']['field_oa_worktracker_task_status']['field'] = 'field_oa_worktracker_task_status';
  /* Field: Content: Groups audience */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = 'Space';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Section */
  $handler->display->display_options['fields']['oa_section_ref']['id'] = 'oa_section_ref';
  $handler->display->display_options['fields']['oa_section_ref']['table'] = 'field_data_oa_section_ref';
  $handler->display->display_options['fields']['oa_section_ref']['field'] = 'oa_section_ref';
  $handler->display->display_options['fields']['oa_section_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['oa_section_ref']['click_sort_column'] = 'target_id';
  $handler->display->display_options['fields']['oa_section_ref']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_oa_worktracker_task_type']['id'] = 'field_oa_worktracker_task_type';
  $handler->display->display_options['fields']['field_oa_worktracker_task_type']['table'] = 'field_data_field_oa_worktracker_task_type';
  $handler->display->display_options['fields']['field_oa_worktracker_task_type']['field'] = 'field_oa_worktracker_task_type';
  /* Field: Content: Closed? */
  $handler->display->display_options['fields']['field_is_closed']['id'] = 'field_is_closed';
  $handler->display->display_options['fields']['field_is_closed']['table'] = 'field_data_field_is_closed';
  $handler->display->display_options['fields']['field_is_closed']['field'] = 'field_is_closed';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Groups audience (og_group_ref:target_id) */
  $handler->display->display_options['arguments']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'oa_worktracker_task' => 'oa_worktracker_task',
    'task_inherited' => 'task_inherited',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Groups audience (og_group_ref:target_id) */
  $handler->display->display_options['filters']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['group'] = 1;
  $handler->display->display_options['filters']['og_group_ref_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator_id'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['label'] = 'Space';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['identifier'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'word';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
    24 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: User: Display Name (field_user_display_name) */
  $handler->display->display_options['filters']['field_user_display_name_value']['id'] = 'field_user_display_name_value';
  $handler->display->display_options['filters']['field_user_display_name_value']['table'] = 'field_data_field_user_display_name';
  $handler->display->display_options['filters']['field_user_display_name_value']['field'] = 'field_user_display_name_value';
  $handler->display->display_options['filters']['field_user_display_name_value']['relationship'] = 'field_oa_worktracker_assigned_to_target_id';
  $handler->display->display_options['filters']['field_user_display_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_user_display_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_user_display_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['operator_id'] = 'field_user_display_name_value_op';
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['label'] = 'Assigned to';
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['operator'] = 'field_user_display_name_value_op';
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['identifier'] = 'field_user_display_name_value';
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['autocomplete_field'] = 'field_user_display_name';
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['group'] = 1;
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op_test';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Due date';
  $handler->display->display_options['filters']['date_filter']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_label'] = 'Operator';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_oa_worktracker_duedate.field_oa_worktracker_duedate_value' => 'field_data_field_oa_worktracker_duedate.field_oa_worktracker_duedate_value',
  );
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter_1']['id'] = 'date_filter_1';
  $handler->display->display_options['filters']['date_filter_1']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter_1']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter_1']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter_1']['group'] = 1;
  $handler->display->display_options['filters']['date_filter_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter_1']['expose']['operator_id'] = 'date_filter_1_op';
  $handler->display->display_options['filters']['date_filter_1']['expose']['label'] = 'Post Date';
  $handler->display->display_options['filters']['date_filter_1']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['date_filter_1']['expose']['operator'] = 'date_filter_1_op';
  $handler->display->display_options['filters']['date_filter_1']['expose']['identifier'] = 'date_filter_1';
  $handler->display->display_options['filters']['date_filter_1']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
    24 => 0,
  );
  $handler->display->display_options['filters']['date_filter_1']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter_1']['date_fields'] = array(
    'node.created' => 'node.created',
  );
  /* Filter criterion: Content: Category (field_issue_category) */
  $handler->display->display_options['filters']['field_issue_category_value']['id'] = 'field_issue_category_value';
  $handler->display->display_options['filters']['field_issue_category_value']['table'] = 'field_data_field_issue_category';
  $handler->display->display_options['filters']['field_issue_category_value']['field'] = 'field_issue_category_value';
  $handler->display->display_options['filters']['field_issue_category_value']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_category_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_category_value']['expose']['operator_id'] = 'field_issue_category_value_op';
  $handler->display->display_options['filters']['field_issue_category_value']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_issue_category_value']['expose']['operator'] = 'field_issue_category_value_op';
  $handler->display->display_options['filters']['field_issue_category_value']['expose']['identifier'] = 'field_issue_category_value';
  $handler->display->display_options['filters']['field_issue_category_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
    7 => 0,
    9 => 0,
  );
  /* Filter criterion: Content: Type (field_oa_worktracker_task_type) */
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['id'] = 'field_oa_worktracker_task_type_value';
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['table'] = 'field_data_field_oa_worktracker_task_type';
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['field'] = 'field_oa_worktracker_task_type_value';
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['expose']['operator_id'] = 'field_oa_worktracker_task_type_value_op';
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['expose']['operator'] = 'field_oa_worktracker_task_type_value_op';
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['expose']['identifier'] = 'field_oa_worktracker_task_type_value';
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
    24 => 0,
  );
  /* Filter criterion: Content: Status (field_oa_worktracker_task_status) */
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['id'] = 'field_oa_worktracker_task_status_value';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['table'] = 'field_data_field_oa_worktracker_task_status';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['field'] = 'field_oa_worktracker_task_status_value';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['group'] = 2;
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['expose']['operator_id'] = 'field_oa_worktracker_task_status_value_op';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['expose']['operator'] = 'field_oa_worktracker_task_status_value_op';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['expose']['identifier'] = 'field_oa_worktracker_task_status_value';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  /* Filter criterion: Content: Closed? (field_is_closed) */
  $handler->display->display_options['filters']['field_is_closed_value']['id'] = 'field_is_closed_value';
  $handler->display->display_options['filters']['field_is_closed_value']['table'] = 'field_data_field_is_closed';
  $handler->display->display_options['filters']['field_is_closed_value']['field'] = 'field_is_closed_value';
  $handler->display->display_options['filters']['field_is_closed_value']['group'] = 2;
  $handler->display->display_options['filters']['field_is_closed_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['operator_id'] = 'field_is_closed_value_op';
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['label'] = 'Closed?';
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['operator'] = 'field_is_closed_value_op';
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['identifier'] = 'field_is_closed_value';
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
  );
  $handler->display->display_options['pane_title'] = 'Space task list(view field)';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['exposed_form_configure'] = 'exposed_form_configure';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['exposed_form_overrides'] = array(
    'filters' => array(
      'og_group_ref_target_id' => '',
      'title' => 'exposed',
      'field_user_display_name_value' => 'exposed',
      'date_filter' => 'exposed',
      'date_filter_1' => 'exposed',
      'field_oa_worktracker_task_type_value' => 'exposed',
      'field_oa_worktracker_task_status_value' => 'exposed',
      'field_is_closed_value' => 'exposed',
      'field_issue_category_value' => 'exposed',
    ),
  );
  $handler->display->display_options['link_to_view'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '0';

  /* Display: View Field-Task list for Task section */
  $handler = $view->new_display('panel_pane', 'View Field-Task list for Task section', 'page_task_list_for_section_fixed_filters');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'oa_form';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['collapsed_filter'] = 0;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_user_display_name' => 'field_user_display_name',
    'field_oa_worktracker_duedate' => 'field_oa_worktracker_duedate',
    'field_oa_worktracker_priority' => 'field_oa_worktracker_priority',
    'field_oa_worktracker_task_status' => 'field_oa_worktracker_task_status',
    'og_group_ref' => 'og_group_ref',
    'oa_section_ref' => 'oa_section_ref',
    'field_oa_worktracker_task_type' => 'field_oa_worktracker_task_type',
  );
  $handler->display->display_options['style_options']['default'] = 'field_oa_worktracker_duedate';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_display_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_oa_worktracker_duedate' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_oa_worktracker_priority' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_oa_worktracker_task_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'og_group_ref' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'oa_section_ref' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_oa_worktracker_task_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['label'] = 'Summary';
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php
print \'<br>\';
 print $view->feed_icon; 
print \'<br>\';
?>
';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No tasks.';
  $handler->display->display_options['empty']['area']['format'] = 'panopoly_wysiwyg_text';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_oa_worktracker_assigned_to_target_id']['id'] = 'field_oa_worktracker_assigned_to_target_id';
  $handler->display->display_options['relationships']['field_oa_worktracker_assigned_to_target_id']['table'] = 'field_data_field_oa_worktracker_assigned_to';
  $handler->display->display_options['relationships']['field_oa_worktracker_assigned_to_target_id']['field'] = 'field_oa_worktracker_assigned_to_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: User: Display Name */
  $handler->display->display_options['fields']['field_user_display_name']['id'] = 'field_user_display_name';
  $handler->display->display_options['fields']['field_user_display_name']['table'] = 'field_data_field_user_display_name';
  $handler->display->display_options['fields']['field_user_display_name']['field'] = 'field_user_display_name';
  $handler->display->display_options['fields']['field_user_display_name']['relationship'] = 'field_oa_worktracker_assigned_to_target_id';
  $handler->display->display_options['fields']['field_user_display_name']['label'] = 'Assigned To';
  /* Field: Content: Due date */
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['id'] = 'field_oa_worktracker_duedate';
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['table'] = 'field_data_field_oa_worktracker_duedate';
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['field'] = 'field_oa_worktracker_duedate';
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Priority */
  $handler->display->display_options['fields']['field_oa_worktracker_priority']['id'] = 'field_oa_worktracker_priority';
  $handler->display->display_options['fields']['field_oa_worktracker_priority']['table'] = 'field_data_field_oa_worktracker_priority';
  $handler->display->display_options['fields']['field_oa_worktracker_priority']['field'] = 'field_oa_worktracker_priority';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_oa_worktracker_task_status']['id'] = 'field_oa_worktracker_task_status';
  $handler->display->display_options['fields']['field_oa_worktracker_task_status']['table'] = 'field_data_field_oa_worktracker_task_status';
  $handler->display->display_options['fields']['field_oa_worktracker_task_status']['field'] = 'field_oa_worktracker_task_status';
  /* Field: Content: Groups audience */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = 'Space';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Section */
  $handler->display->display_options['fields']['oa_section_ref']['id'] = 'oa_section_ref';
  $handler->display->display_options['fields']['oa_section_ref']['table'] = 'field_data_oa_section_ref';
  $handler->display->display_options['fields']['oa_section_ref']['field'] = 'oa_section_ref';
  $handler->display->display_options['fields']['oa_section_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['oa_section_ref']['click_sort_column'] = 'target_id';
  $handler->display->display_options['fields']['oa_section_ref']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_oa_worktracker_task_type']['id'] = 'field_oa_worktracker_task_type';
  $handler->display->display_options['fields']['field_oa_worktracker_task_type']['table'] = 'field_data_field_oa_worktracker_task_type';
  $handler->display->display_options['fields']['field_oa_worktracker_task_type']['field'] = 'field_oa_worktracker_task_type';
  /* Field: Content: Closed? */
  $handler->display->display_options['fields']['field_is_closed']['id'] = 'field_is_closed';
  $handler->display->display_options['fields']['field_is_closed']['table'] = 'field_data_field_is_closed';
  $handler->display->display_options['fields']['field_is_closed']['field'] = 'field_is_closed';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Section (oa_section_ref:target_id) */
  $handler->display->display_options['arguments']['oa_section_ref_target_id']['id'] = 'oa_section_ref_target_id';
  $handler->display->display_options['arguments']['oa_section_ref_target_id']['table'] = 'field_data_oa_section_ref';
  $handler->display->display_options['arguments']['oa_section_ref_target_id']['field'] = 'oa_section_ref_target_id';
  $handler->display->display_options['arguments']['oa_section_ref_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['oa_section_ref_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['oa_section_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['oa_section_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['oa_section_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'oa_worktracker_task' => 'oa_worktracker_task',
    'task_inherited' => 'task_inherited',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Groups audience (og_group_ref:target_id) */
  $handler->display->display_options['filters']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['group'] = 1;
  $handler->display->display_options['filters']['og_group_ref_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator_id'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['label'] = 'Space';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['identifier'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'word';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
    24 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: User: Display Name (field_user_display_name) */
  $handler->display->display_options['filters']['field_user_display_name_value']['id'] = 'field_user_display_name_value';
  $handler->display->display_options['filters']['field_user_display_name_value']['table'] = 'field_data_field_user_display_name';
  $handler->display->display_options['filters']['field_user_display_name_value']['field'] = 'field_user_display_name_value';
  $handler->display->display_options['filters']['field_user_display_name_value']['relationship'] = 'field_oa_worktracker_assigned_to_target_id';
  $handler->display->display_options['filters']['field_user_display_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_user_display_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_user_display_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['operator_id'] = 'field_user_display_name_value_op';
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['label'] = 'Assigned to';
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['operator'] = 'field_user_display_name_value_op';
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['identifier'] = 'field_user_display_name_value';
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['autocomplete_field'] = 'field_user_display_name';
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['group'] = 1;
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op_test';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Due date';
  $handler->display->display_options['filters']['date_filter']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_label'] = 'Operator';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_oa_worktracker_duedate.field_oa_worktracker_duedate_value' => 'field_data_field_oa_worktracker_duedate.field_oa_worktracker_duedate_value',
  );
  /* Filter criterion: Content: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['group'] = 1;
  $handler->display->display_options['filters']['created']['exposed'] = TRUE;
  $handler->display->display_options['filters']['created']['expose']['operator_id'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['label'] = 'Post date';
  $handler->display->display_options['filters']['created']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['created']['expose']['operator'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['identifier'] = 'created';
  $handler->display->display_options['filters']['created']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
  );
  /* Filter criterion: Content: Type (field_oa_worktracker_task_type) */
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['id'] = 'field_oa_worktracker_task_type_value';
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['table'] = 'field_data_field_oa_worktracker_task_type';
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['field'] = 'field_oa_worktracker_task_type_value';
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['expose']['operator_id'] = 'field_oa_worktracker_task_type_value_op';
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['expose']['operator'] = 'field_oa_worktracker_task_type_value_op';
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['expose']['identifier'] = 'field_oa_worktracker_task_type_value';
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
    24 => 0,
  );
  /* Filter criterion: Content: Status (field_oa_worktracker_task_status) */
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['id'] = 'field_oa_worktracker_task_status_value';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['table'] = 'field_data_field_oa_worktracker_task_status';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['field'] = 'field_oa_worktracker_task_status_value';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['group'] = 2;
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['expose']['operator_id'] = 'field_oa_worktracker_task_status_value_op';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['expose']['operator'] = 'field_oa_worktracker_task_status_value_op';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['expose']['identifier'] = 'field_oa_worktracker_task_status_value';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  /* Filter criterion: Content: Closed? (field_is_closed) */
  $handler->display->display_options['filters']['field_is_closed_value']['id'] = 'field_is_closed_value';
  $handler->display->display_options['filters']['field_is_closed_value']['table'] = 'field_data_field_is_closed';
  $handler->display->display_options['filters']['field_is_closed_value']['field'] = 'field_is_closed_value';
  $handler->display->display_options['filters']['field_is_closed_value']['group'] = 2;
  $handler->display->display_options['filters']['field_is_closed_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['operator_id'] = 'field_is_closed_value_op';
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['label'] = 'Closed?';
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['operator'] = 'field_is_closed_value_op';
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['identifier'] = 'field_is_closed_value';
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
  );
  /* Filter criterion: Content: Category (field_issue_category) */
  $handler->display->display_options['filters']['field_issue_category_value']['id'] = 'field_issue_category_value';
  $handler->display->display_options['filters']['field_issue_category_value']['table'] = 'field_data_field_issue_category';
  $handler->display->display_options['filters']['field_issue_category_value']['field'] = 'field_issue_category_value';
  $handler->display->display_options['filters']['field_issue_category_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_category_value']['expose']['operator_id'] = 'field_issue_category_value_op';
  $handler->display->display_options['filters']['field_issue_category_value']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_issue_category_value']['expose']['operator'] = 'field_issue_category_value_op';
  $handler->display->display_options['filters']['field_issue_category_value']['expose']['identifier'] = 'field_issue_category_value';
  $handler->display->display_options['filters']['field_issue_category_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
    7 => 0,
    9 => 0,
  );
  $handler->display->display_options['pane_title'] = 'Section task list(view field)';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['exposed_form_configure'] = 'exposed_form_configure';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['exposed_form_overrides'] = array(
    'filters' => array(
      'og_group_ref_target_id' => '',
      'title' => 'exposed',
      'field_user_display_name_value' => 'exposed',
      'date_filter' => 'exposed',
      'created' => 'exposed',
      'field_oa_worktracker_task_type_value' => 'exposed',
      'field_oa_worktracker_task_status_value' => 'exposed',
      'field_is_closed_value' => 'exposed',
      'field_issue_category_value' => 'exposed',
    ),
  );
  $handler->display->display_options['link_to_view'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '0';

  /* Display: User Tasks */
  $handler = $view->new_display('panel_pane', 'User Tasks', 'panel_user_tasks');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Tasks';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'oa_form';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['collapsed_filter'] = 0;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_user_display_name' => 'field_user_display_name',
    'field_oa_worktracker_duedate' => 'field_oa_worktracker_duedate',
    'field_oa_worktracker_priority' => 'field_oa_worktracker_priority',
    'field_oa_worktracker_task_status' => 'field_oa_worktracker_task_status',
    'og_group_ref' => 'og_group_ref',
    'oa_section_ref' => 'oa_section_ref',
    'field_oa_worktracker_task_type' => 'field_oa_worktracker_task_type',
  );
  $handler->display->display_options['style_options']['default'] = 'field_oa_worktracker_duedate';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_display_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_oa_worktracker_duedate' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_oa_worktracker_priority' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_oa_worktracker_task_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'og_group_ref' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'oa_section_ref' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_oa_worktracker_task_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['label'] = 'Summary';
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php
print \'<br>\';
 print $view->feed_icon; 
print \'<br>\';
?>
';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No tasks.';
  $handler->display->display_options['empty']['area']['format'] = 'panopoly_wysiwyg_text';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_oa_worktracker_assigned_to_target_id']['id'] = 'field_oa_worktracker_assigned_to_target_id';
  $handler->display->display_options['relationships']['field_oa_worktracker_assigned_to_target_id']['table'] = 'field_data_field_oa_worktracker_assigned_to';
  $handler->display->display_options['relationships']['field_oa_worktracker_assigned_to_target_id']['field'] = 'field_oa_worktracker_assigned_to_target_id';
  $handler->display->display_options['relationships']['field_oa_worktracker_assigned_to_target_id']['label'] = 'Assigned to';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: User: Display Name */
  $handler->display->display_options['fields']['field_user_display_name']['id'] = 'field_user_display_name';
  $handler->display->display_options['fields']['field_user_display_name']['table'] = 'field_data_field_user_display_name';
  $handler->display->display_options['fields']['field_user_display_name']['field'] = 'field_user_display_name';
  $handler->display->display_options['fields']['field_user_display_name']['relationship'] = 'field_oa_worktracker_assigned_to_target_id';
  $handler->display->display_options['fields']['field_user_display_name']['label'] = 'Assigned To';
  /* Field: Content: Due date */
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['id'] = 'field_oa_worktracker_duedate';
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['table'] = 'field_data_field_oa_worktracker_duedate';
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['field'] = 'field_oa_worktracker_duedate';
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Priority */
  $handler->display->display_options['fields']['field_oa_worktracker_priority']['id'] = 'field_oa_worktracker_priority';
  $handler->display->display_options['fields']['field_oa_worktracker_priority']['table'] = 'field_data_field_oa_worktracker_priority';
  $handler->display->display_options['fields']['field_oa_worktracker_priority']['field'] = 'field_oa_worktracker_priority';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_oa_worktracker_task_status']['id'] = 'field_oa_worktracker_task_status';
  $handler->display->display_options['fields']['field_oa_worktracker_task_status']['table'] = 'field_data_field_oa_worktracker_task_status';
  $handler->display->display_options['fields']['field_oa_worktracker_task_status']['field'] = 'field_oa_worktracker_task_status';
  /* Field: Content: Groups audience */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = 'Space';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_oa_worktracker_task_type']['id'] = 'field_oa_worktracker_task_type';
  $handler->display->display_options['fields']['field_oa_worktracker_task_type']['table'] = 'field_data_field_oa_worktracker_task_type';
  $handler->display->display_options['fields']['field_oa_worktracker_task_type']['field'] = 'field_oa_worktracker_task_type';
  /* Field: Content: Closed? */
  $handler->display->display_options['fields']['field_is_closed']['id'] = 'field_is_closed';
  $handler->display->display_options['fields']['field_is_closed']['table'] = 'field_data_field_is_closed';
  $handler->display->display_options['fields']['field_is_closed']['field'] = 'field_is_closed';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Due date (field_oa_worktracker_duedate) */
  $handler->display->display_options['sorts']['field_oa_worktracker_duedate_value']['id'] = 'field_oa_worktracker_duedate_value';
  $handler->display->display_options['sorts']['field_oa_worktracker_duedate_value']['table'] = 'field_data_field_oa_worktracker_duedate';
  $handler->display->display_options['sorts']['field_oa_worktracker_duedate_value']['field'] = 'field_oa_worktracker_duedate_value';
  $handler->display->display_options['sorts']['field_oa_worktracker_duedate_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_oa_worktracker_assigned_to_target_id';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'oa_worktracker_task' => 'oa_worktracker_task',
    'task_inherited' => 'task_inherited',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['group'] = 1;
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op_test';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Due date';
  $handler->display->display_options['filters']['date_filter']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_label'] = 'Operator';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_oa_worktracker_duedate.field_oa_worktracker_duedate_value' => 'field_data_field_oa_worktracker_duedate.field_oa_worktracker_duedate_value',
  );
  /* Filter criterion: Content: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>=';
  $handler->display->display_options['filters']['created']['group'] = 1;
  $handler->display->display_options['filters']['created']['exposed'] = TRUE;
  $handler->display->display_options['filters']['created']['expose']['operator_id'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['label'] = 'Post date';
  $handler->display->display_options['filters']['created']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['created']['expose']['operator'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['identifier'] = 'created';
  $handler->display->display_options['filters']['created']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
  );
  /* Filter criterion: Content: Priority (field_oa_worktracker_priority) */
  $handler->display->display_options['filters']['field_oa_worktracker_priority_value']['id'] = 'field_oa_worktracker_priority_value';
  $handler->display->display_options['filters']['field_oa_worktracker_priority_value']['table'] = 'field_data_field_oa_worktracker_priority';
  $handler->display->display_options['filters']['field_oa_worktracker_priority_value']['field'] = 'field_oa_worktracker_priority_value';
  $handler->display->display_options['filters']['field_oa_worktracker_priority_value']['group'] = 1;
  $handler->display->display_options['filters']['field_oa_worktracker_priority_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_oa_worktracker_priority_value']['expose']['operator_id'] = 'field_oa_worktracker_priority_value_op';
  $handler->display->display_options['filters']['field_oa_worktracker_priority_value']['expose']['label'] = 'Priority';
  $handler->display->display_options['filters']['field_oa_worktracker_priority_value']['expose']['operator'] = 'field_oa_worktracker_priority_value_op';
  $handler->display->display_options['filters']['field_oa_worktracker_priority_value']['expose']['identifier'] = 'field_oa_worktracker_priority_value';
  $handler->display->display_options['filters']['field_oa_worktracker_priority_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_oa_worktracker_priority_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
  );
  /* Filter criterion: Content: Type (field_oa_worktracker_task_type) */
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['id'] = 'field_oa_worktracker_task_type_value';
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['table'] = 'field_data_field_oa_worktracker_task_type';
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['field'] = 'field_oa_worktracker_task_type_value';
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['expose']['operator_id'] = 'field_oa_worktracker_task_type_value_op';
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['expose']['operator'] = 'field_oa_worktracker_task_type_value_op';
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['expose']['identifier'] = 'field_oa_worktracker_task_type_value';
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
  );
  /* Filter criterion: Content: Status (field_oa_worktracker_task_status) */
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['id'] = 'field_oa_worktracker_task_status_value';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['table'] = 'field_data_field_oa_worktracker_task_status';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['field'] = 'field_oa_worktracker_task_status_value';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['group'] = 2;
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['expose']['operator_id'] = 'field_oa_worktracker_task_status_value_op';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['expose']['operator'] = 'field_oa_worktracker_task_status_value_op';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['expose']['identifier'] = 'field_oa_worktracker_task_status_value';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
  );
  /* Filter criterion: Content: Closed? (field_is_closed) */
  $handler->display->display_options['filters']['field_is_closed_value']['id'] = 'field_is_closed_value';
  $handler->display->display_options['filters']['field_is_closed_value']['table'] = 'field_data_field_is_closed';
  $handler->display->display_options['filters']['field_is_closed_value']['field'] = 'field_is_closed_value';
  $handler->display->display_options['filters']['field_is_closed_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_is_closed_value']['group'] = 2;
  $handler->display->display_options['filters']['field_is_closed_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['operator_id'] = 'field_is_closed_value_op';
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['label'] = 'Closed?';
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['operator'] = 'field_is_closed_value_op';
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['identifier'] = 'field_is_closed_value';
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
  );
  $handler->display->display_options['pane_title'] = 'User Tasks';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['exposed_form_configure'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['exposed_form_overrides'] = array(
    'filters' => array(
      'date_filter' => 'exposed',
      'created' => 'exposed',
      'field_oa_worktracker_task_status_value' => 'exposed',
      'field_is_closed_value' => 'exposed',
      'field_oa_worktracker_priority_value' => 'exposed',
      'field_oa_worktracker_task_type_value' => 'exposed',
      'flagged' => '',
    ),
  );
  $handler->display->display_options['link_to_view'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '0';

  /* Display: User Tasks Export */
  $handler = $view->new_display('views_data_export', 'User Tasks Export', 'views_data_export_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'XLS Export';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xlsx';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'my tasks.xlsx';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_oa_worktracker_assigned_to_target_id']['id'] = 'field_oa_worktracker_assigned_to_target_id';
  $handler->display->display_options['relationships']['field_oa_worktracker_assigned_to_target_id']['table'] = 'field_data_field_oa_worktracker_assigned_to';
  $handler->display->display_options['relationships']['field_oa_worktracker_assigned_to_target_id']['field'] = 'field_oa_worktracker_assigned_to_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Assigned to */
  $handler->display->display_options['fields']['field_oa_worktracker_assigned_to']['id'] = 'field_oa_worktracker_assigned_to';
  $handler->display->display_options['fields']['field_oa_worktracker_assigned_to']['table'] = 'field_data_field_oa_worktracker_assigned_to';
  $handler->display->display_options['fields']['field_oa_worktracker_assigned_to']['field'] = 'field_oa_worktracker_assigned_to';
  $handler->display->display_options['fields']['field_oa_worktracker_assigned_to']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_oa_worktracker_assigned_to']['click_sort_column'] = 'target_id';
  $handler->display->display_options['fields']['field_oa_worktracker_assigned_to']['settings'] = array(
    'link' => 0,
  );
  /* Field: User: Display Name */
  $handler->display->display_options['fields']['field_user_display_name']['id'] = 'field_user_display_name';
  $handler->display->display_options['fields']['field_user_display_name']['table'] = 'field_data_field_user_display_name';
  $handler->display->display_options['fields']['field_user_display_name']['field'] = 'field_user_display_name';
  $handler->display->display_options['fields']['field_user_display_name']['relationship'] = 'field_oa_worktracker_assigned_to_target_id';
  $handler->display->display_options['fields']['field_user_display_name']['label'] = 'Assigned to';
  /* Field: Content: Due date */
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['id'] = 'field_oa_worktracker_duedate';
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['table'] = 'field_data_field_oa_worktracker_duedate';
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['field'] = 'field_oa_worktracker_duedate';
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['settings'] = array(
    'format_type' => 'panopoly_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Priority */
  $handler->display->display_options['fields']['field_oa_worktracker_priority']['id'] = 'field_oa_worktracker_priority';
  $handler->display->display_options['fields']['field_oa_worktracker_priority']['table'] = 'field_data_field_oa_worktracker_priority';
  $handler->display->display_options['fields']['field_oa_worktracker_priority']['field'] = 'field_oa_worktracker_priority';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_oa_worktracker_task_status']['id'] = 'field_oa_worktracker_task_status';
  $handler->display->display_options['fields']['field_oa_worktracker_task_status']['table'] = 'field_data_field_oa_worktracker_task_status';
  $handler->display->display_options['fields']['field_oa_worktracker_task_status']['field'] = 'field_oa_worktracker_task_status';
  /* Field: Content: Closed? */
  $handler->display->display_options['fields']['field_is_closed']['id'] = 'field_is_closed';
  $handler->display->display_options['fields']['field_is_closed']['table'] = 'field_data_field_is_closed';
  $handler->display->display_options['fields']['field_is_closed']['field'] = 'field_is_closed';
  /* Field: Content: Groups audience */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = 'Space';
  $handler->display->display_options['fields']['og_group_ref']['click_sort_column'] = 'target_id';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref']['group_column'] = 'target_id';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Due date (field_oa_worktracker_duedate) */
  $handler->display->display_options['sorts']['field_oa_worktracker_duedate_value']['id'] = 'field_oa_worktracker_duedate_value';
  $handler->display->display_options['sorts']['field_oa_worktracker_duedate_value']['table'] = 'field_data_field_oa_worktracker_duedate';
  $handler->display->display_options['sorts']['field_oa_worktracker_duedate_value']['field'] = 'field_oa_worktracker_duedate_value';
  $handler->display->display_options['sorts']['field_oa_worktracker_duedate_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_oa_worktracker_assigned_to_target_id';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'oa_worktracker_task' => 'oa_worktracker_task',
    'task_inherited' => 'task_inherited',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['group'] = 1;
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Due date';
  $handler->display->display_options['filters']['date_filter']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_oa_worktracker_duedate.field_oa_worktracker_duedate_value' => 'field_data_field_oa_worktracker_duedate.field_oa_worktracker_duedate_value',
  );
  /* Filter criterion: Content: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['group'] = 1;
  $handler->display->display_options['filters']['created']['exposed'] = TRUE;
  $handler->display->display_options['filters']['created']['expose']['operator_id'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['label'] = 'Post date';
  $handler->display->display_options['filters']['created']['expose']['operator'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['identifier'] = 'created';
  $handler->display->display_options['filters']['created']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
  );
  /* Filter criterion: Content: Status (field_oa_worktracker_task_status) */
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['id'] = 'field_oa_worktracker_task_status_value';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['table'] = 'field_data_field_oa_worktracker_task_status';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['field'] = 'field_oa_worktracker_task_status_value';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['group'] = 2;
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['expose']['operator_id'] = 'field_oa_worktracker_task_status_value_op';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['expose']['operator'] = 'field_oa_worktracker_task_status_value_op';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['expose']['identifier'] = 'field_oa_worktracker_task_status_value';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
  );
  /* Filter criterion: Content: Closed? (field_is_closed) */
  $handler->display->display_options['filters']['field_is_closed_value']['id'] = 'field_is_closed_value';
  $handler->display->display_options['filters']['field_is_closed_value']['table'] = 'field_data_field_is_closed';
  $handler->display->display_options['filters']['field_is_closed_value']['field'] = 'field_is_closed_value';
  $handler->display->display_options['filters']['field_is_closed_value']['group'] = 2;
  $handler->display->display_options['filters']['field_is_closed_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['operator_id'] = 'field_is_closed_value_op';
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['label'] = 'Is closed';
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['operator'] = 'field_is_closed_value_op';
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['identifier'] = 'field_is_closed_value';
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
  );
  /* Filter criterion: Content: Type (field_oa_worktracker_task_type) */
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['id'] = 'field_oa_worktracker_task_type_value';
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['table'] = 'field_data_field_oa_worktracker_task_type';
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['field'] = 'field_oa_worktracker_task_type_value';
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['expose']['operator_id'] = 'field_oa_worktracker_task_type_value_op';
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['expose']['operator'] = 'field_oa_worktracker_task_type_value_op';
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['expose']['identifier'] = 'field_oa_worktracker_task_type_value';
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
  );
  /* Filter criterion: Content: Priority (field_oa_worktracker_priority) */
  $handler->display->display_options['filters']['field_oa_worktracker_priority_value']['id'] = 'field_oa_worktracker_priority_value';
  $handler->display->display_options['filters']['field_oa_worktracker_priority_value']['table'] = 'field_data_field_oa_worktracker_priority';
  $handler->display->display_options['filters']['field_oa_worktracker_priority_value']['field'] = 'field_oa_worktracker_priority_value';
  $handler->display->display_options['filters']['field_oa_worktracker_priority_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_oa_worktracker_priority_value']['expose']['operator_id'] = 'field_oa_worktracker_priority_value_op';
  $handler->display->display_options['filters']['field_oa_worktracker_priority_value']['expose']['label'] = 'Priority (field_oa_worktracker_priority)';
  $handler->display->display_options['filters']['field_oa_worktracker_priority_value']['expose']['operator'] = 'field_oa_worktracker_priority_value_op';
  $handler->display->display_options['filters']['field_oa_worktracker_priority_value']['expose']['identifier'] = 'field_oa_worktracker_priority_value';
  $handler->display->display_options['filters']['field_oa_worktracker_priority_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_oa_worktracker_priority_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
  );
  $handler->display->display_options['path'] = 'user_tasks_export_xls';
  $handler->display->display_options['displays'] = array(
    'panel_user_tasks' => 'panel_user_tasks',
    'default' => 0,
    'task_list_for_space' => 0,
    'panel_pane_2' => 0,
    'panel_pane_4' => 0,
    'panel_pane_5' => 0,
    'task_report' => 0,
    'view_field_for_section' => 0,
    'panel_pane_chart_status' => 0,
    'view_field_for_space' => 0,
    'page_task_list_for_section_fixed_filters' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: test */
  $handler = $view->new_display('panel_pane', 'test', 'panel_pane_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_user_display_name' => 'field_user_display_name',
    'field_oa_worktracker_duedate' => 'field_oa_worktracker_duedate',
    'field_oa_worktracker_priority' => 'field_oa_worktracker_priority',
    'field_oa_worktracker_task_status' => 'field_oa_worktracker_task_status',
    'og_group_ref' => 'og_group_ref',
    'oa_section_ref' => 'oa_section_ref',
    'field_oa_worktracker_task_type' => 'field_oa_worktracker_task_type',
  );
  $handler->display->display_options['style_options']['default'] = 'field_oa_worktracker_duedate';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_display_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_oa_worktracker_duedate' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_oa_worktracker_priority' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_oa_worktracker_task_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'og_group_ref' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'oa_section_ref' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_oa_worktracker_task_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['label'] = 'Summary';
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php
print \'<br>\';
 print $view->feed_icon; 
print \'<br>\';
?>
';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No tasks.';
  $handler->display->display_options['empty']['area']['format'] = 'panopoly_wysiwyg_text';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_oa_worktracker_assigned_to_target_id']['id'] = 'field_oa_worktracker_assigned_to_target_id';
  $handler->display->display_options['relationships']['field_oa_worktracker_assigned_to_target_id']['table'] = 'field_data_field_oa_worktracker_assigned_to';
  $handler->display->display_options['relationships']['field_oa_worktracker_assigned_to_target_id']['field'] = 'field_oa_worktracker_assigned_to_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: User: Display Name */
  $handler->display->display_options['fields']['field_user_display_name']['id'] = 'field_user_display_name';
  $handler->display->display_options['fields']['field_user_display_name']['table'] = 'field_data_field_user_display_name';
  $handler->display->display_options['fields']['field_user_display_name']['field'] = 'field_user_display_name';
  $handler->display->display_options['fields']['field_user_display_name']['relationship'] = 'field_oa_worktracker_assigned_to_target_id';
  $handler->display->display_options['fields']['field_user_display_name']['label'] = 'Assigned To';
  /* Field: Content: Due date */
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['id'] = 'field_oa_worktracker_duedate';
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['table'] = 'field_data_field_oa_worktracker_duedate';
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['field'] = 'field_oa_worktracker_duedate';
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Priority */
  $handler->display->display_options['fields']['field_oa_worktracker_priority']['id'] = 'field_oa_worktracker_priority';
  $handler->display->display_options['fields']['field_oa_worktracker_priority']['table'] = 'field_data_field_oa_worktracker_priority';
  $handler->display->display_options['fields']['field_oa_worktracker_priority']['field'] = 'field_oa_worktracker_priority';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_oa_worktracker_task_status']['id'] = 'field_oa_worktracker_task_status';
  $handler->display->display_options['fields']['field_oa_worktracker_task_status']['table'] = 'field_data_field_oa_worktracker_task_status';
  $handler->display->display_options['fields']['field_oa_worktracker_task_status']['field'] = 'field_oa_worktracker_task_status';
  /* Field: Content: Groups audience */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = 'Space';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Section */
  $handler->display->display_options['fields']['oa_section_ref']['id'] = 'oa_section_ref';
  $handler->display->display_options['fields']['oa_section_ref']['table'] = 'field_data_oa_section_ref';
  $handler->display->display_options['fields']['oa_section_ref']['field'] = 'oa_section_ref';
  $handler->display->display_options['fields']['oa_section_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['oa_section_ref']['click_sort_column'] = 'target_id';
  $handler->display->display_options['fields']['oa_section_ref']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_oa_worktracker_task_type']['id'] = 'field_oa_worktracker_task_type';
  $handler->display->display_options['fields']['field_oa_worktracker_task_type']['table'] = 'field_data_field_oa_worktracker_task_type';
  $handler->display->display_options['fields']['field_oa_worktracker_task_type']['field'] = 'field_oa_worktracker_task_type';
  /* Field: Content: Closed? */
  $handler->display->display_options['fields']['field_is_closed']['id'] = 'field_is_closed';
  $handler->display->display_options['fields']['field_is_closed']['table'] = 'field_data_field_is_closed';
  $handler->display->display_options['fields']['field_is_closed']['field'] = 'field_is_closed';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Groups audience (og_group_ref:target_id) */
  $handler->display->display_options['arguments']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'oa_worktracker_task' => 'oa_worktracker_task',
    'task_inherited' => 'task_inherited',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Groups audience (og_group_ref:target_id) */
  $handler->display->display_options['filters']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['group'] = 1;
  $handler->display->display_options['filters']['og_group_ref_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator_id'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['label'] = 'Space';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['identifier'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: User: Display Name (field_user_display_name) */
  $handler->display->display_options['filters']['field_user_display_name_value']['id'] = 'field_user_display_name_value';
  $handler->display->display_options['filters']['field_user_display_name_value']['table'] = 'field_data_field_user_display_name';
  $handler->display->display_options['filters']['field_user_display_name_value']['field'] = 'field_user_display_name_value';
  $handler->display->display_options['filters']['field_user_display_name_value']['relationship'] = 'field_oa_worktracker_assigned_to_target_id';
  $handler->display->display_options['filters']['field_user_display_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_user_display_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_user_display_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['operator_id'] = 'field_user_display_name_value_op';
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['label'] = 'Assigned to';
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['operator'] = 'field_user_display_name_value_op';
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['identifier'] = 'field_user_display_name_value';
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['autocomplete_field'] = 'field_user_display_name';
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['group'] = 1;
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op_test';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Due date';
  $handler->display->display_options['filters']['date_filter']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_label'] = 'Operator';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_oa_worktracker_duedate.field_oa_worktracker_duedate_value' => 'field_data_field_oa_worktracker_duedate.field_oa_worktracker_duedate_value',
  );
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter_1']['id'] = 'date_filter_1';
  $handler->display->display_options['filters']['date_filter_1']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter_1']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter_1']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter_1']['group'] = 1;
  $handler->display->display_options['filters']['date_filter_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter_1']['expose']['operator_id'] = 'date_filter_1_op';
  $handler->display->display_options['filters']['date_filter_1']['expose']['label'] = 'Post Date';
  $handler->display->display_options['filters']['date_filter_1']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['date_filter_1']['expose']['operator'] = 'date_filter_1_op';
  $handler->display->display_options['filters']['date_filter_1']['expose']['identifier'] = 'date_filter_1';
  $handler->display->display_options['filters']['date_filter_1']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
    24 => 0,
  );
  $handler->display->display_options['filters']['date_filter_1']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter_1']['date_fields'] = array(
    'node.created' => 'node.created',
  );
  $handler->display->display_options['filters']['date_filter_1']['date_method'] = 'AND';
  /* Filter criterion: Content: Closed? (field_is_closed) */
  $handler->display->display_options['filters']['field_is_closed_value']['id'] = 'field_is_closed_value';
  $handler->display->display_options['filters']['field_is_closed_value']['table'] = 'field_data_field_is_closed';
  $handler->display->display_options['filters']['field_is_closed_value']['field'] = 'field_is_closed_value';
  $handler->display->display_options['filters']['field_is_closed_value']['group'] = 1;
  $handler->display->display_options['filters']['field_is_closed_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['operator_id'] = 'field_is_closed_value_op';
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['label'] = 'Closed?';
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['operator'] = 'field_is_closed_value_op';
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['identifier'] = 'field_is_closed_value';
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value_selective']['id'] = 'field_oa_worktracker_task_status_value_selective';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value_selective']['table'] = 'field_data_field_oa_worktracker_task_status';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value_selective']['field'] = 'field_oa_worktracker_task_status_value_selective';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value_selective']['ui_name'] = 'Status (field_oa_worktracker_task_status) (selective)';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value_selective']['expose']['label'] = 'Status (field_oa_worktracker_task_status) (selective)';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value_selective']['expose']['identifier'] = 'field_oa_worktracker_task_status_value_selective';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value_selective']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
    24 => 0,
  );
  $handler->display->display_options['pane_title'] = 'Test';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['exposed_form_configure'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['exposed_form_overrides'] = array(
    'filters' => array(
      'og_group_ref_target_id' => '',
      'title' => 'exposed',
      'field_user_display_name_value' => 'exposed',
      'date_filter' => 'exposed',
      'date_filter_1' => 'exposed',
      'field_is_closed_value' => 'exposed',
      'field_oa_worktracker_task_status_value_selective' => 'exposed',
    ),
  );
  $handler->display->display_options['link_to_view'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '0';

  /* Display: User Overdue Tasks */
  $handler = $view->new_display('panel_pane', 'User Overdue Tasks', 'panel_pane_user_overdue_tasks');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Overdue Tasks';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'oa_form';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['collapsed_filter'] = 0;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_user_display_name' => 'field_user_display_name',
    'field_oa_worktracker_duedate' => 'field_oa_worktracker_duedate',
    'field_oa_worktracker_priority' => 'field_oa_worktracker_priority',
    'field_oa_worktracker_task_status' => 'field_oa_worktracker_task_status',
    'og_group_ref' => 'og_group_ref',
    'oa_section_ref' => 'oa_section_ref',
    'field_oa_worktracker_task_type' => 'field_oa_worktracker_task_type',
  );
  $handler->display->display_options['style_options']['default'] = 'field_oa_worktracker_duedate';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_display_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_oa_worktracker_duedate' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_oa_worktracker_priority' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_oa_worktracker_task_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'og_group_ref' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'oa_section_ref' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_oa_worktracker_task_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['label'] = 'Summary';
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php
print \'<br>\';
 print $view->feed_icon; 
print \'<br>\';
?>
';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No tasks.';
  $handler->display->display_options['empty']['area']['format'] = 'panopoly_wysiwyg_text';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_oa_worktracker_assigned_to_target_id']['id'] = 'field_oa_worktracker_assigned_to_target_id';
  $handler->display->display_options['relationships']['field_oa_worktracker_assigned_to_target_id']['table'] = 'field_data_field_oa_worktracker_assigned_to';
  $handler->display->display_options['relationships']['field_oa_worktracker_assigned_to_target_id']['field'] = 'field_oa_worktracker_assigned_to_target_id';
  $handler->display->display_options['relationships']['field_oa_worktracker_assigned_to_target_id']['label'] = 'Assigned to';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: User: Display Name */
  $handler->display->display_options['fields']['field_user_display_name']['id'] = 'field_user_display_name';
  $handler->display->display_options['fields']['field_user_display_name']['table'] = 'field_data_field_user_display_name';
  $handler->display->display_options['fields']['field_user_display_name']['field'] = 'field_user_display_name';
  $handler->display->display_options['fields']['field_user_display_name']['relationship'] = 'field_oa_worktracker_assigned_to_target_id';
  $handler->display->display_options['fields']['field_user_display_name']['label'] = 'Assigned To';
  /* Field: Content: Due date */
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['id'] = 'field_oa_worktracker_duedate';
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['table'] = 'field_data_field_oa_worktracker_duedate';
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['field'] = 'field_oa_worktracker_duedate';
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Priority */
  $handler->display->display_options['fields']['field_oa_worktracker_priority']['id'] = 'field_oa_worktracker_priority';
  $handler->display->display_options['fields']['field_oa_worktracker_priority']['table'] = 'field_data_field_oa_worktracker_priority';
  $handler->display->display_options['fields']['field_oa_worktracker_priority']['field'] = 'field_oa_worktracker_priority';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_oa_worktracker_task_status']['id'] = 'field_oa_worktracker_task_status';
  $handler->display->display_options['fields']['field_oa_worktracker_task_status']['table'] = 'field_data_field_oa_worktracker_task_status';
  $handler->display->display_options['fields']['field_oa_worktracker_task_status']['field'] = 'field_oa_worktracker_task_status';
  /* Field: Content: Groups audience */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = 'Space';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_oa_worktracker_task_type']['id'] = 'field_oa_worktracker_task_type';
  $handler->display->display_options['fields']['field_oa_worktracker_task_type']['table'] = 'field_data_field_oa_worktracker_task_type';
  $handler->display->display_options['fields']['field_oa_worktracker_task_type']['field'] = 'field_oa_worktracker_task_type';
  /* Field: Content: Closed? */
  $handler->display->display_options['fields']['field_is_closed']['id'] = 'field_is_closed';
  $handler->display->display_options['fields']['field_is_closed']['table'] = 'field_data_field_is_closed';
  $handler->display->display_options['fields']['field_is_closed']['field'] = 'field_is_closed';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Due date (field_oa_worktracker_duedate) */
  $handler->display->display_options['sorts']['field_oa_worktracker_duedate_value']['id'] = 'field_oa_worktracker_duedate_value';
  $handler->display->display_options['sorts']['field_oa_worktracker_duedate_value']['table'] = 'field_data_field_oa_worktracker_duedate';
  $handler->display->display_options['sorts']['field_oa_worktracker_duedate_value']['field'] = 'field_oa_worktracker_duedate_value';
  $handler->display->display_options['sorts']['field_oa_worktracker_duedate_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_oa_worktracker_assigned_to_target_id';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'oa_worktracker_task' => 'oa_worktracker_task',
    'task_inherited' => 'task_inherited',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Closed? (field_is_closed) */
  $handler->display->display_options['filters']['field_is_closed_value']['id'] = 'field_is_closed_value';
  $handler->display->display_options['filters']['field_is_closed_value']['table'] = 'field_data_field_is_closed';
  $handler->display->display_options['filters']['field_is_closed_value']['field'] = 'field_is_closed_value';
  $handler->display->display_options['filters']['field_is_closed_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_is_closed_value']['group'] = 2;
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['operator_id'] = 'field_is_closed_value_op';
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['label'] = 'Closed?';
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['operator'] = 'field_is_closed_value_op';
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['identifier'] = 'field_is_closed_value';
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
    24 => 0,
  );
  /* Filter criterion: Content: Due date (field_oa_worktracker_duedate) */
  $handler->display->display_options['filters']['field_oa_worktracker_duedate_value']['id'] = 'field_oa_worktracker_duedate_value';
  $handler->display->display_options['filters']['field_oa_worktracker_duedate_value']['table'] = 'field_data_field_oa_worktracker_duedate';
  $handler->display->display_options['filters']['field_oa_worktracker_duedate_value']['field'] = 'field_oa_worktracker_duedate_value';
  $handler->display->display_options['filters']['field_oa_worktracker_duedate_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_oa_worktracker_duedate_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_oa_worktracker_duedate_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_oa_worktracker_duedate_value']['default_date'] = 'now';
  $handler->display->display_options['pane_title'] = 'User Overdue Tasks';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['exposed_form_configure'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['exposed_form_overrides'] = array(
    'filters' => array(
      'date_filter' => 'exposed',
      'created' => 'exposed',
      'field_oa_worktracker_task_status_value' => 'exposed',
      'field_is_closed_value' => 'exposed',
      'field_oa_worktracker_priority_value' => 'exposed',
      'field_oa_worktracker_task_type_value' => 'exposed',
      'flagged' => '',
    ),
  );
  $handler->display->display_options['link_to_view'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '0';

  /* Display: Task list for section */
  $handler = $view->new_display('panel_pane', 'Task list for section', 'panel_pane_for_section');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_user_display_name' => 'field_user_display_name',
    'field_oa_worktracker_duedate' => 'field_oa_worktracker_duedate',
    'field_oa_worktracker_priority' => 'field_oa_worktracker_priority',
    'field_oa_worktracker_task_status' => 'field_oa_worktracker_task_status',
    'og_group_ref' => 'og_group_ref',
    'oa_section_ref' => 'oa_section_ref',
    'field_oa_worktracker_task_type' => 'field_oa_worktracker_task_type',
  );
  $handler->display->display_options['style_options']['default'] = 'field_oa_worktracker_duedate';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_display_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_oa_worktracker_duedate' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_oa_worktracker_priority' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_oa_worktracker_task_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'og_group_ref' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'oa_section_ref' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_oa_worktracker_task_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['label'] = 'Summary';
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php
print \'<br>\';
 print $view->feed_icon; 
print \'<br>\';
?>
';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No tasks.';
  $handler->display->display_options['empty']['area']['format'] = 'panopoly_wysiwyg_text';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_oa_worktracker_assigned_to_target_id']['id'] = 'field_oa_worktracker_assigned_to_target_id';
  $handler->display->display_options['relationships']['field_oa_worktracker_assigned_to_target_id']['table'] = 'field_data_field_oa_worktracker_assigned_to';
  $handler->display->display_options['relationships']['field_oa_worktracker_assigned_to_target_id']['field'] = 'field_oa_worktracker_assigned_to_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: User: Display Name */
  $handler->display->display_options['fields']['field_user_display_name']['id'] = 'field_user_display_name';
  $handler->display->display_options['fields']['field_user_display_name']['table'] = 'field_data_field_user_display_name';
  $handler->display->display_options['fields']['field_user_display_name']['field'] = 'field_user_display_name';
  $handler->display->display_options['fields']['field_user_display_name']['relationship'] = 'field_oa_worktracker_assigned_to_target_id';
  $handler->display->display_options['fields']['field_user_display_name']['label'] = 'Assigned To';
  /* Field: Content: Due date */
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['id'] = 'field_oa_worktracker_duedate';
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['table'] = 'field_data_field_oa_worktracker_duedate';
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['field'] = 'field_oa_worktracker_duedate';
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Priority */
  $handler->display->display_options['fields']['field_oa_worktracker_priority']['id'] = 'field_oa_worktracker_priority';
  $handler->display->display_options['fields']['field_oa_worktracker_priority']['table'] = 'field_data_field_oa_worktracker_priority';
  $handler->display->display_options['fields']['field_oa_worktracker_priority']['field'] = 'field_oa_worktracker_priority';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_oa_worktracker_task_status']['id'] = 'field_oa_worktracker_task_status';
  $handler->display->display_options['fields']['field_oa_worktracker_task_status']['table'] = 'field_data_field_oa_worktracker_task_status';
  $handler->display->display_options['fields']['field_oa_worktracker_task_status']['field'] = 'field_oa_worktracker_task_status';
  /* Field: Content: Groups audience */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = 'Space';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Section */
  $handler->display->display_options['fields']['oa_section_ref']['id'] = 'oa_section_ref';
  $handler->display->display_options['fields']['oa_section_ref']['table'] = 'field_data_oa_section_ref';
  $handler->display->display_options['fields']['oa_section_ref']['field'] = 'oa_section_ref';
  $handler->display->display_options['fields']['oa_section_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['oa_section_ref']['click_sort_column'] = 'target_id';
  $handler->display->display_options['fields']['oa_section_ref']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_oa_worktracker_task_type']['id'] = 'field_oa_worktracker_task_type';
  $handler->display->display_options['fields']['field_oa_worktracker_task_type']['table'] = 'field_data_field_oa_worktracker_task_type';
  $handler->display->display_options['fields']['field_oa_worktracker_task_type']['field'] = 'field_oa_worktracker_task_type';
  /* Field: Content: Closed? */
  $handler->display->display_options['fields']['field_is_closed']['id'] = 'field_is_closed';
  $handler->display->display_options['fields']['field_is_closed']['table'] = 'field_data_field_is_closed';
  $handler->display->display_options['fields']['field_is_closed']['field'] = 'field_is_closed';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Section (oa_section_ref:target_id) */
  $handler->display->display_options['arguments']['oa_section_ref_target_id']['id'] = 'oa_section_ref_target_id';
  $handler->display->display_options['arguments']['oa_section_ref_target_id']['table'] = 'field_data_oa_section_ref';
  $handler->display->display_options['arguments']['oa_section_ref_target_id']['field'] = 'oa_section_ref_target_id';
  $handler->display->display_options['arguments']['oa_section_ref_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['oa_section_ref_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['oa_section_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['oa_section_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['oa_section_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'oa_worktracker_task' => 'oa_worktracker_task',
    'task_inherited' => 'task_inherited',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Groups audience (og_group_ref:target_id) */
  $handler->display->display_options['filters']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['group'] = 1;
  $handler->display->display_options['filters']['og_group_ref_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator_id'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['label'] = 'Space';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['identifier'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'word';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
    24 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: User: Display Name (field_user_display_name) */
  $handler->display->display_options['filters']['field_user_display_name_value']['id'] = 'field_user_display_name_value';
  $handler->display->display_options['filters']['field_user_display_name_value']['table'] = 'field_data_field_user_display_name';
  $handler->display->display_options['filters']['field_user_display_name_value']['field'] = 'field_user_display_name_value';
  $handler->display->display_options['filters']['field_user_display_name_value']['relationship'] = 'field_oa_worktracker_assigned_to_target_id';
  $handler->display->display_options['filters']['field_user_display_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_user_display_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_user_display_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['operator_id'] = 'field_user_display_name_value_op';
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['label'] = 'Assigned to';
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['operator'] = 'field_user_display_name_value_op';
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['identifier'] = 'field_user_display_name_value';
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['autocomplete_field'] = 'field_user_display_name';
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_user_display_name_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter_1']['id'] = 'date_filter_1';
  $handler->display->display_options['filters']['date_filter_1']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter_1']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter_1']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter_1']['group'] = 1;
  $handler->display->display_options['filters']['date_filter_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter_1']['expose']['operator_id'] = 'date_filter_1_op';
  $handler->display->display_options['filters']['date_filter_1']['expose']['label'] = 'Post Date';
  $handler->display->display_options['filters']['date_filter_1']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['date_filter_1']['expose']['operator'] = 'date_filter_1_op';
  $handler->display->display_options['filters']['date_filter_1']['expose']['identifier'] = 'date_filter_1';
  $handler->display->display_options['filters']['date_filter_1']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
    24 => 0,
  );
  $handler->display->display_options['filters']['date_filter_1']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter_1']['date_fields'] = array(
    'node.created' => 'node.created',
  );
  $handler->display->display_options['filters']['date_filter_1']['date_method'] = 'AND';
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['group'] = 1;
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op_test';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Due date';
  $handler->display->display_options['filters']['date_filter']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_label'] = 'Operator';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_oa_worktracker_duedate.field_oa_worktracker_duedate_value' => 'field_data_field_oa_worktracker_duedate.field_oa_worktracker_duedate_value',
  );
  /* Filter criterion: Content: Type (field_oa_worktracker_task_type) */
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['id'] = 'field_oa_worktracker_task_type_value';
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['table'] = 'field_data_field_oa_worktracker_task_type';
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['field'] = 'field_oa_worktracker_task_type_value';
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['expose']['operator_id'] = 'field_oa_worktracker_task_type_value_op';
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['expose']['operator'] = 'field_oa_worktracker_task_type_value_op';
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['expose']['identifier'] = 'field_oa_worktracker_task_type_value';
  $handler->display->display_options['filters']['field_oa_worktracker_task_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
    24 => 0,
  );
  /* Filter criterion: Content: Status (field_oa_worktracker_task_status) */
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['id'] = 'field_oa_worktracker_task_status_value';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['table'] = 'field_data_field_oa_worktracker_task_status';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['field'] = 'field_oa_worktracker_task_status_value';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['group'] = 2;
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['expose']['operator_id'] = 'field_oa_worktracker_task_status_value_op';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['expose']['operator'] = 'field_oa_worktracker_task_status_value_op';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['expose']['identifier'] = 'field_oa_worktracker_task_status_value';
  $handler->display->display_options['filters']['field_oa_worktracker_task_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  /* Filter criterion: Content: Closed? (field_is_closed) */
  $handler->display->display_options['filters']['field_is_closed_value']['id'] = 'field_is_closed_value';
  $handler->display->display_options['filters']['field_is_closed_value']['table'] = 'field_data_field_is_closed';
  $handler->display->display_options['filters']['field_is_closed_value']['field'] = 'field_is_closed_value';
  $handler->display->display_options['filters']['field_is_closed_value']['group'] = 2;
  $handler->display->display_options['filters']['field_is_closed_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['operator_id'] = 'field_is_closed_value_op';
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['label'] = 'Closed?';
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['operator'] = 'field_is_closed_value_op';
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['identifier'] = 'field_is_closed_value';
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
  );
  $handler->display->display_options['pane_title'] = 'Section task list';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['exposed_form_configure'] = 'exposed_form_configure';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['exposed_form_overrides'] = array(
    'filters' => array(
      'og_group_ref_target_id' => '',
      'title' => 'exposed',
      'field_user_display_name_value' => 'exposed',
      'date_filter_1' => 'exposed',
      'date_filter' => 'exposed',
      'field_oa_worktracker_task_type_value' => 'exposed',
      'field_oa_worktracker_task_status_value' => 'exposed',
      'field_is_closed_value' => 'exposed',
    ),
  );
  $handler->display->display_options['link_to_view'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['customized_work_tracker'] = $view;

  $view = new view();
  $view->name = 'nhpd_calendar';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'NHPD Calendar';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My Calendar';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_tags'] = array(
    0 => 'my_calendar',
  );
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'fullcalendar';
  $handler->display->display_options['style_options']['advanced'] = TRUE;
  $handler->display->display_options['style_options']['theme'] = FALSE;
  $handler->display->display_options['style_options']['fields']['title'] = TRUE;
  $handler->display->display_options['style_options']['fullcalendar_create']['select'] = TRUE;
  $handler->display->display_options['style_options']['fullcalendar_create']['node_type'] = 'my_event';
  $handler->display->display_options['style_options']['fullcalendar_create']['date_field'] = array(
    'field_oa_date' => 'field_oa_date',
  );
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_oa_worktracker_assigned_to_target_id']['id'] = 'field_oa_worktracker_assigned_to_target_id';
  $handler->display->display_options['relationships']['field_oa_worktracker_assigned_to_target_id']['table'] = 'field_data_field_oa_worktracker_assigned_to';
  $handler->display->display_options['relationships']['field_oa_worktracker_assigned_to_target_id']['field'] = 'field_oa_worktracker_assigned_to_target_id';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_oa_worktracker_task_status']['id'] = 'field_oa_worktracker_task_status';
  $handler->display->display_options['fields']['field_oa_worktracker_task_status']['table'] = 'field_data_field_oa_worktracker_task_status';
  $handler->display->display_options['fields']['field_oa_worktracker_task_status']['field'] = 'field_oa_worktracker_task_status';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_oa_address']['id'] = 'field_oa_address';
  $handler->display->display_options['fields']['field_oa_address']['table'] = 'field_data_field_oa_address';
  $handler->display->display_options['fields']['field_oa_address']['field'] = 'field_oa_address';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] ([field_oa_worktracker_task_status][field_oa_address]）';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Due date */
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['id'] = 'field_oa_worktracker_duedate';
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['table'] = 'field_data_field_oa_worktracker_duedate';
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['field'] = 'field_oa_worktracker_duedate';
  $handler->display->display_options['fields']['field_oa_worktracker_duedate']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_oa_date']['id'] = 'field_oa_date';
  $handler->display->display_options['fields']['field_oa_date']['table'] = 'field_data_field_oa_date';
  $handler->display->display_options['fields']['field_oa_date']['field'] = 'field_oa_date';
  $handler->display->display_options['fields']['field_oa_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_oa_date']['delta_offset'] = '0';
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'my_event' => 'my_event',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current_1']['id'] = 'uid_current_1';
  $handler->display->display_options['filters']['uid_current_1']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current_1']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current_1']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current_1']['value'] = '1';
  $handler->display->display_options['filters']['uid_current_1']['group'] = 1;
  $handler->display->display_options['filters']['uid_current_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid_current_1']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['uid_current_1']['expose']['label'] = 'Is the logged in user';
  $handler->display->display_options['filters']['uid_current_1']['expose']['operator'] = 'uid_current_1_op';
  $handler->display->display_options['filters']['uid_current_1']['expose']['identifier'] = 'uid_current_1';
  $handler->display->display_options['filters']['uid_current_1']['expose']['required'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 2;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'oa_worktracker_task' => 'oa_worktracker_task',
  );
  $handler->display->display_options['filters']['type']['group'] = 2;
  /* Filter criterion: Content: Closed? (field_is_closed) */
  $handler->display->display_options['filters']['field_is_closed_value']['id'] = 'field_is_closed_value';
  $handler->display->display_options['filters']['field_is_closed_value']['table'] = 'field_data_field_is_closed';
  $handler->display->display_options['filters']['field_is_closed_value']['field'] = 'field_is_closed_value';
  $handler->display->display_options['filters']['field_is_closed_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_is_closed_value']['group'] = 2;
  $handler->display->display_options['filters']['field_is_closed_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['operator_id'] = 'field_is_closed_value_op';
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['label'] = 'Task Closed?';
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['operator'] = 'field_is_closed_value_op';
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['identifier'] = 'field_is_closed_value';
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
    24 => 0,
  );
  $handler->display->display_options['filters']['field_is_closed_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'field_oa_worktracker_assigned_to_target_id';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['filters']['uid_current']['group'] = 2;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['path'] = 'nhpd-calendar';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_my_calendar');
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['exposed_form_configure'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['allow']['panopoly_magic_display_type'] = 0;
  $handler->display->display_options['exposed_form_overrides'] = array(
    'filters' => array(
      'field_is_closed_value' => 'exposed',
    ),
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_mycalendar');
  $handler->display->display_options['block_description'] = 'My Calendar';

  /* Display: User Calendar */
  $handler = $view->new_display('page', 'User Calendar', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'User Calendar';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['skip_empty_pages'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'my_event' => 'my_event',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['group'] = 1;
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Author';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
    24 => 0,
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 2;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'oa_worktracker_task' => 'oa_worktracker_task',
  );
  $handler->display->display_options['filters']['type']['group'] = 2;
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['filters']['uid_1']['table'] = 'users';
  $handler->display->display_options['filters']['uid_1']['field'] = 'uid';
  $handler->display->display_options['filters']['uid_1']['relationship'] = 'field_oa_worktracker_assigned_to_target_id';
  $handler->display->display_options['filters']['uid_1']['value'] = '';
  $handler->display->display_options['filters']['uid_1']['group'] = 2;
  $handler->display->display_options['filters']['uid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid_1']['expose']['operator_id'] = 'uid_1_op';
  $handler->display->display_options['filters']['uid_1']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['uid_1']['expose']['operator'] = 'uid_1_op';
  $handler->display->display_options['filters']['uid_1']['expose']['identifier'] = 'uid_1';
  $handler->display->display_options['filters']['uid_1']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['uid_1']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
    24 => 0,
  );
  /* Filter criterion: Content: Closed? (field_is_closed) */
  $handler->display->display_options['filters']['field_is_closed_value']['id'] = 'field_is_closed_value';
  $handler->display->display_options['filters']['field_is_closed_value']['table'] = 'field_data_field_is_closed';
  $handler->display->display_options['filters']['field_is_closed_value']['field'] = 'field_is_closed_value';
  $handler->display->display_options['filters']['field_is_closed_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_is_closed_value']['group'] = 2;
  $handler->display->display_options['filters']['field_is_closed_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['operator_id'] = 'field_is_closed_value_op';
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['label'] = 'Task Closed?';
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['operator'] = 'field_is_closed_value_op';
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['identifier'] = 'field_is_closed_value';
  $handler->display->display_options['filters']['field_is_closed_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    23 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
    24 => 0,
  );
  $handler->display->display_options['filters']['field_is_closed_value']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['path'] = 'nhpd-user-calendar';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'User Calendar';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['nhpd_calendar'] = $view;

  $view = new view();
  $view->name = 'wiki';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'wiki';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nhpd_wiki' => 'nhpd_wiki',
  );
  /* Filter criterion: Content: Section (oa_section_ref:target_id) */
  $handler->display->display_options['filters']['oa_section_ref_target_id']['id'] = 'oa_section_ref_target_id';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['table'] = 'field_data_oa_section_ref';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['field'] = 'oa_section_ref_target_id';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['oa_section_ref_target_id']['expose']['operator_id'] = 'oa_section_ref_target_id_op';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['expose']['label'] = 'OpenAtrium Section (oa_section_ref)';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['expose']['operator'] = 'oa_section_ref_target_id_op';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['expose']['identifier'] = 'oa_section_ref_target_id';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );

  /* Display: Wiki Menu */
  $handler = $view->new_display('panel_pane', 'Wiki Menu', 'panel_pane_1');
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['exposed_form_configure'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['exposed_form_overrides'] = array(
    'filters' => array(
      'oa_section_ref_target_id' => '',
    ),
  );

  /* Display: First page */
  $handler = $view->new_display('panel_pane', 'First page', 'panel_pane_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h1';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Wiki Page */
  $handler->display->display_options['fields']['field_wiki_page']['id'] = 'field_wiki_page';
  $handler->display->display_options['fields']['field_wiki_page']['table'] = 'field_data_field_wiki_page';
  $handler->display->display_options['fields']['field_wiki_page']['field'] = 'field_wiki_page';
  $handler->display->display_options['fields']['field_wiki_page']['label'] = '';
  $handler->display->display_options['fields']['field_wiki_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nhpd_wiki' => 'nhpd_wiki',
  );
  /* Filter criterion: Content: Is First Page (field_is_first_page) */
  $handler->display->display_options['filters']['field_is_first_page_value']['id'] = 'field_is_first_page_value';
  $handler->display->display_options['filters']['field_is_first_page_value']['table'] = 'field_data_field_is_first_page';
  $handler->display->display_options['filters']['field_is_first_page_value']['field'] = 'field_is_first_page_value';
  $handler->display->display_options['filters']['field_is_first_page_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Section (oa_section_ref:target_id) */
  $handler->display->display_options['filters']['oa_section_ref_target_id']['id'] = 'oa_section_ref_target_id';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['table'] = 'field_data_oa_section_ref';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['field'] = 'oa_section_ref_target_id';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['oa_section_ref_target_id']['expose']['operator_id'] = 'oa_section_ref_target_id_op';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['expose']['label'] = 'OpenAtrium Section (oa_section_ref)';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['expose']['operator'] = 'oa_section_ref_target_id_op';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['expose']['identifier'] = 'oa_section_ref_target_id';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['exposed_form_configure'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['exposed_form_overrides'] = array(
    'filters' => array(
      'oa_section_ref_target_id' => '',
    ),
  );

  /* Display: Wiki report */
  $handler = $view->new_display('page', 'Wiki report', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Wiki list';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    23 => '23',
  );
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'oa_form';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['collapsed_filter'] = 0;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'nid' => 'nid',
    'og_group_ref' => 'og_group_ref',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'og_group_ref' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Groups audience */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = 'Space';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Old Chili Issue ID */
  $handler->display->display_options['fields']['field_chili_id']['id'] = 'field_chili_id';
  $handler->display->display_options['fields']['field_chili_id']['table'] = 'field_data_field_chili_id';
  $handler->display->display_options['fields']['field_chili_id']['field'] = 'field_chili_id';
  $handler->display->display_options['fields']['field_chili_id']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Is First Page */
  $handler->display->display_options['fields']['field_is_first_page']['id'] = 'field_is_first_page';
  $handler->display->display_options['fields']['field_is_first_page']['table'] = 'field_data_field_is_first_page';
  $handler->display->display_options['fields']['field_is_first_page']['field'] = 'field_is_first_page';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nhpd_wiki' => 'nhpd_wiki',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Old Chili Issue ID (field_chili_id) */
  $handler->display->display_options['filters']['field_chili_id_value']['id'] = 'field_chili_id_value';
  $handler->display->display_options['filters']['field_chili_id_value']['table'] = 'field_data_field_chili_id';
  $handler->display->display_options['filters']['field_chili_id_value']['field'] = 'field_chili_id_value';
  $handler->display->display_options['filters']['field_chili_id_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_chili_id_value']['expose']['operator_id'] = 'field_chili_id_value_op';
  $handler->display->display_options['filters']['field_chili_id_value']['expose']['label'] = 'Chili ID ';
  $handler->display->display_options['filters']['field_chili_id_value']['expose']['operator'] = 'field_chili_id_value_op';
  $handler->display->display_options['filters']['field_chili_id_value']['expose']['identifier'] = 'field_chili_id_value';
  $handler->display->display_options['filters']['field_chili_id_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['nid']['expose']['operator_id'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['label'] = 'Nid';
  $handler->display->display_options['filters']['nid']['expose']['operator'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['identifier'] = 'nid';
  $handler->display->display_options['filters']['nid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  /* Filter criterion: Content: Groups audience (og_group_ref:target_id) */
  $handler->display->display_options['filters']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator_id'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['label'] = 'Space';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['identifier'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  /* Filter criterion: Content: Is First Page (field_is_first_page) */
  $handler->display->display_options['filters']['field_is_first_page_value']['id'] = 'field_is_first_page_value';
  $handler->display->display_options['filters']['field_is_first_page_value']['table'] = 'field_data_field_is_first_page';
  $handler->display->display_options['filters']['field_is_first_page_value']['field'] = 'field_is_first_page_value';
  $handler->display->display_options['filters']['field_is_first_page_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_is_first_page_value']['expose']['operator_id'] = 'field_is_first_page_value_op';
  $handler->display->display_options['filters']['field_is_first_page_value']['expose']['label'] = 'Is First Page';
  $handler->display->display_options['filters']['field_is_first_page_value']['expose']['operator'] = 'field_is_first_page_value_op';
  $handler->display->display_options['filters']['field_is_first_page_value']['expose']['identifier'] = 'field_is_first_page_value';
  $handler->display->display_options['filters']['field_is_first_page_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  $handler->display->display_options['path'] = 'wiki_report';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Wiki report';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Subpages */
  $handler = $view->new_display('panel_pane', 'Subpages', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Subpages';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Parent page (field_parent_page:target_id) */
  $handler->display->display_options['arguments']['field_parent_page_target_id']['id'] = 'field_parent_page_target_id';
  $handler->display->display_options['arguments']['field_parent_page_target_id']['table'] = 'field_data_field_parent_page';
  $handler->display->display_options['arguments']['field_parent_page_target_id']['field'] = 'field_parent_page_target_id';
  $handler->display->display_options['arguments']['field_parent_page_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_parent_page_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_parent_page_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_parent_page_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_parent_page_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nhpd_wiki' => 'nhpd_wiki',
  );
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['exposed_form_configure'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['exposed_form_overrides'] = array(
    'filters' => array(
      'nid' => 'pane_and_exposed',
    ),
  );
  $handler->display->display_options['argument_input'] = array(
    'field_subpage_target_id' => array(
      'type' => 'none',
      'context' => 'entity:node.field-subpage',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Subpage (field_subpage)',
    ),
  );
  $export['wiki'] = $view;

  return $export;
}
