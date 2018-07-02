<?php

/**
 * @file
 * Represents field definitions and implementation of field hooks.
 */

/**
 * Implements hook_field_info().
 */
function culture_frontend_field_info() {
  return array(
    'culture_frontend_lists_control' => array(
      'label' => t('Culture: Lists control'),
      'description' => t('Add options for editors to control lists displayed under event content.'),
      'default_widget' => 'culture_frontend_control_widget_default',
      'default_formatter' => 'culture_frontend_control_formatter_default',
    ),
  );
}

/**
 * Implements hook_field_validate().
 */
function culture_frontend_field_validate($entity_type, $entity, $field, $instance, $langcode, $items, &$errors) {
}

/**
 * Implements hook_field_is_empty().
 */
function culture_frontend_field_is_empty($item, $field) {
  return empty($item);
}

/**
 * Implements hook_field_formatter_info().
 */
function culture_frontend_field_formatter_info() {
  return array(
    'culture_frontend_control_formatter_default' => array(
      'label' => t('Default'),
      'field types' => array(
        'culture_frontend_lists_control',
      ),
      'settings' => array(),
    ),
  );
}

/**
 * Implements hook_field_formatter_view().
 */
function culture_frontend_field_formatter_view($entity_type, $entity, $field, $instance, $langcode, $items, $display) {
  $element = array();
  if (!empty($items)) {
    switch ($display['type']) {
      case 'culture_frontend_control_formatter_default':
        $options = $entity->field_culture_lists_control[LANGUAGE_NONE][0]['lists_options'];
        drupal_add_js(drupal_get_path('module', 'culture_frontend') . '/js/event_node.culture_frontend.js', 'file');

        foreach ($options as $key => $option) {
          switch ($key) {
            case 'similar':
              if ($option['check'] == 1) {
                $output = _culture_frontend_views_result($key, array($entity->nid), $option['amount']);
                $element[0][] = $output;
              }
              break;

            case 'category':
              if ($option['check'] == 1) {
                $category = $entity->field_ding_event_category['und'][0]['tid'];
                $output = _culture_frontend_views_result($key, array($category), $option['amount']);
                $element[0][] = $output;
              }
              break;

            case 'day':
              if ($option['check'] == 1) {
                $date = $entity->field_ding_event_date['und'][0]['value'];
                $date = format_date(strtotime($date), 'custom', 'Y-m-d');
                $output = _culture_frontend_views_result($key, array($date), $option['amount']);
                $element[0][] = $output;
              }
              break;

            case 'library':
              if ($option['check'] == 1) {
                $library = $entity->og_group_ref['und'][0]['target_id'];
                $output = _culture_frontend_views_result($key, array($library), $option['amount']);
                $element[0][] = $output;
              }
              break;

            case 'manually':
              if ($option['check'] == 1) {
                $headline = '';
                if (!empty($options['manually']['nids']['fieldset_multifield_nids']['headline'])) {
                  $headline = $options['manually']['nids']['fieldset_multifield_nids']['headline'];
                }
                $saved_values = $options['manually']['nids']['fieldset_multifield_nids']['multifield_nids'];
                $nids = array();
                foreach ($saved_values as $saved_value) {
                  preg_match('/^.*?\[[^\d]*(\d+)[^\d]*\].*$/', $saved_value['value'], $matches);
                  $nids[] = $matches[1];
                }
                $args = array((count($nids) > 1) ? implode('+', $nids) : array_shift($nids));
                $output = _culture_frontend_views_result($key, $args, count($nids), $headline);
                $element[0][] = $output;
              }
              break;
          }
        }
        break;
    }
  }
  return $element;
}

/**
 * Helper function for loading view and return renderable array.
 *
 * @param string $type
 *   List type.
 * @param array $args
 *   Views display arguments.
 * @param int $amount
 *   Amount of items to be shown.
 * @param bool|string $headline
 *   Adds headline to 'manually' list.
 *
 * @return array
 *   Renderable array.
 */
function _culture_frontend_views_result($type, array $args, $amount, $headline = FALSE) {
  $view = views_get_view('culture_events');
  $view->set_display('culture_events_' . $type);
  if (!empty($headline)) {
    $view->display[$view->current_display]->handler->options["title"] = $headline;
  }
  $view->set_arguments($args);
  $view->set_items_per_page($amount);
  $view->execute();
  $rendered = $view->preview();

  $output = array(
    '#type' => 'html_tag',
    '#tag' => 'div',
    '#attributes' => array(
      'class' => array('controlled-' . $type . '-list'),
    ),
    '#value' => $rendered,
  );

  return $output;
}

/**
 * Implements hook_field_widget_info().
 */
function culture_frontend_field_widget_info() {
  return array(
    'culture_frontend_control_widget_default' => array(
      'label' => t('Default'),
      'field types' => array('culture_frontend_lists_control'),
      'behaviors' => array(
        'multiple values' => FIELD_BEHAVIOR_DEFAULT,
        'default value' => FIELD_BEHAVIOR_NONE,
      ),
    ),
  );
}

/**
 * Implements hook_field_widget_form().
 */
function culture_frontend_field_widget_form(&$form, &$form_state, $field, $instance, $langcode, $items, $delta, $element) {
  switch ($instance['widget']['type']) {
    case 'culture_frontend_control_widget_default':
      $element['wrapper'] = array(
        '#type' => 'fieldset',
        '#title' => t('Which lists do you want on this page?'),
        '#collapsible' => FALSE,
      );

      $options = array(
        'similar' => t('Similar events'),
        'category' => t('Other events in same category'),
        'day' => t('Other events the same day'),
        'library' => t('Other events in the same library CT'),
        'manually' => t('Manually chosen nodes'),
      );

      foreach ($options as $key => $option) {
        $item = array();
        if (!empty($items[$delta]['lists_options'])) {
          $item = $items[$delta]['lists_options'][$key];
        }

        $element['wrapper']['lists_options'][$key]['check'] = array(
          '#type' => 'checkbox',
          '#title' => $option,
          '#default_value' => !empty($item['check']) ? 1 : 0,
        );

        if ($key != 'manually') {
          $element['wrapper']['lists_options'][$key]['amount'] = array(
            '#type' => 'textfield',
            '#title' => t('Amount'),
            '#default_value' => !empty($item['amount']) ? $item['amount'] : 3,
            '#required' => TRUE,
            '#states' => array(
              "visible" => array(
                ":input[name='field_culture_lists_control[und][0][wrapper][lists_options][$key][check]']" => array("checked" => TRUE),
              ),
            ),
          );
        }
        else {
          $titles = array();
          if (!empty($item['nids']['fieldset_multifield_nids']['multifield_nids'])) {
            foreach ($item['nids']['fieldset_multifield_nids']['multifield_nids'] as $item) {
              $titles[] = $item['value'];
            }
          }

          $element['wrapper']['lists_options'][$key]['nids'] = array(
            '#type' => 'textfield',
            '#title' => t('Node title'),
            '#default_value' => !empty($item['nids']) ? $item['nids'] : '',
            '#autocomplete_path' => 'culture_events/lists_options/autocomplete',
            '#number' => !empty($item['nids']['fieldset_multifield_nids']['multifield_nids']) ? count($item['nids']['fieldset_multifield_nids']['multifield_nids']) : '1',
            '#add_more' => TRUE,
            '#collapsible' => TRUE,
            '#collapsed' => FALSE,
            '#default_values' => !empty($titles) ? $titles : array(),
          );
        }
      }
      break;
  }

  return $element;
}

/**
 * Implements hook_field_presave().
 */
function culture_frontend_field_presave($entity_type, $entity, $field, $instance, $langcode, &$items) {
  switch ($instance['widget']['type']) {
    case 'culture_frontend_control_widget_default':
      foreach ($items as $delta => &$item) {
        $item = (!empty($item['wrapper'])) ? $item['wrapper'] : $item;
        $item['lists_options'] = serialize($item['lists_options']);
      }
      break;
  }
}

/**
 * Implements hook_field_load().
 */
function culture_frontend_field_load($entity_type, $entities, $field, $instances, $langcode, &$items, $age) {
  foreach ($entities as $id => $entity) {
    foreach ($items[$id] as $delta => $item) {
      if ($field['type'] == 'culture_frontend_lists_control') {
        $items[$id][$delta]['lists_options'] = unserialize($items[$id][$delta]['lists_options']);
      }
    }
  }
}
