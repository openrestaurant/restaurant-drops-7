<?php
/**
 * @file
 * restaurant_reservation.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function restaurant_reservation_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function restaurant_reservation_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function restaurant_reservation_node_info() {
  $items = array(
    'reservation' => array(
      'name' => t('Reservation'),
      'base' => 'node_content',
      'description' => t('Content type for reservation.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
