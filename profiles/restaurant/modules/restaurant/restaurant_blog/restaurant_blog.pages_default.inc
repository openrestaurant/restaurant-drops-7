<?php
/**
 * @file
 * restaurant_blog.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function restaurant_blog_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_panel_context_3';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Blog',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'blog_post' => 'blog_post',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'radix_burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Add/Edit Blog Post';
  $display->uuid = '8fb4e3db-16a7-4512-a6fa-bbe1b1b389b3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ea094c4d-041e-4205-a039-ed02013ddfaf';
    $pane->panel = 'contentmain';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ea094c4d-041e-4205-a039-ed02013ddfaf';
    $display->content['new-ea094c4d-041e-4205-a039-ed02013ddfaf'] = $pane;
    $display->panels['contentmain'][0] = 'new-ea094c4d-041e-4205-a039-ed02013ddfaf';
    $pane = new stdClass();
    $pane->pid = 'new-71c23c44-036b-48e7-87a5-37321db51e67';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_blog_post_featured_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '71c23c44-036b-48e7-87a5-37321db51e67';
    $display->content['new-71c23c44-036b-48e7-87a5-37321db51e67'] = $pane;
    $display->panels['sidebar'][0] = 'new-71c23c44-036b-48e7-87a5-37321db51e67';
    $pane = new stdClass();
    $pane->pid = 'new-c5a9bf39-4ff4-4599-a666-6d80bbef4c91';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_blog_post_categories';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c5a9bf39-4ff4-4599-a666-6d80bbef4c91';
    $display->content['new-c5a9bf39-4ff4-4599-a666-6d80bbef4c91'] = $pane;
    $display->panels['sidebar'][1] = 'new-c5a9bf39-4ff4-4599-a666-6d80bbef4c91';
    $pane = new stdClass();
    $pane->pid = 'new-c43e48b1-649d-4354-b635-c5290be3b018';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_blog_post_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'c43e48b1-649d-4354-b635-c5290be3b018';
    $display->content['new-c43e48b1-649d-4354-b635-c5290be3b018'] = $pane;
    $display->panels['sidebar'][2] = 'new-c43e48b1-649d-4354-b635-c5290be3b018';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-ea094c4d-041e-4205-a039-ed02013ddfaf';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context_3'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function restaurant_blog_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'blog';
  $page->task = 'page';
  $page->admin_title = 'Blog';
  $page->admin_description = '';
  $page->path = 'blog';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Blog',
    'name' => 'main-menu',
    'weight' => '3',
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
  $handler->name = 'page_blog_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'blog';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'blog-page',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'layout_1col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'header' => NULL,
      'contentmain1' => NULL,
      'contentmain2' => NULL,
      'contentmain3_left' => NULL,
      'contentmain3_right' => NULL,
      'full_width_1' => NULL,
      'full_width_2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Blog';
  $display->uuid = 'b3553392-1523-429e-b276-78fb721e9979';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-877c53de-7880-4720-a3bb-795d5aa071e4';
    $pane->panel = 'contentmain1';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog-blog';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'teaser',
      'widget_title' => NULL,
      'items_per_page' => NULL,
      'exposed' => array(
        'sort_by' => NULL,
        'sort_order' => NULL,
      ),
      'use_pager' => NULL,
      'pager_id' => NULL,
      'offset' => NULL,
      'link_to_view' => NULL,
      'more_link' => NULL,
      'path' => NULL,
      'view_settings' => 'nodes',
      'header_type' => 'none',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '877c53de-7880-4720-a3bb-795d5aa071e4';
    $display->content['new-877c53de-7880-4720-a3bb-795d5aa071e4'] = $pane;
    $display->panels['contentmain1'][0] = 'new-877c53de-7880-4720-a3bb-795d5aa071e4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['blog'] = $page;

  return $pages;

}
