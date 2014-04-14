<?php

/**
* Plugin definition
*/
$plugin = array(
  'title' => t('Reservation update status form'),
  'single' => TRUE,
  'required context' => new ctools_context_required(t('Node'), 'node'),
  'category' => t('Node'),
);

/**
 * Render Callback
 */
function restaurant_reservation_reservation_update_status_form_content_type_render($subtype, $conf, $panel_args, $context) {
  if (!empty($context) && empty($context->data)) {
    return;
  }

  $node = isset($context->data) ? clone($context->data) : NULL;
  $block = new stdClass();
  $block->module = 'node';
  $block->delta  = $node->nid;

  $block->title = t('Update status');

  // Add the reservation status form.
  module_load_include('inc', 'restaurant_reservation', 'restaurant_reservation.admin');
  $form = drupal_get_form('restaurant_reservation_update_status_form', $node->nid);

  $block->content = $form;

  return $block;
}
