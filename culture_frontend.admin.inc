<?php

/**
 * @file
 * Administration interface for Culture project features.
 */

/**
 * Culture frontend configuration form.
 */
function culture_frontend_admin_settings($form, &$form_state) {
  $types = array(
    'nodelist' => 'Ding Nodelist',
    'views' => 'Views',
    'ding_event_calendar' => 'Ding Event Calendar',
  );

  $form['culture_frontend_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Domain module integration'),
    '#description' => t('Here you can enable Domain Module integration for: Ding Nodelist, Views, Ding Event Calendar and control this for each enabled domain separately.'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );

  $domains = domain_domains();

  foreach ($domains as $domain) {

    $form['culture_frontend_settings'][$domain['subdomain']] = array(
      '#type' => 'fieldset',
      '#title' => $domain['subdomain'],
      '#collapsible' => TRUE,
    );

    foreach ($types as $key => $name) {
      $form['culture_frontend_settings'][$domain['subdomain']]['culture_frontend_enable_' . $key . '_domain_' . $domain['domain_id']] = [
        '#type' => 'checkbox',
        '#title' => t('Enable !name integration.', ['!name' => $name]),
        '#default_value' => variable_get('culture_frontend_enable_' . $key . '_domain_' . $domain['domain_id'], FALSE),
      ];
    }
  }

  return system_settings_form($form);
}
