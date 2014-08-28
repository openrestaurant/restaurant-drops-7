<?php
/**
 * @file
 * Theme and preprocess functions for breadcrumbs, messages, tabs..etc
 */

/**
 * Implements hook_preprocess_social_widget().
 * @ingroup themeable
 */
function THEME_preprocess_social_widget(&$variables) {
  $networks = restaurant_base_get_social_networks();
  $variables['links'] = array();

  // Custom icons for networks.
  $icons = array(
    'twitter' => 'twitter-square',
    'facebook' => 'facebook-square',
    'google_plus' => 'google-plus',
    'foursquare' => 'foursquare',
  );

  // Format and show links.
  foreach ($networks as $name => $network) {
    if (isset($variables['networks']['show_' . $name])) {
      if ($variables['networks']['show_' . $name]) {
        $button_text = $variables['networks'][$name . '_button_text'];
        $icon = '';
        if (!empty($icons[$name])) {
          $icon = '<i class="fa fa-' . $icons[$name] . ' fa-2x"></i>';
        }
        $link = $network['default'];
        $button = l($icon . $button_text, $link, array(
          'html' => TRUE,
          'attributes' => array(
            'class' => array('btn', 'btn-lg', 'btn-default', 'btn-' . $name),
            'target' => '_blank',
          ),
        ));

        $variables['links'][] = array('#markup' => $button);
      }
    }
  }
}