<?php
/**
 * @file
 * restaurant_location.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function restaurant_location_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'locations';
  $page->task = 'page';
  $page->admin_title = 'Locations';
  $page->admin_description = '';
  $page->path = 'locations';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Locations',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_locations_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'locations';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'radix_boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Locations';
  $display->uuid = 'e7a4cb36-b630-4edd-95d6-d4d3b745c67b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-320ec830-c48f-4c82-bbc5-8da98bd4cda6';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'locations-locations';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_settings' => 'nodes',
      'header_type' => 'none',
      'view_mode' => 'teaser',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '320ec830-c48f-4c82-bbc5-8da98bd4cda6';
    $display->content['new-320ec830-c48f-4c82-bbc5-8da98bd4cda6'] = $pane;
    $display->panels['contentmain'][0] = 'new-320ec830-c48f-4c82-bbc5-8da98bd4cda6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-320ec830-c48f-4c82-bbc5-8da98bd4cda6';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['locations'] = $page;

  return $pages;

}
