<?php
/**
 * @file
 * restaurant_widgets.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function restaurant_widgets_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'fieldable_panels_pane-page_banner-field_page_banner_bg_color'
  $field_instances['fieldable_panels_pane-page_banner-field_page_banner_bg_color'] = array(
    'bundle' => 'page_banner',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Default background color if image is not present.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'colorfield',
        'settings' => array(
          'display_hash' => TRUE,
        ),
        'type' => 'colorfield_raw_rgb',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_page_banner_bg_color',
    'label' => 'Background color',
    'required' => 0,
    'settings' => array(
      'colorfield_colorpicker_type' => 'farbtastic',
      'colorfield_enable_colorpicker' => TRUE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'colorfield',
      'settings' => array(
        'colorfield_options' => array(
          'colorfield_colorpicker_type' => 'farbtastic',
          'colorfield_enable_colorpicker' => 1,
        ),
      ),
      'type' => 'colorfield_unified_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-page_banner-field_page_banner_image'
  $field_instances['fieldable_panels_pane-page_banner-field_page_banner_image'] = array(
    'bundle' => 'page_banner',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_page_banner_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'banners',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
          'vimeo' => 0,
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 0,
          'youtube' => 0,
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-page_banner-field_page_banner_links'
  $field_instances['fieldable_panels_pane-page_banner-field_page_banner_links'] = array(
    'bundle' => 'page_banner',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Links to display in the banner. You can add custom button classes to links using the format <em>title|class</em> in the title field. Example: Make a Reservation|btn-success.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_page_banner_links',
    'label' => 'Links',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'rel_remove' => 'default',
      'title' => 'required',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-page_banner-field_page_banner_text'
  $field_instances['fieldable_panels_pane-page_banner-field_page_banner_text'] = array(
    'bundle' => 'page_banner',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Text to display in the page banner.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_page_banner_text',
    'label' => 'Text',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-page_banner-field_page_banner_text_color'
  $field_instances['fieldable_panels_pane-page_banner-field_page_banner_text_color'] = array(
    'bundle' => 'page_banner',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'colorfield',
        'settings' => array(
          'height' => 20,
          'width' => 20,
        ),
        'type' => 'colorfield_color_swatch',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_page_banner_text_color',
    'label' => 'Text color',
    'required' => 1,
    'settings' => array(
      'colorfield_colorpicker_type' => 'farbtastic',
      'colorfield_enable_colorpicker' => TRUE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'colorfield',
      'settings' => array(
        'colorfield_options' => array(
          'colorfield_colorpicker_type' => 'farbtastic',
          'colorfield_enable_colorpicker' => 1,
        ),
      ),
      'type' => 'colorfield_unified_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-page_banner-field_page_banner_type'
  $field_instances['fieldable_panels_pane-page_banner-field_page_banner_type'] = array(
    'bundle' => 'page_banner',
    'default_value' => array(
      0 => array(
        'value' => 'jumbotron',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_page_banner_type',
    'label' => 'Type',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-page_banner-field_page_banner_width'
  $field_instances['fieldable_panels_pane-page_banner-field_page_banner_width'] = array(
    'bundle' => 'page_banner',
    'default_value' => array(
      0 => array(
        'value' => 'fixed',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_page_banner_width',
    'label' => 'Width',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 7,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Background color');
  t('Default background color if image is not present.');
  t('Image');
  t('Links');
  t('Links to display in the banner. You can add custom button classes to links using the format <em>title|class</em> in the title field. Example: Make a Reservation|btn-success.');
  t('Text');
  t('Text color');
  t('Text to display in the page banner.');
  t('Type');
  t('Width');

  return $field_instances;
}
