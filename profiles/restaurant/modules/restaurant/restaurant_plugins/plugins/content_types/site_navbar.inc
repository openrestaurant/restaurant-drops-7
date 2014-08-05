<?php

/**
* Plugin definition
*/
$plugin = array(
  'title' => t('Site site_navbar'),
  'single' => TRUE,
  'category' => array(t('Page elements')),
  'defaults' => array(
    'site_navbar_style' => 'navbar-default',
    'site_navbar_position' => 'default',
    'site_navbar_width' => 'fluid',
  ),
);

/**
 * Render Callback
 */
function restaurant_plugins_site_navbar_content_type_render($subtype, $conf, $args) {
  $block = new stdClass();
  
  $block->content = theme('site_navbar', array(
    'style' => $conf['site_navbar_style'],
    'position' => $conf['site_navbar_position'],
    'width' => $conf['site_navbar_width'],
  ));

  return $block;
}

function restaurant_plugins_site_navbar_content_type_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];

  $form['site_navbar_style'] = array(
    '#title' => t('Style'),
    '#type' => 'radios',
    '#description' => t('The site_navbar style.'),
    '#default_value' => !empty($conf['site_navbar_style']) ? $conf['site_navbar_style'] : 'navbar-default',
    '#required' => TRUE,
    '#options' => array(
      'navbar-default' => t('Default'),
      'navbar-inverse' => t('Inverse'),
    ),
  );

  $form['site_navbar_position'] = array(
    '#title' => t('Position'),
    '#type' => 'radios',
    '#description' => t('The site_navbar position.'),
    '#default_value' => !empty($conf['site_navbar_position']) ? $conf['site_navbar_position'] : '',
    '#required' => TRUE,
    '#options' => array(
      'default' => t('Default'),
      'navbar-fixed-top' => t('Fixed to top'),
      'navbar-fixed-bottom' => t('Fixed to Bottom'),
      'navbar-static-top' => t('Static top'),
    ),
  );

  $form['site_navbar_width'] = array(
    '#title' => t('Width'),
    '#type' => 'radios',
    '#default_value' => !empty($conf['site_navbar_width']) ? $conf['site_navbar_width'] : 'fluid',
    '#required' => TRUE,
    '#options' => array(
      'fluid' => t('Fluid'),
      'fixed' => t('Fixed'),
    ),
  );

  return $form;
}

function restaurant_plugins_site_navbar_content_type_edit_form_submit($form, &$form_state) {
  // Copy everything from our defaults.
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    $form_state['conf'][$key] = $form_state['values'][$key];
  }
}
