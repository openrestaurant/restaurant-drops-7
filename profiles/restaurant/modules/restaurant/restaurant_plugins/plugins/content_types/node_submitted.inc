<?php

/**
 * Plugins definition.
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('Submitted'),
  'icon' => 'icon_node.png',
  'description' => t('Node posted date and author.'),
  'required context' => new ctools_context_required(t('Node'), 'node'),
  'category' => t('Node'),
  'defaults' => array(
    'show_author' => TRUE,
    'show_date' => TRUE,
    'date_format' => 'F d, Y',
  ),
);

function restaurant_plugins_node_submitted_content_type_render($subtype, $conf, $panel_args, $context) {
  if (!empty($context) && empty($context->data)) {
    return;
  }

  $node = isset($context->data) ? clone($context->data) : NULL;
  $block = new stdClass();
  $block->module = 'node';
  $block->delta  = $node->nid;

  $show_author = $conf['show_author'];
  $show_date = $conf['show_date'];
  $date_format = $conf['date_format'];

  $text = 'Posted ';

  if ($show_author) {
    $text .= ' by <span class="username">!author</span>';
    $replacements['!author'] = theme('username', array('account' => user_load($node->uid)));
  }

  if ($show_date && $date_format) {
    $text .= ' on <em class="date">@date</em>';
    $replacements['@date'] = date($date_format, $node->created);
  }

  $block->content = t($text, $replacements);

  return $block;
}

function restaurant_plugins_node_submitted_content_type_admin_title($subtype, $conf, $context) {
  return t('"@s" submitted', array('@s' => $context->identifier));
}

function restaurant_plugins_node_submitted_content_type_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];

  $form['show_author'] = array(
    '#title' => t('Show author'),
    '#type' => 'checkbox',
    '#description' => t('Show node author.'),
    '#default_value' => $conf['show_author'],
  );

  $form['show_date'] = array(
    '#title' => t('Show posted date'),
    '#type' => 'checkbox',
    '#description' => t('Show node posted date.'),
    '#default_value' => $conf['show_date'],
  );

  $form['date_format'] = array(
    '#title' => t('Date format'),
    '#type' => 'textfield',
    '#description' => t('The date format. Enter a valid PHP date format.'),
    '#default_value' => !empty($conf['date_format']) ? $conf['date_format'] : 'F d, Y',
    '#required' => TRUE,
    '#states' => array(
      'invisible' => array(
        ':input[name="show_date"]' => array('checked' => FALSE),
      ),
    ),
  );

  return $form;
}

function restaurant_plugins_node_submitted_content_type_edit_form_submit($form, &$form_state) {
  // Copy everything from our defaults.
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    $form_state['conf'][$key] = $form_state['values'][$key];
  }
}
