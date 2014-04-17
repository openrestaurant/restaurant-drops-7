<?php
/**
 * @file
 * restaurant_reservation.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function restaurant_reservation_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'administration_reservations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Administration: Reservations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Reservations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer reservation';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'nid' => 'nid',
    'field_reservation_name' => 'field_reservation_name',
    'field_reservation_date' => 'field_reservation_date',
    'field_reservation_persons' => 'field_reservation_persons',
    'field_reservation_email' => 'field_reservation_email',
    'field_reservation_phone' => 'field_reservation_phone',
    'created' => 'created',
    'field_reservation_status' => 'field_reservation_status',
    'nothing' => 'nothing',
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
    'field_reservation_status_editable' => 'field_reservation_status_editable',
  );
  $handler->display->display_options['style_options']['default'] = 'field_reservation_date';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
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
    'field_reservation_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reservation_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reservation_persons' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reservation_email' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reservation_phone' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reservation_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reservation_status_editable' => array(
      'sortable' => 0,
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
  $handler->display->display_options['empty']['area']['content'] = 'No reservations to display.';
  $handler->display->display_options['empty']['area']['format'] = 'panopoly_wysiwyg_text';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '25';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Delete',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Update status',
      'settings' => array(
        'show_all_tokens' => 0,
        'display_values' => array(
          'reservation::field_reservation_status' => 'reservation::field_reservation_status',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::panelizer_set_status_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Reservation number */
  $handler->display->display_options['fields']['field_reservation_number']['id'] = 'field_reservation_number';
  $handler->display->display_options['fields']['field_reservation_number']['table'] = 'field_data_field_reservation_number';
  $handler->display->display_options['fields']['field_reservation_number']['field'] = 'field_reservation_number';
  $handler->display->display_options['fields']['field_reservation_number']['label'] = '#';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'ID';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_reservation_name']['id'] = 'field_reservation_name';
  $handler->display->display_options['fields']['field_reservation_name']['table'] = 'field_data_field_reservation_name';
  $handler->display->display_options['fields']['field_reservation_name']['field'] = 'field_reservation_name';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_reservation_date']['id'] = 'field_reservation_date';
  $handler->display->display_options['fields']['field_reservation_date']['table'] = 'field_data_field_reservation_date';
  $handler->display->display_options['fields']['field_reservation_date']['field'] = 'field_reservation_date';
  $handler->display->display_options['fields']['field_reservation_date']['label'] = 'Reserved for';
  $handler->display->display_options['fields']['field_reservation_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Number of persons */
  $handler->display->display_options['fields']['field_reservation_persons']['id'] = 'field_reservation_persons';
  $handler->display->display_options['fields']['field_reservation_persons']['table'] = 'field_data_field_reservation_persons';
  $handler->display->display_options['fields']['field_reservation_persons']['field'] = 'field_reservation_persons';
  $handler->display->display_options['fields']['field_reservation_persons']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_reservation_email']['id'] = 'field_reservation_email';
  $handler->display->display_options['fields']['field_reservation_email']['table'] = 'field_data_field_reservation_email';
  $handler->display->display_options['fields']['field_reservation_email']['field'] = 'field_reservation_email';
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_reservation_phone']['id'] = 'field_reservation_phone';
  $handler->display->display_options['fields']['field_reservation_phone']['table'] = 'field_data_field_reservation_phone';
  $handler->display->display_options['fields']['field_reservation_phone']['field'] = 'field_reservation_phone';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Reserved on';
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_reservation_status']['id'] = 'field_reservation_status';
  $handler->display->display_options['fields']['field_reservation_status']['table'] = 'field_data_field_reservation_status';
  $handler->display->display_options['fields']['field_reservation_status']['field'] = 'field_reservation_status';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'View';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'View';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'admin/reservations/view/[nid]';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Delete';
  /* Field: Content: Update status form */
  $handler->display->display_options['fields']['update_status_form']['id'] = 'update_status_form';
  $handler->display->display_options['fields']['update_status_form']['table'] = 'node';
  $handler->display->display_options['fields']['update_status_form']['field'] = 'update_status_form';
  $handler->display->display_options['fields']['update_status_form']['label'] = 'Update status';
  /* Sort criterion: Content: Date (field_reservation_date) */
  $handler->display->display_options['sorts']['field_reservation_date_value']['id'] = 'field_reservation_date_value';
  $handler->display->display_options['sorts']['field_reservation_date_value']['table'] = 'field_data_field_reservation_date';
  $handler->display->display_options['sorts']['field_reservation_date_value']['field'] = 'field_reservation_date_value';
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
    'reservation' => 'reservation',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Name (field_reservation_name) */
  $handler->display->display_options['filters']['field_reservation_name_value']['id'] = 'field_reservation_name_value';
  $handler->display->display_options['filters']['field_reservation_name_value']['table'] = 'field_data_field_reservation_name';
  $handler->display->display_options['filters']['field_reservation_name_value']['field'] = 'field_reservation_name_value';
  $handler->display->display_options['filters']['field_reservation_name_value']['operator'] = 'allwords';
  $handler->display->display_options['filters']['field_reservation_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_reservation_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['operator_id'] = 'field_reservation_name_value_op';
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['operator'] = 'field_reservation_name_value_op';
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['autocomplete_field'] = 'field_reservation_name';
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Month';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'month';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['granularity'] = 'month';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_reservation_date.field_reservation_date_value' => 'field_data_field_reservation_date.field_reservation_date_value',
  );
  /* Filter criterion: Content: Status (field_reservation_status) */
  $handler->display->display_options['filters']['field_reservation_status_value']['id'] = 'field_reservation_status_value';
  $handler->display->display_options['filters']['field_reservation_status_value']['table'] = 'field_data_field_reservation_status';
  $handler->display->display_options['filters']['field_reservation_status_value']['field'] = 'field_reservation_status_value';
  $handler->display->display_options['filters']['field_reservation_status_value']['value'] = array(
    'all' => 'all',
    'pending' => 'pending',
    'confirmed' => 'confirmed',
    'cancelled' => 'cancelled',
  );
  $handler->display->display_options['filters']['field_reservation_status_value']['expose']['operator_id'] = 'field_reservation_status_value_op';
  $handler->display->display_options['filters']['field_reservation_status_value']['expose']['label'] = 'Status (field_reservation_status)';
  $handler->display->display_options['filters']['field_reservation_status_value']['expose']['operator'] = 'field_reservation_status_value_op';
  $handler->display->display_options['filters']['field_reservation_status_value']['expose']['identifier'] = 'field_reservation_status_value';

  /* Display: All */
  $handler = $view->new_display('page', 'All', 'admin_reservations');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
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
    'reservation' => 'reservation',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Name (field_reservation_name) */
  $handler->display->display_options['filters']['field_reservation_name_value']['id'] = 'field_reservation_name_value';
  $handler->display->display_options['filters']['field_reservation_name_value']['table'] = 'field_data_field_reservation_name';
  $handler->display->display_options['filters']['field_reservation_name_value']['field'] = 'field_reservation_name_value';
  $handler->display->display_options['filters']['field_reservation_name_value']['operator'] = 'allwords';
  $handler->display->display_options['filters']['field_reservation_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_reservation_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['operator_id'] = 'field_reservation_name_value_op';
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['operator'] = 'field_reservation_name_value_op';
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['autocomplete_field'] = 'field_reservation_name';
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Month';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'month';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['granularity'] = 'month';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_reservation_date.field_reservation_date_value' => 'field_data_field_reservation_date.field_reservation_date_value',
  );
  /* Filter criterion: Content: Status (field_reservation_status) */
  $handler->display->display_options['filters']['field_reservation_status_value']['id'] = 'field_reservation_status_value';
  $handler->display->display_options['filters']['field_reservation_status_value']['table'] = 'field_data_field_reservation_status';
  $handler->display->display_options['filters']['field_reservation_status_value']['field'] = 'field_reservation_status_value';
  $handler->display->display_options['filters']['field_reservation_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_reservation_status_value']['expose']['operator_id'] = 'field_reservation_status_value_op';
  $handler->display->display_options['filters']['field_reservation_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_reservation_status_value']['expose']['operator'] = 'field_reservation_status_value_op';
  $handler->display->display_options['filters']['field_reservation_status_value']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['field_reservation_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['path'] = 'admin/reservations';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Reservations';
  $handler->display->display_options['menu']['weight'] = '-9';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Reservations';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'management';

  /* Display: Pending */
  $handler = $view->new_display('page', 'Pending', 'admin_reservations_pending');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Pending Reservations';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
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
    'reservation' => 'reservation',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Name (field_reservation_name) */
  $handler->display->display_options['filters']['field_reservation_name_value']['id'] = 'field_reservation_name_value';
  $handler->display->display_options['filters']['field_reservation_name_value']['table'] = 'field_data_field_reservation_name';
  $handler->display->display_options['filters']['field_reservation_name_value']['field'] = 'field_reservation_name_value';
  $handler->display->display_options['filters']['field_reservation_name_value']['operator'] = 'allwords';
  $handler->display->display_options['filters']['field_reservation_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_reservation_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['operator_id'] = 'field_reservation_name_value_op';
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['operator'] = 'field_reservation_name_value_op';
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['autocomplete_field'] = 'field_reservation_name';
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Month';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'month';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['granularity'] = 'month';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_reservation_date.field_reservation_date_value' => 'field_data_field_reservation_date.field_reservation_date_value',
  );
  /* Filter criterion: Content: Status (field_reservation_status) */
  $handler->display->display_options['filters']['field_reservation_status_value']['id'] = 'field_reservation_status_value';
  $handler->display->display_options['filters']['field_reservation_status_value']['table'] = 'field_data_field_reservation_status';
  $handler->display->display_options['filters']['field_reservation_status_value']['field'] = 'field_reservation_status_value';
  $handler->display->display_options['filters']['field_reservation_status_value']['value'] = array(
    'pending' => 'pending',
  );
  $handler->display->display_options['filters']['field_reservation_status_value']['expose']['operator_id'] = 'field_reservation_status_value_op';
  $handler->display->display_options['filters']['field_reservation_status_value']['expose']['label'] = 'Status (field_reservation_status)';
  $handler->display->display_options['filters']['field_reservation_status_value']['expose']['operator'] = 'field_reservation_status_value_op';
  $handler->display->display_options['filters']['field_reservation_status_value']['expose']['identifier'] = 'field_reservation_status_value';
  $handler->display->display_options['path'] = 'admin/reservations/manage/pending';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Pending';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Reservations';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'management';

  /* Display: Confirmed */
  $handler = $view->new_display('page', 'Confirmed', 'admin_reservations_confirmed');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Pending Reservations';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
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
    'reservation' => 'reservation',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Name (field_reservation_name) */
  $handler->display->display_options['filters']['field_reservation_name_value']['id'] = 'field_reservation_name_value';
  $handler->display->display_options['filters']['field_reservation_name_value']['table'] = 'field_data_field_reservation_name';
  $handler->display->display_options['filters']['field_reservation_name_value']['field'] = 'field_reservation_name_value';
  $handler->display->display_options['filters']['field_reservation_name_value']['operator'] = 'allwords';
  $handler->display->display_options['filters']['field_reservation_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_reservation_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['operator_id'] = 'field_reservation_name_value_op';
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['operator'] = 'field_reservation_name_value_op';
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['autocomplete_field'] = 'field_reservation_name';
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Month';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'month';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['granularity'] = 'month';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_reservation_date.field_reservation_date_value' => 'field_data_field_reservation_date.field_reservation_date_value',
  );
  /* Filter criterion: Content: Status (field_reservation_status) */
  $handler->display->display_options['filters']['field_reservation_status_value']['id'] = 'field_reservation_status_value';
  $handler->display->display_options['filters']['field_reservation_status_value']['table'] = 'field_data_field_reservation_status';
  $handler->display->display_options['filters']['field_reservation_status_value']['field'] = 'field_reservation_status_value';
  $handler->display->display_options['filters']['field_reservation_status_value']['value'] = array(
    'confirmed' => 'confirmed',
  );
  $handler->display->display_options['path'] = 'admin/reservations/manage/confirmed';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Confirmed';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Reservations';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'management';

  /* Display: Cancelled */
  $handler = $view->new_display('page', 'Cancelled', 'admin_reservations_cancelled');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Cancelled Reservations';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
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
    'reservation' => 'reservation',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Name (field_reservation_name) */
  $handler->display->display_options['filters']['field_reservation_name_value']['id'] = 'field_reservation_name_value';
  $handler->display->display_options['filters']['field_reservation_name_value']['table'] = 'field_data_field_reservation_name';
  $handler->display->display_options['filters']['field_reservation_name_value']['field'] = 'field_reservation_name_value';
  $handler->display->display_options['filters']['field_reservation_name_value']['operator'] = 'allwords';
  $handler->display->display_options['filters']['field_reservation_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_reservation_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['operator_id'] = 'field_reservation_name_value_op';
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['operator'] = 'field_reservation_name_value_op';
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['autocomplete_field'] = 'field_reservation_name';
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Month';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'month';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['granularity'] = 'month';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_reservation_date.field_reservation_date_value' => 'field_data_field_reservation_date.field_reservation_date_value',
  );
  /* Filter criterion: Content: Status (field_reservation_status) */
  $handler->display->display_options['filters']['field_reservation_status_value']['id'] = 'field_reservation_status_value';
  $handler->display->display_options['filters']['field_reservation_status_value']['table'] = 'field_data_field_reservation_status';
  $handler->display->display_options['filters']['field_reservation_status_value']['field'] = 'field_reservation_status_value';
  $handler->display->display_options['filters']['field_reservation_status_value']['value'] = array(
    'cancelled' => 'cancelled',
  );
  $handler->display->display_options['path'] = 'admin/reservations/manage/cancelled';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Cancelled';
  $handler->display->display_options['menu']['weight'] = '30';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Reservations';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'management';

  /* Display: Calendar */
  $handler = $view->new_display('page', 'Calendar', 'admin_reservations_calendar');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Calendar';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['calendar_colors_type'] = array(
    'blog_post' => '#ffffff',
    'panopoly_page' => '#ffffff',
    'event' => '#ffffff',
    'menu' => '#ffffff',
    'reservation' => '#ffffff',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Reservation calendar field */
  $handler->display->display_options['fields']['reservation_calendar_field']['id'] = 'reservation_calendar_field';
  $handler->display->display_options['fields']['reservation_calendar_field']['table'] = 'node';
  $handler->display->display_options['fields']['reservation_calendar_field']['field'] = 'reservation_calendar_field';
  $handler->display->display_options['fields']['reservation_calendar_field']['label'] = '';
  $handler->display->display_options['fields']['reservation_calendar_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_reservation_date.field_reservation_date_value' => 'field_data_field_reservation_date.field_reservation_date_value',
  );
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
    'reservation' => 'reservation',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'admin/reservations/calendar/month';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Calenday Day */
  $handler = $view->new_display('page', 'Calenday Day', 'admin_reservations_calendar_day');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Day';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'day';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['calendar_colors_type'] = array(
    'blog_post' => '#ffffff',
    'panopoly_page' => '#ffffff',
    'event' => '#ffffff',
    'menu' => '#ffffff',
    'reservation' => '#ffffff',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Reservation calendar field */
  $handler->display->display_options['fields']['reservation_calendar_field']['id'] = 'reservation_calendar_field';
  $handler->display->display_options['fields']['reservation_calendar_field']['table'] = 'node';
  $handler->display->display_options['fields']['reservation_calendar_field']['field'] = 'reservation_calendar_field';
  $handler->display->display_options['fields']['reservation_calendar_field']['label'] = '';
  $handler->display->display_options['fields']['reservation_calendar_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_reservation_date.field_reservation_date_value' => 'field_data_field_reservation_date.field_reservation_date_value',
  );
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
    'reservation' => 'reservation',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'admin/reservations/calendar/day';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Day';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Calenday Week */
  $handler = $view->new_display('page', 'Calenday Week', 'admin_reservations_calendar_week');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Week';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'week';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['calendar_colors_type'] = array(
    'blog_post' => '#ffffff',
    'panopoly_page' => '#ffffff',
    'event' => '#ffffff',
    'menu' => '#ffffff',
    'reservation' => '#ffffff',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Reservation calendar field */
  $handler->display->display_options['fields']['reservation_calendar_field']['id'] = 'reservation_calendar_field';
  $handler->display->display_options['fields']['reservation_calendar_field']['table'] = 'node';
  $handler->display->display_options['fields']['reservation_calendar_field']['field'] = 'reservation_calendar_field';
  $handler->display->display_options['fields']['reservation_calendar_field']['label'] = '';
  $handler->display->display_options['fields']['reservation_calendar_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'week';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_reservation_date.field_reservation_date_value' => 'field_data_field_reservation_date.field_reservation_date_value',
  );
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
    'reservation' => 'reservation',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'admin/reservations/calendar/week';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Week';
  $handler->display->display_options['menu']['weight'] = '5';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['administration_reservations'] = $view;

  return $export;
}
