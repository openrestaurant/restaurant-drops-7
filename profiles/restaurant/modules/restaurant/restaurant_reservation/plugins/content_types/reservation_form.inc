<?php

/**
* Plugin definition
*/
$plugin = array(
  'title' => t('Reservation form'),
  'single' => TRUE,
  'category' => array(t('Reservation')),
);

/**
 * Render Callback
 */
function restaurant_reservation_reservation_form_content_type_render($subtype, $conf, $args) {
  $block = new stdClass();

  $block->title = t('Make a Reservation');

  // Add the reservation form.
  module_load_include('inc', 'node', 'node.pages');
  $form = node_add('reservation');

  $block->content = $form;

  return $block;
}
