<?php
// Plugin definition
$plugin = array(
  'title' => t('Layout 1col'),
  'icon' => 'layout-1col.png',
  'category' => t('Restaurant'),
  'theme' => 'layout_1col',
  'regions' => array(
    'header' => t('Header'),
    'contentmain1' => t('Content 1'),
    'contentmain2' => t('Content 2'),
    'contentmain3_left' => t('Content 3 Left'),
    'contentmain3_right' => t('Content 3 Right'),
    'full_width_1' => t('Full Width 1'),
    'full_width_2' => t('Full Width 2'),
  ),
);
