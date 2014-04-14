<?php

/**
 * @file
 * Admin callbacks for the restaurant_menu module.
 */

/**
 * Page callback for admin/menus/manage.
 */
function restaurant_menu_manage_menus_admin() {
  return menu_execute_active_handler('admin/menus');
}

/**
 * Page callback for admin/menus/add.
 */
function restaurant_menu_add_menu_admin() {
  // Return content for node/add/menu path.
  return menu_execute_active_handler('node/add/menu');
}

/**
 * Page callback for admin/menus/categories.
 */
function restaurant_menu_menu_categories_admin() {
  // Return content for admin/structure/taxonomy/menu_categories.
  return menu_execute_active_handler('admin/structure/taxonomy/menu_categories');
}

/**
 * Page callback for admin/menus/categories/add.
 */
function restaurant_menu_add_menu_category_admin() {
  // Return content for admin/structure/taxonomy/menu_categories/add path.
  return menu_execute_active_handler('admin/structure/taxonomy/menu_categories/add');
}
