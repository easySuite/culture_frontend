<?php
/**
 * @file
 * culture_frontend.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function culture_frontend_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-ding_event-field_culture_lists_control'.
  $field_instances['node-ding_event-field_culture_lists_control'] = array(
    'bundle' => 'ding_event',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'alternative_layout_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'culture_frontend',
        'settings' => array(),
        'type' => 'culture_frontend_control_formatter_default',
        'weight' => 15,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser_highlight' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_culture_lists_control',
    'label' => 'Lists control',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'culture_frontend',
      'settings' => array(),
      'type' => 'culture_frontend_control_widget_default',
      'weight' => 41,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Lists control');

  return $field_instances;
}
