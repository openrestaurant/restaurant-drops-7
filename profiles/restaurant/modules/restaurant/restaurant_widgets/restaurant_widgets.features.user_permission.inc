<?php
/**
 * @file
 * restaurant_widgets.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function restaurant_widgets_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create fieldable page_banner'.
  $permissions['create fieldable page_banner'] = array(
    'name' => 'create fieldable page_banner',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable page_banner'.
  $permissions['delete fieldable page_banner'] = array(
    'name' => 'delete fieldable page_banner',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable page_banner'.
  $permissions['edit fieldable page_banner'] = array(
    'name' => 'edit fieldable page_banner',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  return $permissions;
}
