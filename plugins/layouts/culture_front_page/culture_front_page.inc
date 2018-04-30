<?php

$plugin['culture_front_page'] = array(
  'title' => t('easyOPAC Culture default layout'),
  'category'  => 'Culture',
  'icon' => 'culture_front_page.png',
  'theme' => 'culture_front_page',
  'css' => 'culture_front_page.css',
  'regions' => array(
    's1_r_01_100'   => t('Section 1 - Row 01 (100%)'),
    's2_r_01_066'   => t('Section 2 - Row 01 (66%)'),
    's2_r_01_033'   => t('Section 2 - Row 01 (33%)'),
  ),
  'regions_image_styles' => array(),
);
