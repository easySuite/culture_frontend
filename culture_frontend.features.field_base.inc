<?php
/**
 * @file
 * culture_frontend.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function culture_frontend_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_culture_lists_control'.
  $field_bases['field_culture_lists_control'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_culture_lists_control',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'culture_frontend',
    'settings' => array(
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'culture_frontend_lists_control',
  );

  return $field_bases;
}
