<?php
// Plugin definition
$plugin = array(
  'title' => t('Site Layout'),
  'icon' => 'site-layout.png',
  'category' => t('Restaurant'),
  'theme' => 'site_layout',
  'regions' => array(
    'navigation' => t('Navigation'),
    'header' => t('Header'),
    'top' => t('Top'),
    'contentmain' => t('Content'),
    'footer_col1' => t('Footer column 1'),
    'footer_col2' => t('Footer column 2'),
  ),
);
