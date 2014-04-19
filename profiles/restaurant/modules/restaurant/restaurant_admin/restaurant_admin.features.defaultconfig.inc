<?php
/**
 * @file
 * restaurant_admin.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function restaurant_admin_defaultconfig_features() {
  return array(
    'restaurant_admin' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function restaurant_admin_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_components';
  $strongarm->value = array(
    'admin_menu.icon' => TRUE,
    'admin_menu.menu' => TRUE,
    'admin_menu.search' => TRUE,
    'admin_menu.users' => TRUE,
    'admin_menu.account' => TRUE,
    'shortcut.links' => TRUE,
  );
  $export['admin_menu_components'] = $strongarm;

  return $export;
}
