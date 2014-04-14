<?php

/**
* Plugin definition
*/
$plugin = array(
  'title' => t('Page breadcrumbs'),
  'single' => TRUE,
  'category' => array('Page elements'),
);


/**
 * Render Callback
 */
function restaurant_plugins_page_breadcrumbs_content_type_render($subtype, $conf, $args, $context) {
  $block = new stdClass();
  $block->content = theme('breadcrumb', array('breadcrumb' => drupal_get_breadcrumb()));

  return $block;
}
