<?php
/**
 * @file
 * weekhours_entity.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function weekhours_entity_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-weekhour-field_wh_datetime'
  $field_instances['node-weekhour-field_wh_datetime'] = array(
    'bundle' => 'weekhour',
    'deleted' => 0,
    'description' => 'Set the time to 00:00 for both start and end time for closing whole day.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_wh_datetime',
    'label' => 'Date/Time (weekhours)',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'Y/m/d - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-weekhour-field_wh_description'
  $field_instances['node-weekhour-field_wh_description'] = array(
    'bundle' => 'weekhour',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Type a description for this custom day, this should be less than 16 characters.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_wh_description',
    'label' => 'Description (weekhours)',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Date/Time (weekhours)');
  t('Description (weekhours)');
  t('Weekly Hour description');

  return $field_instances;
}
