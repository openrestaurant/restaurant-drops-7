<?php

/**
 * @file
 * Admin callbacks for the restaurant_reservation module.
 */

/**
 * Page callback for admin/reservations/manage.
 */
function restaurant_reservation_manage_reservations_admin() {
  return menu_execute_active_handler('admin/reservations');
}

/**
 * Page callback for admin/reservations/add.
 */
function restaurant_reservation_add_reservation_admin() {
  // Return content for node/add/reservation path.
  return menu_execute_active_handler('node/add/reservation');
}

/**
 * Page callback for admin/reservations/calendar.
 */
function restaurant_reservation_calendar_admin() {
  // Return content for admin/reservations/calendar/month path.
  return menu_execute_active_handler('admin/reservations/calendar/month');
}

/**
 * Update status frm
 *
 * @param $reservation_id
 *  The id of the reservation.
 */
function restaurant_reservation_update_status_form($form, &$form_state, $reservation_id, $show_label = FALSE) {
  $reservation = $form_state['#reservation'] = node_load($reservation_id);
  // Check if node is a reservation type.
  if ($reservation->type == 'reservation') {
    // Get all available statuses.
    $statuses = restaurant_reservation_get_statuses();

    // Get current status.
    $current_status = $form_state['#current_status'] = entity_metadata_wrapper('node', $reservation)->field_reservation_status->value();

    $form['status'] = array(
      '#type' => 'select',
      '#options' => $statuses,
      '#default_value' => $current_status,
      '#required' => TRUE,
    );

    if ($show_label) {
      $form['status']['#title'] = t('Status');
    }

    $form['submit'] = array(
      '#type' => 'submit',
      '#value' => t('Update'),
    );
  }

  return $form;
}


/**
 * Submit handler for restaurant_reservation_update_status_form.
 */
function restaurant_reservation_update_status_form_submit($form, &$form_state) {
  $reservation = $form_state['#reservation'];
  $values = $form_state['values'];
  $current_status = $form_state['#current_status'];
  $status = $values['status'];

  // Update the status for this reservation.
  if (restaurant_reservation_update_status_for_reservation($reservation->nid, $status)) {
    $message = t('The status for <em>@title</em> has been updated. An email has been sent to @mail.', array(
      '@title' => $reservation->title,
      '@mail' => entity_metadata_wrapper('node', $reservation)->field_reservation_email->value(),
    ));
    watchdog('restaurant_reservation', 'Successfully updated the status for reservation @title from @current to @new.', array(
      '@title' => $reservation->title,
      '@current' => $current_status,
      '@new' => $status,
    ));
    drupal_set_message($message);
  }
  else {
    drupal_set_message(t('An error occurred. Please try again.', 'error'));
    watchdog('restaurant_reservation', 'Unable to update the status for reservation @title from @current to @new.', array(
      '@title' => $reservation->title,
      '@current' => $current_status,
      '@new' => $status,
    ), WATCHDOG_ERROR);
  }
}