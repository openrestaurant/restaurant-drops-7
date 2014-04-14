<?php

/**
* Plugin definition
*/
$plugin = array(
  'title' => t('Page title'),
  'single' => TRUE,
  'category' => array('Page elements'),
);


/**
 * Render Callback
 */
function restaurant_plugins_page_title_content_type_render($subtype, $conf, $args, $context) {
  $block = new stdClass();
  $block->content = theme('page_header');

  return $block;
}
