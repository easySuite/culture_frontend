<?php

/**
 * @file
 * Custom ding_event list filtration functionality.
 */

$plugin = [
  'single' => TRUE,
  'title' => t('Quick buttons'),
  'description' => t('Filter events by: Tommorow, Next weekend, Top events'),
  'category' => t('Culture'),
  'render callback' => 'culture_frontend_quick_buttons_renderer',
  'defaults' => [],
];

/**
 * Block renderer.
 */
function culture_frontend_quick_buttons_renderer($subtype, $conf, $args, $contexts) {
  $block = new stdClass();

  $display_mode = !empty($conf['quick_buttons_display_mode']) ? $conf['quick_buttons_display_mode'] : 0;

  $tomorrow = new DateTime('tomorrow');
  $saturday = strtotime('saturday');
  $saturday = date('d-m-Y', $saturday);
  $sunday = strtotime('sunday');
  $sunday = date('d-m-Y', $sunday);

  $element = [
    '#type' => 'container',
    '#attributes' => [
      'class' => 'container',
    ],
  ];

  $element['filters'] = [
    '#type' => 'container',
    '#attributes' => [
      'class' => 'row align-items-center filters-group',
    ],
  ];

  $element['filters']['label'] = [
    '#type' => 'markup',
    '#markup' => '<div class="label col-sm-12 col-md">' . t('Quick access:') . '</div>',
  ];

  $filters = [
    'tomorrow' => [
      'wrapper_class' => 'events-tomorrow',
      'label' => t('Events tomorrow'),
      'id' => 'events-tomorrow',
      'attached_data' => [
        'tomorrow' => [
          'date_start' => $tomorrow->format('d-m-Y'),
          'date_end' => $tomorrow->format('d-m-Y'),
        ],
      ],
    ],
    'next-weekend' => [
      'wrapper_class' => 'events-next_weekend',
      'label' => t('Events next weekend'),
      'id' => 'events-next_weekend',
      'attached_data' => [
        'next_weekend' => [
          'date_start' => $saturday,
          'date_end' => $sunday,
        ],
      ],
    ],
    'top-events' => [
      'wrapper_class' => 'top_events',
      'label' => t('Top events'),
      'id' => 'events-top_events',
      'attached_data' => [
        'top_events' => [
          'today' => date('d-m-Y'),
        ],
      ],
    ],
  ];

  foreach ($filters as $key => $filter) {
    $element['filters'][$key] = [
      '#prefix' => "<div class='{$filter['wrapper_class']} col-sm-12 col-md'>",
      '#suffix' => '</div>',
      '#type' => 'container',
      $key => [
        '#type' => $display_mode == 0 ? 'link' : 'checkbox',
        '#title' => $filter['label'],
        '#attributes' => [
          'id' => $filter['id'],
        ],
        '#attached' => [
          'js' => [
            [
              'data' => [
                'culture_frontend' => $filter['attached_data']
              ],
              'type' => 'setting',
            ],
          ],
        ],
      ],
    ];

    if ($display_mode === 0) {
      $element['filters'][$key][$key]['#href'] = url('#');
      $element['filters'][$key][$key]['#attributes']['class'] = ['btn', 'btn-success'];
    }
    else {
      $element['filters'][$key][$key]['#title_display'] = 'wraplabel';
      $element['filters'][$key][$key]['#theme_wrappers'] = ['quick_buttons_wraplabel'];
      $element['filters'][$key][$key]['#attributes']['class'] = ['quick-checkbox'];
    }
  }

  $block->content = drupal_render($element);
  return $block;
}

/**
 * Custom settings form.
 */
function culture_frontend_quick_buttons_content_type_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];
  $options = [
    0 => t('Buttons'),
    1 => t('Checkboxes'),
  ];

  $form['quick_buttons_display_mode'] = [
    '#type' => 'radios',
    '#title' => t('Quick Buttons Display Mode'),
    '#options' => $options,
    '#default_value' => isset($conf['quick_buttons_display_mode']) ? $conf['quick_buttons_display_mode'] : 0,
  ];
  return $form;
}

/**
 * Custom settings form submit.
 */
function culture_frontend_quick_buttons_content_type_edit_form_submit($form, &$form_state) {
  $form_state['conf']['quick_buttons_display_mode'] = $form_state['values']['quick_buttons_display_mode'];
}
