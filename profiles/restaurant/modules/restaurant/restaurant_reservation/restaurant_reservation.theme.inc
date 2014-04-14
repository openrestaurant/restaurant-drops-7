<?php

/**
 * Theme functions for restaurant_reservation.
 */

/**
 * Implements theme_restaurant_reservation_status().
 */
function theme_restaurant_reservation_status($variables) {
  $status = $variables['status'];
  $color = _restaurant_reservation_get_status_color($status);

  return '<span class="label label-' . $color . '">' . $status . '</span>';
}
