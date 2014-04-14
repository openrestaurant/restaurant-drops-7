<?php

/**
* Plugin definition
*/
$plugin = array(
  'title' => t('Social widget'),
  'single' => TRUE,
  'category' => array(t('Social')),
  'edit form' => 'restaurant_plugins_social_widget_content_type_edit_form',
  'defaults' => array(),
);

// Add defaults.
$networks = restaurant_base_get_social_networks();
foreach ($networks as $name => $network) {
  $plugin['defaults']['show_' . $name] = TRUE;
  $plugin['defaults'][$name . '_button_text'] = $network['button_text'];
}

/**
 * Render Callback
 */
function restaurant_plugins_social_widget_content_type_render($subtype, $conf, $args) {
  $block = new stdClass();
  
  $block->content = theme('social_widget', array(
    'networks' => $conf,
  ));

  return $block;
}

function restaurant_plugins_social_widget_content_type_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];

  $form['settings'] = array(
    '#title' => t('Settings'),
    '#type' => 'fieldset',
  );

  $networks = restaurant_base_get_social_networks();
  foreach ($networks as $name => $network) {
    $form['settings']['show_' . $name] = array(
      '#title' => t('Show @title link.', array('@title' => $network['title'])),
      '#type' => 'checkbox',
      '#default_value' => !empty($conf['show_' . $name]) ? $conf['show_' . $name] : TRUE,
    );

    $form['settings'][$name . '_button_text'] = array(
      '#title' => t('@title button text', array('@title' => $network['title'])),
      '#type' => 'textfield',
      '#default_value' => !empty($conf[$name . '_button_text']) ? $conf[$name . '_button_text'] : $network['title'],
      '#required' => TRUE,
      '#states' => array(
        'invisible' => array(
          ':input[name="show_ . ' . $name . '"]' => array('checked' => FALSE),
        ),
      ),
    );
  }

  return $form;
}

function restaurant_plugins_social_widget_content_type_edit_form_submit($form, &$form_state) {
  // Copy everything from our defaults.
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    $form_state['conf'][$key] = $form_state['values'][$key];
  }
}
