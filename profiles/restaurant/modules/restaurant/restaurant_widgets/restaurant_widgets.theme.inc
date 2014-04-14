<?php
/**
 * @file
 * Theme and preprocess functions for the Restaurant Widgets feature.
 */

/**
 * Implements hook_prepocess().
 */
function restaurant_widgets_preprocess_fieldable_panels_pane(&$variables) {
  $pane = $variables['elements']['#element'];
  $variables['pane'] = $pane;
  $variables['attributes_array']['style'] = '';

  // Add bg_color as a style.
  if (isset($variables['field_page_banner_bg_color'])) {
    $bg_color = $variables['field_page_banner_bg_color'][0]['rgb'];
    $variables['attributes_array']['style'] .= 'background-color: ' . $bg_color . ';';
    
    // Do not render bg color.
    $variables['content']['field_page_banner_bg_color']['#access'] = FALSE;
  }

  // Add text_color as a style.
  if (isset($variables['field_page_banner_text_color'])) {
    $text_color = $variables['field_page_banner_text_color'][0]['rgb'];
    $variables['attributes_array']['style'] .= 'color: ' . $text_color . ';';
    
    // Do not render bg color.
    $variables['content']['field_page_banner_text_color']['#access'] = FALSE;
  }

  // Add image as background image.
  if (isset($variables['field_page_banner_image'])) {
    $bg_image_url = file_create_url($variables['field_page_banner_image'][0]['uri']);
    $variables['attributes_array']['style'] .= 'background-image: url("' . $bg_image_url . '");';
    $variables['attributes_array']['style'] .= 'background-size: cover;';

    // Do not render image.
    $variables['content']['field_page_banner_image']['#access'] = FALSE;
  }

  // Display links as buttons.
  if (isset($variables['field_page_banner_links'])) {
    foreach (element_children($variables['content']['field_page_banner_links']) as $key) {
      $link = &$variables['content']['field_page_banner_links'][$key];

      // Default button class
      $btn_class = 'btn-default';

      // Allow custom classes to be set using "title|class".
      $title = $link['#element']['title'];
      if (preg_match("/\|/", $title)) {
        $chunks = explode("|", $title);
        $link['#element']['title'] = $chunks[0];
        $btn_class = trim($chunks[1]);

        // Prefix with btn- if not set.
        if (!preg_match("/^btn\-/", $btn_class)) {
          $btn_class = 'btn-' . $btn_class;
        }
      }

      // Add btn classes.
      $link['#element']['attributes']['class'] = 'btn btn-lg ' . $btn_class;
    }
  }

  // Add type as class.
  if (isset($variables['field_page_banner_type'])) {
    $variables['classes_array'][] = $variables['field_page_banner_type'][0]['value'];

    // Do not render type.
    $variables['content']['field_page_banner_type']['#access'] = FALSE;
  }

  // Add width.
  $variables['width'] = '';
  if (isset($variables['field_page_banner_width'])) {
    $variables['width'] = $variables['field_page_banner_width'][0]['value'];

    // Do not render width.
    $variables['content']['field_page_banner_width']['#access'] = FALSE;
  }
}
