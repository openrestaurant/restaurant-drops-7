<?php
/**
 * @file
 * restaurant_widgets.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function restaurant_widgets_defaultconfig_features() {
  return array(
    'restaurant_widgets' => array(
      'field_default_fields' => 'field_default_fields',
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_field_default_fields().
 */
function restaurant_widgets_defaultconfig_field_default_fields() {
  $fields = array();

  // Exported field: 'fieldable_panels_pane-page_banner-field_page_banner_bg_color'.
  $fields['fieldable_panels_pane-page_banner-field_page_banner_bg_color'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_page_banner_bg_color',
      'foreign keys' => array(),
      'indexes' => array(
        'rgb' => array(
          0 => 'rgb',
        ),
      ),
      'locked' => 0,
      'module' => 'colorfield',
      'settings' => array(),
      'translatable' => 0,
      'type' => 'colorfield',
    ),
    'field_instance' => array(
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
    ),
  );

  // Exported field: 'fieldable_panels_pane-page_banner-field_page_banner_image'.
  $fields['fieldable_panels_pane-page_banner-field_page_banner_image'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_page_banner_image',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => 0,
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => 0,
      'type' => 'image',
    ),
    'field_instance' => array(
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
    ),
  );

  // Exported field: 'fieldable_panels_pane-page_banner-field_page_banner_links'.
  $fields['fieldable_panels_pane-page_banner-field_page_banner_links'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 3,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_page_banner_links',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'link',
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => 'default',
        ),
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'title' => 'optional',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 0,
      ),
      'translatable' => 0,
      'type' => 'link_field',
    ),
    'field_instance' => array(
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
    ),
  );

  // Exported field: 'fieldable_panels_pane-page_banner-field_page_banner_text'.
  $fields['fieldable_panels_pane-page_banner-field_page_banner_text'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_page_banner_text',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => 0,
      'module' => 'text',
      'settings' => array(),
      'translatable' => 0,
      'type' => 'text_long',
    ),
    'field_instance' => array(
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
  t('Text to display in the page banner.');

  return $fields;
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function restaurant_widgets_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create fieldable page_banner'.
  $permissions['create fieldable page_banner'] = array(
    'name' => 'create fieldable page_banner',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable page_banner'.
  $permissions['delete fieldable page_banner'] = array(
    'name' => 'delete fieldable page_banner',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable page_banner'.
  $permissions['edit fieldable page_banner'] = array(
    'name' => 'edit fieldable page_banner',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  return $permissions;
}
