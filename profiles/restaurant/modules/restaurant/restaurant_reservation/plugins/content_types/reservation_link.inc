<?php

/**
* Plugin definition
*/
$plugin = array(
  'title' => t('Reservation'),
  'single' => TRUE,
  'category' => array(t('Reservation')),
);

/**
 * Render Callback
 */
function restaurant_reservation_reservation_link_content_type_render($subtype, $conf, $args) {
  $block = new stdClass();

  $block->title = isset($conf['title']) ? $conf['title'] : '';
  $block->content = l(t('Make a Reservation'), 'reservation', array(
    'attributes' => array(
      'class' => array('btn', 'btn-lg', 'btn-primary'),
    ),
  ));

  return $block;
}
