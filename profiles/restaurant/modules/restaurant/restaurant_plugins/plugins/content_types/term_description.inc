<?php

/**
 * Plugins definition.
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('Term title and description'),
  'icon' => 'icon_term.png',
  'description' => t('Term title and description.'),
  'required context' => new ctools_context_required(t('Term'), array('term', 'taxonomy_term')),
  'category' => t('Taxonomy term'),
);

function restaurant_plugins_term_description_content_type_render($subtype, $conf, $panel_args, $context) {
  $term = isset($context->data) ? clone($context->data) : NULL;
  $block = new stdClass();
  $block->module = 'node_type';

  // $block->title = $term->name;
  if ($term) {
    $block->content = '<h1>' . $term->name . '</h1>';
    $block->delta = $term->tid;

    if ($term->description) {
      $block->content .= check_markup($term->description, $term->format, '', TRUE);
    }

    if (user_access('administer taxonomy')) {
      $block->admin_links['update'] = array(
        'title' => t('Edit term'),
        'alt' => t("Edit this term"),
        'href' => "taxonomy/term/$term->tid/edit",
        'query' => drupal_get_destination(),
      );
    }
  }
  else {
    $block->content = t('Term description goes here.');
    $block->delta = 'unknown';
  }

  return $block;
}

function restaurant_plugins_term_description_content_type_admin_title($subtype, $conf, $context) {
  return t('"@s" term title and description', array('@s' => $context->identifier));
}

function restaurant_plugins_term_description_content_type_edit_form($form, &$form_state) {
  // provide a blank form so we have a place to have context setting.
  return $form;
}
