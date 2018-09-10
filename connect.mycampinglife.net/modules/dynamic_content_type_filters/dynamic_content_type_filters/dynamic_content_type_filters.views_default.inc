<?php
function dynamic_content_type_filters_views_default_views()
{
$view = new view();
$view->name = 'content_listing';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Content Listing';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Content Listing';
$handler->display->display_options['hide_admin_links'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['exposed_form']['options']['bef'] = array(
  'general' => array(
    'input_required' => 0,
    'text_input_required' => array(
      'text_input_required' => array(
        'value' => 'Select any filter and click on Apply to see results',
        'format' => 'filtered_html',
      ),
    ),
    'allow_secondary' => 0,
    'secondary_label' => 'Advanced options',
    'secondary_collapse_override' => '0',
  ),
  'title' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'autosubmit' => 0,
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'field_subject_value' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'autosubmit' => 0,
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
);
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '20';
$handler->display->display_options['style_plugin'] = 'table';
/* Field: Bulk operations: Content */
$handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['exclude'] = TRUE;
$handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
  'action::views_bulk_operations_delete_item' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'skip_permission_check' => 0,
    'override_label' => 0,
    'label' => '',
    'settings' => array(
      'log' => 0,
    ),
  ),
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'node';
$handler->display->display_options['fields']['type']['field'] = 'type';
/* Field: Content: Last comment author */
$handler->display->display_options['fields']['last_comment_name']['id'] = 'last_comment_name';
$handler->display->display_options['fields']['last_comment_name']['table'] = 'node_comment_statistics';
$handler->display->display_options['fields']['last_comment_name']['field'] = 'last_comment_name';
$handler->display->display_options['fields']['last_comment_name']['label'] = 'Author';
/* Field: Content: Comment status */
$handler->display->display_options['fields']['comment']['id'] = 'comment';
$handler->display->display_options['fields']['comment']['table'] = 'node';
$handler->display->display_options['fields']['comment']['field'] = 'comment';
/* Field: Content: Updated date */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'node';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['date_format'] = 'short';
$handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
/* Field: Content: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
$handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
/* Field: Content: Delete link */
$handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['label'] = 'Delete';
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Contextual filter: Content: Type */
$handler->display->display_options['arguments']['type']['id'] = 'type';
$handler->display->display_options['arguments']['type']['table'] = 'node';
$handler->display->display_options['arguments']['type']['field'] = 'type';
$handler->display->display_options['arguments']['type']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['type']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['type']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['type']['limit'] = '0';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Title */
$handler->display->display_options['filters']['title']['id'] = 'title';
$handler->display->display_options['filters']['title']['table'] = 'node';
$handler->display->display_options['filters']['title']['field'] = 'title';
$handler->display->display_options['filters']['title']['group'] = 1;
$handler->display->display_options['filters']['title']['exposed'] = TRUE;
$handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
$handler->display->display_options['filters']['title']['expose']['use_operator'] = TRUE;
$handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
$handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['title']['group_info']['label'] = 'Title';
$handler->display->display_options['filters']['title']['group_info']['identifier'] = 'title';
$handler->display->display_options['filters']['title']['group_info']['remember'] = FALSE;
$handler->display->display_options['filters']['title']['group_info']['group_items'] = array(
  1 => array(),
  2 => array(),
  3 => array(),
);
/* Filter criterion: Content: subject (field_subject) */
$handler->display->display_options['filters']['field_subject_value']['id'] = 'field_subject_value';
$handler->display->display_options['filters']['field_subject_value']['table'] = 'field_data_field_subject';
$handler->display->display_options['filters']['field_subject_value']['field'] = 'field_subject_value';
$handler->display->display_options['filters']['field_subject_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_subject_value']['expose']['operator_id'] = 'field_subject_value_op';
$handler->display->display_options['filters']['field_subject_value']['expose']['label'] = 'subject (field_subject)';
$handler->display->display_options['filters']['field_subject_value']['expose']['use_operator'] = TRUE;
$handler->display->display_options['filters']['field_subject_value']['expose']['operator'] = 'field_subject_value_op';
$handler->display->display_options['filters']['field_subject_value']['expose']['identifier'] = 'field_subject_value';
$handler->display->display_options['filters']['field_subject_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
/* Filter criterion: Broken/missing handler */
$handler->display->display_options['filters']['field_test_value']['id'] = 'field_test_value';
$handler->display->display_options['filters']['field_test_value']['table'] = 'field_data_field_test';
$handler->display->display_options['filters']['field_test_value']['field'] = 'field_test_value';
$handler->display->display_options['filters']['field_test_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_test_value']['expose']['operator_id'] = 'field_test_value_op';
$handler->display->display_options['filters']['field_test_value']['expose']['label'] = 'Test';
$handler->display->display_options['filters']['field_test_value']['expose']['use_operator'] = TRUE;
$handler->display->display_options['filters']['field_test_value']['expose']['operator'] = 'field_test_value_op';
$handler->display->display_options['filters']['field_test_value']['expose']['identifier'] = 'field_test_value';
$handler->display->display_options['filters']['field_test_value']['expose']['remember_roles'] = array(
  2 => 2,
  1 => 0,
  3 => 0,
);
/* Filter criterion: Broken/missing handler */
$handler->display->display_options['filters']['field_test2_value']['id'] = 'field_test2_value';
$handler->display->display_options['filters']['field_test2_value']['table'] = 'field_data_field_test2';
$handler->display->display_options['filters']['field_test2_value']['field'] = 'field_test2_value';
$handler->display->display_options['filters']['field_test2_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_test2_value']['expose']['operator_id'] = 'field_test2_value_op';
$handler->display->display_options['filters']['field_test2_value']['expose']['label'] = 'test2';
$handler->display->display_options['filters']['field_test2_value']['expose']['use_operator'] = TRUE;
$handler->display->display_options['filters']['field_test2_value']['expose']['operator'] = 'field_test2_value_op';
$handler->display->display_options['filters']['field_test2_value']['expose']['identifier'] = 'field_test2_value';
$handler->display->display_options['filters']['field_test2_value']['expose']['remember_roles'] = array(
  2 => 2,
  1 => 0,
  3 => 0,
);
/* Filter criterion: Broken/missing handler */
$handler->display->display_options['filters']['field_test3_value']['id'] = 'field_test3_value';
$handler->display->display_options['filters']['field_test3_value']['table'] = 'field_data_field_test3';
$handler->display->display_options['filters']['field_test3_value']['field'] = 'field_test3_value';
$handler->display->display_options['filters']['field_test3_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_test3_value']['expose']['operator_id'] = 'field_test3_value_op';
$handler->display->display_options['filters']['field_test3_value']['expose']['label'] = 'test3';
$handler->display->display_options['filters']['field_test3_value']['expose']['use_operator'] = TRUE;
$handler->display->display_options['filters']['field_test3_value']['expose']['operator'] = 'field_test3_value_op';
$handler->display->display_options['filters']['field_test3_value']['expose']['identifier'] = 'field_test3_value';
$handler->display->display_options['filters']['field_test3_value']['expose']['remember_roles'] = array(
  2 => 2,
  1 => 0,
  3 => 0,
);
/* Filter criterion: Broken/missing handler */
$handler->display->display_options['filters']['field_test4_value']['id'] = 'field_test4_value';
$handler->display->display_options['filters']['field_test4_value']['table'] = 'field_data_field_test4';
$handler->display->display_options['filters']['field_test4_value']['field'] = 'field_test4_value';
$handler->display->display_options['filters']['field_test4_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_test4_value']['expose']['operator_id'] = 'field_test4_value_op';
$handler->display->display_options['filters']['field_test4_value']['expose']['label'] = 'test4';
$handler->display->display_options['filters']['field_test4_value']['expose']['use_operator'] = TRUE;
$handler->display->display_options['filters']['field_test4_value']['expose']['operator'] = 'field_test4_value_op';
$handler->display->display_options['filters']['field_test4_value']['expose']['identifier'] = 'field_test4_value';
$handler->display->display_options['filters']['field_test4_value']['expose']['remember_roles'] = array(
  2 => 2,
  1 => 0,
  3 => 0,
);
/* Filter criterion: Broken/missing handler */
$handler->display->display_options['filters']['field_test5_value']['id'] = 'field_test5_value';
$handler->display->display_options['filters']['field_test5_value']['table'] = 'field_data_field_test5';
$handler->display->display_options['filters']['field_test5_value']['field'] = 'field_test5_value';
$handler->display->display_options['filters']['field_test5_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_test5_value']['expose']['operator_id'] = 'field_test5_value_op';
$handler->display->display_options['filters']['field_test5_value']['expose']['label'] = 'test5';
$handler->display->display_options['filters']['field_test5_value']['expose']['use_operator'] = TRUE;
$handler->display->display_options['filters']['field_test5_value']['expose']['operator'] = 'field_test5_value_op';
$handler->display->display_options['filters']['field_test5_value']['expose']['identifier'] = 'field_test5_value';
$handler->display->display_options['filters']['field_test5_value']['expose']['remember_roles'] = array(
  2 => 2,
  1 => 0,
  3 => 0,
);
/* Filter criterion: Broken/missing handler */
$handler->display->display_options['filters']['field_test6_value']['id'] = 'field_test6_value';
$handler->display->display_options['filters']['field_test6_value']['table'] = 'field_data_field_test6';
$handler->display->display_options['filters']['field_test6_value']['field'] = 'field_test6_value';
$handler->display->display_options['filters']['field_test6_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_test6_value']['expose']['operator_id'] = 'field_test6_value_op';
$handler->display->display_options['filters']['field_test6_value']['expose']['label'] = 'test6';
$handler->display->display_options['filters']['field_test6_value']['expose']['use_operator'] = TRUE;
$handler->display->display_options['filters']['field_test6_value']['expose']['operator'] = 'field_test6_value_op';
$handler->display->display_options['filters']['field_test6_value']['expose']['identifier'] = 'field_test6_value';
$handler->display->display_options['filters']['field_test6_value']['expose']['remember_roles'] = array(
  2 => 2,
  1 => 0,
  3 => 0,
);
/* Filter criterion: Broken/missing handler */
$handler->display->display_options['filters']['field_test7_value']['id'] = 'field_test7_value';
$handler->display->display_options['filters']['field_test7_value']['table'] = 'field_data_field_test7';
$handler->display->display_options['filters']['field_test7_value']['field'] = 'field_test7_value';
$handler->display->display_options['filters']['field_test7_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_test7_value']['expose']['operator_id'] = 'field_test7_value_op';
$handler->display->display_options['filters']['field_test7_value']['expose']['label'] = 'test7';
$handler->display->display_options['filters']['field_test7_value']['expose']['use_operator'] = TRUE;
$handler->display->display_options['filters']['field_test7_value']['expose']['operator'] = 'field_test7_value_op';
$handler->display->display_options['filters']['field_test7_value']['expose']['identifier'] = 'field_test7_value';
$handler->display->display_options['filters']['field_test7_value']['expose']['remember_roles'] = array(
  2 => 2,
  1 => 0,
  3 => 0,
);
/* Filter criterion: Content: Short summary2 (field_short_summary2) */
$handler->display->display_options['filters']['field_short_summary2_value']['id'] = 'field_short_summary2_value';
$handler->display->display_options['filters']['field_short_summary2_value']['table'] = 'field_data_field_short_summary2';
$handler->display->display_options['filters']['field_short_summary2_value']['field'] = 'field_short_summary2_value';
$handler->display->display_options['filters']['field_short_summary2_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_short_summary2_value']['expose']['operator_id'] = 'field_short_summary2_value_op';
$handler->display->display_options['filters']['field_short_summary2_value']['expose']['label'] = 'Short summary2';
$handler->display->display_options['filters']['field_short_summary2_value']['expose']['use_operator'] = TRUE;
$handler->display->display_options['filters']['field_short_summary2_value']['expose']['operator'] = 'field_short_summary2_value_op';
$handler->display->display_options['filters']['field_short_summary2_value']['expose']['identifier'] = 'field_short_summary2_value';
$handler->display->display_options['filters']['field_short_summary2_value']['expose']['remember_roles'] = array(
  2 => 2,
  1 => 0,
  3 => 0,
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Type */
$handler->display->display_options['arguments']['type']['id'] = 'type';
$handler->display->display_options['arguments']['type']['table'] = 'node';
$handler->display->display_options['arguments']['type']['field'] = 'type';
$handler->display->display_options['arguments']['type']['default_action'] = 'not found';
$handler->display->display_options['arguments']['type']['default_argument_type'] = 'raw';
$handler->display->display_options['arguments']['type']['default_argument_options']['index'] = '0';
$handler->display->display_options['arguments']['type']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['type']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['type']['limit'] = '0';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Title */
$handler->display->display_options['filters']['title']['id'] = 'title';
$handler->display->display_options['filters']['title']['table'] = 'node';
$handler->display->display_options['filters']['title']['field'] = 'title';
$handler->display->display_options['filters']['title']['operator'] = 'contains';
$handler->display->display_options['filters']['title']['group'] = 1;
$handler->display->display_options['filters']['title']['exposed'] = TRUE;
$handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
$handler->display->display_options['filters']['title']['expose']['use_operator'] = TRUE;
$handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
$handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['title']['group_info']['label'] = 'Title';
$handler->display->display_options['filters']['title']['group_info']['identifier'] = 'title';
$handler->display->display_options['filters']['title']['group_info']['remember'] = FALSE;
$handler->display->display_options['filters']['title']['group_info']['group_items'] = array(
  1 => array(),
  2 => array(),
  3 => array(),
);
$handler->display->display_options['path'] = 'content-listing';
$export = array();
$export[$view->name] = $view;
  return $export;
}