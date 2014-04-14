<?php

/**
 * Plugins definition.
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('Read more'),
  'icon' => 'icon_node.png',
  'description' => t('Read more link.'),
  'required context' => new ctools_context_required(t('Node'), 'node'),
  'category' => t('Node'),
  'defaults' => array(
    'read_more_text' => t('Read more'),
    'read_more_button' => 1,
    'read_more_button_style' => 'btn-default',
  ),
);

function restaurant_plugins_node_read_more_content_type_render($subtype, $conf, $panel_args, $context) {
  if (!empty($context) && empty($context->data)) {
    return;
  }

  $node = isset($context->data) ? clone($context->data) : NULL;
  $block = new stdClass();
  $block->module = 'node';
  $block->delta  = $node->nid;

  $read_more_text = $conf['read_more_text'];
  $read_more_button = $conf['read_more_button'];
  $read_more_button_style = $conf['read_more_button_style'];

  $attributes = array();
  if ($read_more_button) {
    $attributes['class'][] = 'btn';
    $attributes['class'][] = $read_more_button_style;
  }

  $block->content = l($read_more_text, 'node/' . $node->nid, array('attributes' => $attributes));

  return $block;
}

function restaurant_plugins_node_read_more_content_type_admin_title($subtype, $conf, $context) {
  return t('"@s" read more link', array('@s' => $context->identifier));
}

function restaurant_plugins_node_read_more_content_type_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];

  $form['read_more_text'] = array(
    '#title' => t('Text'),
    '#type' => 'textfield',
    '#description' => t('The text to use for the read more link.'),
    '#required' => TRUE,
    '#default_value' => !empty($conf['read_more_text']) ? $conf['read_more_text'] : t('Read more'),
  );

  $form['read_more_button'] = array(
    '#title' => t('Display link as a button'),
    '#type' => 'checkbox',
    '#description' => t('If checked, the read more link is displayed as a button.'),
    '#default_value' => !empty($conf['read_more_button']) ? $conf['read_more_button'] : 1,
  );

  $form['read_more_button_style'] = array(
    '#title' => t('Button style'),
    '#type' => 'radios',
    '#description' => t('The style for the button.'),
    '#default_value' => !empty($conf['read_more_button_style']) ? $conf['read_more_button_style'] : 'btn-default',
    '#required' => TRUE,
    '#options' => array(
      'btn-default' => t('Default'),
      'btn-primary' => t('Primary'),
      'btn-success' => t('Success'),
      'btn-danger' => t('Danger'),
      'btn-info' => t('Info'),
      'btn-warning' => t('Warning'),
      'btn-link' => t('Link'),
    ),
    '#states' => array(
      'invisible' => array(
        ':input[name="read_more_button"]' => array('checked' => FALSE),
      ),
    ),
  );

  return $form;
}

function restaurant_plugins_node_read_more_content_type_edit_form_submit($form, &$form_state) {
  // Copy everything from our defaults.
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    $form_state['conf'][$key] = $form_state['values'][$key];
  }
}
