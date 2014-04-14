<?php

/**
* Plugin definition
*/
$plugin = array(
  'title' => t('Page tabs'),
  'single' => TRUE,
  'category' => array('Page elements'),
);


/**
 * Render Callback
 */
function restaurant_plugins_page_tabs_content_type_render($subtype, $conf, $args, $context) {
  $block = new stdClass();

  $tabs = menu_local_tabs();
  if (!empty($tabs['#primary']) || !empty($tabs['#seconday'])) {
    $block->content = $tabs;
  }

  return $block;
}
