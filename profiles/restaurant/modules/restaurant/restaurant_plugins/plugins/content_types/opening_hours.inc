<?php

/**
* Plugin definition
*/
$plugin = array(
  'title' => t('Opening Hours'),
  'single' => TRUE,
  'category' => array(t('Restaurant')),
  'edit form' => 'restaurant_plugins_opening_hours_content_type_form',
);


/**
 * Settings Form
 */
function restaurant_plugins_opening_hours_content_type_form($form, &$form_state) {
  $conf = $form_state['conf'];

  $form['title'] = array(
    '#type' => 'textfield',
    '#title' => t('Title'),
    '#default_value' => !empty($conf['title']) ? $conf['title'] : t('Opening Hours'),
    '#prefix' => '<div class="clear-block no-float">',
    '#suffix' => '</div>',
  );

  return $form;
}

function restaurant_plugins_opening_hours_content_type_form_submit($form, &$form_state) {
  foreach (element_children($form) as $key) {
    if (!empty($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}

/**
 * Render Callback
 */
function restaurant_plugins_opening_hours_content_type_render($subtype, $conf, $args) {
  $block = new stdClass();

  $block->title = isset($conf['title']) ? $conf['title'] : t('Opening Hours');
  $block->content = check_markup(panopoly_config_get('opening_hours'));

  return $block;
}
