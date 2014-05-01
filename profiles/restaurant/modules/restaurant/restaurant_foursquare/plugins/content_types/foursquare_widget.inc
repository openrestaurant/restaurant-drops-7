<?php

/**
* Plugin definition
*/
$plugin = array(
  'title' => t('Foursquare widget'),
  'description' => t('Shows a Foursquare widget.'),
  'single' => TRUE,
  'category' => array(t('Foursquare')),
  'edit form' => 'restaurant_foursquare_foursquare_widget_content_type_form',
  'defaults' => array(
    'show' => array(
      'rating' => TRUE,
      'check_ins' => TRUE,
      'users' => TRUE,
      'tips' => TRUE,
      'button' => TRUE,
    ),
  ),
);


/**
 * Settings Form
 */
function restaurant_foursquare_foursquare_widget_content_type_form($form, &$form_state) {
  $conf = $form_state['conf'];

  $form['show'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Show'),
    '#options' => array(
      'rating' => t('Ratings'),
      'check_ins' => t('Check-ins'),
      'users' => t('Users'),
      'tips' => t('Tips'),
      'button' => t('Button'),
    ),
    '#required' => TRUE,
    '#default_value' => !empty($conf['show']) ? $conf['show'] : array(),
    '#prefix' => '<div class="clear-block no-float">',
    '#suffix' => '</div>',
  );

  return $form;
}

function restaurant_foursquare_foursquare_widget_content_type_form_submit($form, &$form_state) {
  foreach (element_children($form) as $key) {
    if (!empty($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}

/**
 * Render Callback
 */
function restaurant_foursquare_foursquare_widget_content_type_render($subtype, $conf, $panel_args, $context) {
  $foursquare = foursquare_api();
  $venue_id = panopoly_config_get('foursquare_venue_id', '');

  $block = new stdClass();
  $block->module = 'restaurant_foursquare';
  $block->delta  = 'restaurant_foursquare_widget';

  $block->title = isset($conf['title']) ? $conf['title'] : '';
  $output = '';

  if ($venue_id) {
    $info = foursquare_api_get_venue_info($venue_id);
    $response = $info->response;
    $output = theme('foursquare_widget', array('data' => $response->venue, 'show' => $conf['show']));
  }

  $block->content = $output;

  return $block;
}
