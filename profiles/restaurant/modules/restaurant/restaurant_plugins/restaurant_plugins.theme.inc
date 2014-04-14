<?php

/**
 * Theme functions for restaurant_plugins.
 */

/**
 * Implements hook_preprocess().
 * @ingroup themeable
 */
function restaurant_plugins_preprocess(&$variables, $hook) {
  if (isset($variables['layout']) && isset($variables['renderer'])) {
    $variables['extra_classes_array'] = array();
    $regions = array_keys($variables['layout']['regions']);
    foreach ($regions as $region) {
      $variables['extra_classes_array'][$region] = array();
      
      // If a region is empty, add an extra class to it.
      if (!isset($variables['display']->panels[$region])) {
        $variables['extra_classes_array'][$region][] = 'panel-pane-region-empty';
      }
    }

    // Make extra classes printable.
    foreach ($variables['extra_classes_array'] as $key => $extra_classes) {
      $variables['extra_classes'][$key] = implode(" ", $extra_classes);
    }
  }
}

/**
 * Implements hook_preprocess_html().
 * @ingroup themeable
 */
function restaurant_plugins_preprocess_html(&$variables) {
  $page = page_manager_get_current_page();
  if ($page) {
    // Add a custom panel class
    $variables['classes_array'][] = 'page-is-panel';

    // Add a custom class for each region inside the panel page.
    if (isset($page['handler']->conf['display'])) {
      foreach ($page['handler']->conf['display']->panels as $region_name => $region) {
        if (count($region)) {
          $variables['classes_array'][] = 'page-with-region-' . $region_name;
        }
      }
    }
  }
  else {
    // Add a custom panel class
    $variables['classes_array'][] = 'page-is-not-panel';
  }
}

/**
 * template_preprocess_navbar().
 * @ingroup themeable
 */
function template_preprocess_navbar(&$variables) {
  // Get a link to the front page.
  $variables['front_page'] = url();

  // Add the site name to the template.
  $variables['site_name'] = (theme_get_setting('toggle_name') ? filter_xss_admin(variable_get('site_name', 'Restaurant')) : '');

  // Add the logo to the template.
  $variables['logo'] = theme('image', array('path' => theme_get_setting('logo')));

  // Format and add main menu to template.
  $variables['main_menu'] = menu_tree(variable_get('menu_main_links_source', 'main-menu'));
  $variables['main_menu']['#theme_wrappers'] = array('menu_tree__navbar_nav');

  $variables['reservation_link'] = '';
  if (module_exists('restaurant_reservation')) {
    $variables['reservation_link'] = l(t('Make a Reservation'), 'reservation', array(
      'attributes' => array(
        'class' => array('btn', 'btn-success', 'btn-reservation'),
      )
    ));
  }
}

/**
 * template_preprocess_page_header().
 * @ingroup themeable
 */
function template_preprocess_page_header(&$variables) {
  // If title is not provided, default to page title.
  if (!isset($variables['title'])) {
    $variables['title'] = drupal_get_title();
  }
}

/**
 * Implements hook_preprocess_social_widget().
 * @ingroup themeable
 */
function template_preprocess_social_widget(&$variables) {
  $networks = restaurant_base_get_social_networks();
  $variables['links'] = array();

  // Format and show links.
  foreach ($networks as $name => $network) {
    if (isset($variables['networks']['show_' . $name])) {
      if ($variables['networks']['show_' . $name]) {
        $button_text = $variables['networks'][$name . '_button_text'];
        $link = $network['default'];
        $button = l($button_text, $link, array(
          'attributes' => array(
            'class' => array('btn', 'btn-lg', 'btn-default', 'btn-' . $name),
          ),
        ));

        $variables['links'][] = array('#markup' => $button);
      }
    }
  }
}