<?php
/**
 * @file
 * restaurant_slideshow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function restaurant_slideshow_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function restaurant_slideshow_image_default_styles() {
  $styles = array();

  // Exported image style: slideshow_full.
  $styles['slideshow_full'] = array(
    'name' => 'slideshow_full',
    'effects' => array(
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 620,
          'height' => 305,
        ),
        'weight' => 2,
      ),
    ),
    'label' => 'slideshow_full',
  );

  return $styles;
}
