<?php
/**
 * @file
 * restaurant_blog.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function restaurant_blog_taxonomy_default_vocabularies() {
  return array(
    'blog_categories' => array(
      'name' => 'Blog Categories',
      'machine_name' => 'blog_categories',
      'description' => 'Use this taxonomy to organize blog posts',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'blog_tags' => array(
      'name' => 'Blog Tags',
      'machine_name' => 'blog_tags',
      'description' => 'Tags for blog posts',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
