<?php

/**
* Plugin definition
*/
$plugin = array(
  'title' => t('Page status messages'),
  'single' => TRUE,
  'category' => array('Page elements'),
);


/**
 * Render Callback
 */
function restaurant_plugins_page_messages_content_type_render($subtype, $conf, $args, $context) {
  $block = new stdClass();
  $block->content = theme('status_messages');

  return $block;
}
