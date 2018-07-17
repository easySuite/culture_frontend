<?php

/**
 * @file
 * Custom ding_event list filtration functionality.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Quick buttons'),
  'description' => t('Filter events by: Tommorow, Next weekend, Top events'),
  'category' => t('Culture'),
  'render callback' => 'culture_frontend_quick_buttons_renderer',
  'defaults' => array(),
);

/**
 * Block renderer.
 */
function culture_frontend_quick_buttons_renderer($subtype, $conf, $args, $contexts) {
  $block = new stdClass();

  $element = array(
    '#type' => 'container',
    '#attributes' => array(
      'class' => 'container',
    ),
  );

  $element['filters'] = array(
    '#type' => 'container',
    '#attributes' => array(
      'class' => 'row align-items-center filters-group',
    ),
  );

  $element['filters']['label'] = array(
    '#type' => 'markup',
    '#markup' => '<div class="label col-sm-12 col-md">' . t('Quick access:') . '</div>',
  );

  // Process "tomorrow".
  $tomorrow = new DateTime('tomorrow');
  $element['filters']['tomorrow'] = array(
    '#prefix' => '<div class="events-tomorrow col-sm-12 col-md">',
    '#suffix' => '</div>',
    '#type' => 'container',
    'tommorow' => array(
      '#type' => 'link',
      '#title' => t('Events tomorrow'),
      '#href' => url('#'),
      '#attributes' => array(
        'id' => 'events-tomorrow',
        'class' => array(
          'btn',
          'btn-success',
        ),
      ),
      '#attached' => array(
        'js' => array(
          array(
            'data' => array(
              'culture_frontend' => array(
                'tommorow' => array(
                  'date_start' => $tomorrow->format('d-m-Y'),
                  'date_end' => $tomorrow->format('d-m-Y'),
                ),
              ),
            ),
            'type' => 'setting',
          ),
        ),
      ),
    ),
  );

  // Process "next weekend".
  $saturday = strtotime('saturday');
  $saturday = date('d-m-Y', $saturday);

  $sunday = strtotime('sunday');
  $sunday = date('d-m-Y', $sunday);

  $element['filters']['next-weekend'] = array(
    '#prefix' => '<div class="events-next_weekend col-sm-12 col-md">',
    '#suffix' => '</div>',
    '#type' => 'container',
    'nextweekend' => array(
      '#type' => 'link',
      '#title' => t('Events next weekend'),
      '#href' => url('#'),
      '#attributes' => array(
        'id' => 'events-next_weekend',
        'class' => array(
          'btn',
          'btn-success',
        ),
      ),
      '#attached' => array(
        'js' => array(
          array(
            'data' => array(
              'culture_frontend' => array(
                'next_weekend' => array(
                  'date_start' => $saturday,
                  'date_end' => $sunday,
                ),
              ),
            ),
            'type' => 'setting',
          ),
        ),
      ),
    ),
  );

  // Process "top events (sticky)".
  $element['filters']['top-events'] = array(
    '#prefix' => '<div class="top_events col-sm-12 col-md">',
    '#suffix' => '</div>',
    '#type' => 'container',
    'topevents' => array(
      '#type' => 'link',
      '#title' => t('Top events'),
      '#href' => url('#'),
      '#attributes' => array(
        'id' => 'events-top_events',
        'class' => array(
          'btn',
          'btn-success',
        ),
      ),
      '#attached' => array(
        'js' => array(
          array(
            'data' => array(
              'culture_frontend' => array(
                'top_events' => array(
                  'today' => date('d-m-Y'),
                ),
              ),
            ),
            'type' => 'setting',
          ),
        ),
      ),
    ),
  );

  $block->content = drupal_render($element);
  return $block;
}
