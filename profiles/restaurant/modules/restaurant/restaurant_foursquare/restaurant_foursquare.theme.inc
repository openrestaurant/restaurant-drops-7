<?php
/**
 * Theming functions for restaurant foursquare module.
 */

/**
 * Implements template_preprocess_foursquare_check_ins().
 */
function template_preprocess_foursquare_check_ins(&$variables) {
  drupal_add_css(drupal_get_path('module', 'restaurant_foursquare') . '/css/restaurant_foursquare.css');
}

/**
 * Implements template_preprocess_foursquare_widget().
 */
function template_preprocess_foursquare_widget(&$variables) {
  $path = drupal_get_path('module', 'restaurant_foursquare');
  $data = &$variables['data'];
  $show = &$variables['show'];

  // Filter show conf.
  $show = array_filter($show);

  // Format tips and add it to template.
  $tips = $data->tips;
  $variables['tips'] = theme('foursquare_tips', array('tips' => $tips));

  // Create a check_in button.
  $button = $path . '/images/checkinon-white@2x.png';
  $variables['button_check_in'] = l('<img src="' . $button . '" alt="Check in on Foursquare" />', $data->canonicalUrl, array(
    'absolute' => TRUE,
    'html' => TRUE,
    'attributes' => array(
      'class' => array('foursquare-btn-check-in-white'),
      'target' => '_blank',
    ),
  ));

  // Add custom classes for easier theming.
  $variables['classes_array'][] = 'foursquare-widget';
  if (isset($show['tips'])) {
    $variables['classes_array'][] = 'with-body';
  }
  $bar_size = 0;
  if (isset($show['rating'])) {
    $bar_size++;
  }
  if (isset($show['check_ins'])) {
    $bar_size++;
  }
  if (isset($show['users'])) {
    $bar_size++;
  }
  $variables['classes_array'][] = 'bar-size-' . $bar_size;

  drupal_add_css($path . '/css/restaurant_foursquare.css');
}

/**
 * Implements template_preprocess_foursquare_tips().
 */
function template_preprocess_foursquare_tips(&$variables) {
  // For now use reviews from others.
  $variables['tips'] = $variables['tips']->groups[0]->items;
  $tips = &$variables['tips'];

  foreach ($tips as $index => $tip) {
    $tips[$index] = array(
      '#theme' => 'foursquare_tip',
      '#data' => $tip,
    );
  }

  drupal_add_css(drupal_get_path('module', 'restaurant_foursquare') . '/css/restaurant_foursquare.css'); 
}

/**
 * Implements template_preprocess_foursquare_tip().
 */
function template_preprocess_foursquare_tip(&$variables) {
  $data = &$variables['data'];

  // Format user and add to template.
  $user = $data->user;
  $user->fullName = $user->firstName;
  if (isset($user->lastName)) {
     $user->fullName .= ' ' . $user->lastName;
  }

  // User photo
  if (!empty($user->photo)) {
    $user->photoUrl = $user->photo->prefix . '32x32' . $user->photo->suffix;
    $user->photoUrlRetina = $user->photo->prefix . '64x64' . $user->photo->suffix;
  }

  // Format date.
  $data->date = date('M d, Y', $data->createdAt);

  drupal_add_css(drupal_get_path('module', 'restaurant_foursquare') . '/css/restaurant_foursquare.css'); 
}
