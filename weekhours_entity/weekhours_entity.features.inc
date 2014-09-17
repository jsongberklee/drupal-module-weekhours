<?php
/**
 * @file
 * weekhours_entity.features.inc
 */

/**
 * Implements hook_node_info().
 */
function weekhours_entity_node_info() {
  $items = array(
    'weekhour' => array(
      'name' => t('Weekhour'),
      'base' => 'node_content',
      'description' => t('Holiday/Closed/Special hours for Weekly Open Hours module '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
