<?php

/**
* Plugin definition
*/
$plugin = array(
  'title' => t('Map'),
  'single' => TRUE,
  'category' => array(t('Restaurant')),
  'edit form' => 'restaurant_plugins_map_content_type_form',
);

/**
 * Settings Form
 */
function restaurant_plugins_map_content_type_form($form, &$form_state) {
  $conf = $form_state['conf'];

  $form['title'] = array(
    '#type' => 'textfield',
    '#title' => t('Title'),
    '#default_value' => !empty($conf['title']) ? $conf['title'] : t('Map'),
    '#prefix' => '<div class="clear-block no-float">',
    '#suffix' => '</div>',
  );

  $form['width'] = array(
    '#type' => 'textfield',
    '#title' => t('Width'),
    '#size' => 10,
    '#required' => TRUE,
    '#default_value' => !empty($conf['width']) ? $conf['width'] : 320,
    '#prefix' => '<div class="clear-block no-float">',
    '#suffix' => '</div>',
  );

  $form['height'] = array(
    '#type' => 'textfield',
    '#title' => t('Height'),
    '#size' => 10,
    '#required' => TRUE,
    '#default_value' => !empty($conf['height']) ? $conf['height'] : 200,
    '#prefix' => '<div class="clear-block no-float">',
    '#suffix' => '</div>',
  );

  $form['show_address'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show address'),
    '#description' => t('Show the address under the map.'),
    '#default_value' => !empty($conf['show_address']) ? $conf['show_address'] : 0,
    '#prefix' => '<div class="clear-block no-float">',
    '#suffix' => '</div>',
  );

  return $form;
}

function restaurant_plugins_map_content_type_form_submit($form, &$form_state) {
  foreach (element_children($form) as $key) {
    if (!empty($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}


/**
 * Render Callback
 */
function restaurant_plugins_map_content_type_render($subtype, $conf, $args, $context) {
  $block = new stdClass();
  $address = panopoly_config_get('address');
  $url_suffix = urlencode(check_plain($address));
  $width = isset($conf['width']) ? $conf['width'] : 320;
  $height = isset($conf['height']) ? $conf['height'] : 200;

  $block->title = isset($conf['title']) ? $conf['title'] : t('Map');

  $block->content = theme('simple_gmap_output', array(
    'include_text' => (isset($conf['show_address'])) ? TRUE : FALSE,
    'information_bubble' => FALSE,
    'url_suffix' => $url_suffix,
    'width' => $width,
    'height' => $height,
    'address_text' => (isset($conf['show_address'])) ? check_markup($address) : '',
  ));

  return $block;
}
