<?php

/**
 * Alter hooks for restaurant_reservation.
 */

/**
 * Implements hook_form_FORM_ID_alter().
 */
function restaurant_reservation_form_reservation_node_form_alter(&$form, &$form_state) {
  // When the form is not shown on admin pages, make some changes.
  if (!drupal_match_path(current_path(), "node/*/reservation\nnode/*/edit")) {
    // Remove additional fields.
    $form['additional_settings']['#access'] = FALSE;
    $form['revision_information']['#access'] = FALSE;
    $form['path']['#access'] = FALSE;

    // Add an after_build callback.
    $form['#after_build'][] = 'restaurant_reservation_form_reservation_node_form_after_build';

    // Add a custom submit callback.
    $form['actions']['submit']['#submit'][] = 'restaurant_reservation_form_reservation_node_form_submit';

    // Hide the status field.
    $form['field_reservation_status']['#access'] = FALSE;

    // Remove some classes.
    $node_form_class_key = array_search('node-form', $form['#attributes']['class']);
    unset($form['#attributes']['class'][$node_form_class_key]);
  }
}

/**
 * Reservation form after_build callback.
 */
function restaurant_reservation_form_reservation_node_form_after_build($form) {
  // Hide the draft button.
  if (isset($form['actions']['draft'])) {
    $form['actions']['draft']['#access'] = FALSE;
  }

  // Change the value of the submit buttton.
  $form['actions']['submit']['#value'] = t('Submit Reservation');

  // Remove theme wrappers for date field.
  $form['field_reservation_date']['und'][0]['#theme_wrappers'] = array();

  return $form;
}

/**
 * Custom submit callback for reservation form.
 */
function restaurant_reservation_form_reservation_node_form_submit($form, &$form_state) {
  // Clear all messages.
  drupal_get_messages();

  // Show a custom message.
  drupal_set_message(panopoly_config_get('reservation_form_success_message', ''));

  // Redirect to the reservation page.
  $form_state['redirect'] = 'reservation';
}
