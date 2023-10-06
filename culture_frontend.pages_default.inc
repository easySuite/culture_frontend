<?php
/**
 * @file
 * culture_frontend.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function culture_frontend_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__culture-site-template';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -2;
  $handler->conf = array(
    'title' => 'Culture site template',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 0,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 1,
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'name' => 'culture-site-template',
  );
  $display = new panels_display();
  $display->layout = 'ding2_site_template';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'branding_top' => NULL,
      'header' => NULL,
      'content' => NULL,
      'footer' => NULL,
      'branding_bottom' => NULL,
      'branding' => NULL,
      'bottom' => NULL,
      'navigation' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '92a45db0-147b-411f-8833-8377a52f5198';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e999c9e4-00d5-4222-8690-5c8e6f3d5339';
    $pane->panel = 'bottom';
    $pane->type = 'block';
    $pane->subtype = 'block-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Kontakt',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e999c9e4-00d5-4222-8690-5c8e6f3d5339';
    $display->content['new-e999c9e4-00d5-4222-8690-5c8e6f3d5339'] = $pane;
    $display->panels['bottom'][0] = 'new-e999c9e4-00d5-4222-8690-5c8e6f3d5339';
    $pane = new stdClass();
    $pane->pid = 'new-3202a330-fa71-44f2-be0a-265ed734b321';
    $pane->panel = 'branding';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3202a330-fa71-44f2-be0a-265ed734b321';
    $display->content['new-3202a330-fa71-44f2-be0a-265ed734b321'] = $pane;
    $display->panels['branding'][0] = 'new-3202a330-fa71-44f2-be0a-265ed734b321';
    $pane = new stdClass();
    $pane->pid = 'new-17314403-05f6-4e56-b1d8-62983c009022';
    $pane->panel = 'branding';
    $pane->type = 'block';
    $pane->subtype = 'lang_dropdown-language';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '17314403-05f6-4e56-b1d8-62983c009022';
    $display->content['new-17314403-05f6-4e56-b1d8-62983c009022'] = $pane;
    $display->panels['branding'][1] = 'new-17314403-05f6-4e56-b1d8-62983c009022';
    $pane = new stdClass();
    $pane->pid = 'new-3c879038-1011-4427-8465-f638e18375e1';
    $pane->panel = 'branding';
    $pane->type = 'pane_header';
    $pane->subtype = 'pane_header';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '3c879038-1011-4427-8465-f638e18375e1';
    $display->content['new-3c879038-1011-4427-8465-f638e18375e1'] = $pane;
    $display->panels['branding'][2] = 'new-3c879038-1011-4427-8465-f638e18375e1';
    $pane = new stdClass();
    $pane->pid = 'new-1769a64d-2cbe-490d-87aa-a2c3ee082997';
    $pane->panel = 'content';
    $pane->type = 'page_messages';
    $pane->subtype = 'page_messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'system-messages',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '1769a64d-2cbe-490d-87aa-a2c3ee082997';
    $display->content['new-1769a64d-2cbe-490d-87aa-a2c3ee082997'] = $pane;
    $display->panels['content'][0] = 'new-1769a64d-2cbe-490d-87aa-a2c3ee082997';
    $pane = new stdClass();
    $pane->pid = 'new-76338aa5-3ee9-4256-9414-eab9979db07b';
    $pane->panel = 'content';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        1 => array(
          'name' => 'external_user',
          'settings' => NULL,
          'context' => array(
            0 => 'logged-in-user',
          ),
          'not' => TRUE,
        ),
        2 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'user/*',
          ),
          'context' => 'empty',
          'not' => TRUE,
        ),
      ),
      'logic' => 'or',
    );
    $pane->configuration = array(
      'type' => 'both',
      'id' => 'tabs',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '76338aa5-3ee9-4256-9414-eab9979db07b';
    $display->content['new-76338aa5-3ee9-4256-9414-eab9979db07b'] = $pane;
    $display->panels['content'][1] = 'new-76338aa5-3ee9-4256-9414-eab9979db07b';
    $pane = new stdClass();
    $pane->pid = 'new-9ba65b89-2e50-4a5e-80f5-b68ad7f8c554';
    $pane->panel = 'content';
    $pane->type = 'block';
    $pane->subtype = 'facebookshare-facebook_share';
    $pane->shown = FALSE;
    $pane->access = array(
      'logic' => 'or',
      'plugins' => array(
        0 => array(
          'name' => 'front',
          'settings' => NULL,
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '9ba65b89-2e50-4a5e-80f5-b68ad7f8c554';
    $display->content['new-9ba65b89-2e50-4a5e-80f5-b68ad7f8c554'] = $pane;
    $display->panels['content'][2] = 'new-9ba65b89-2e50-4a5e-80f5-b68ad7f8c554';
    $pane = new stdClass();
    $pane->pid = 'new-4637ed6a-8c15-46bb-ae3b-4de4089e860d';
    $pane->panel = 'content';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = '';
    $pane->uuid = '4637ed6a-8c15-46bb-ae3b-4de4089e860d';
    $display->content['new-4637ed6a-8c15-46bb-ae3b-4de4089e860d'] = $pane;
    $display->panels['content'][3] = 'new-4637ed6a-8c15-46bb-ae3b-4de4089e860d';
    $pane = new stdClass();
    $pane->pid = 'new-fd6dbb4f-c7b5-4881-96d2-769a6c16bfc2';
    $pane->panel = 'footer';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-footer-menu-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'attachment-first',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = 'fd6dbb4f-c7b5-4881-96d2-769a6c16bfc2';
    $display->content['new-fd6dbb4f-c7b5-4881-96d2-769a6c16bfc2'] = $pane;
    $display->panels['footer'][0] = 'new-fd6dbb4f-c7b5-4881-96d2-769a6c16bfc2';
    $pane = new stdClass();
    $pane->pid = 'new-3a72e819-3274-4d12-8fe3-414c0cbc3151';
    $pane->panel = 'footer';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-footer-menu-2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'attachment-second',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = '3a72e819-3274-4d12-8fe3-414c0cbc3151';
    $display->content['new-3a72e819-3274-4d12-8fe3-414c0cbc3151'] = $pane;
    $display->panels['footer'][1] = 'new-3a72e819-3274-4d12-8fe3-414c0cbc3151';
    $pane = new stdClass();
    $pane->pid = 'new-d9877e3c-cae9-4067-99af-305cb0e70bf9';
    $pane->panel = 'footer';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-footer-menu-3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'attachment-third',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = '';
    $pane->uuid = 'd9877e3c-cae9-4067-99af-305cb0e70bf9';
    $display->content['new-d9877e3c-cae9-4067-99af-305cb0e70bf9'] = $pane;
    $display->panels['footer'][2] = 'new-d9877e3c-cae9-4067-99af-305cb0e70bf9';
    $pane = new stdClass();
    $pane->pid = 'new-d59734fe-4c31-4b3c-af53-5c2bad02f9cf';
    $pane->panel = 'footer';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-footer-menu-4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'attachment-fourth',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = '';
    $pane->uuid = 'd59734fe-4c31-4b3c-af53-5c2bad02f9cf';
    $display->content['new-d59734fe-4c31-4b3c-af53-5c2bad02f9cf'] = $pane;
    $display->panels['footer'][3] = 'new-d59734fe-4c31-4b3c-af53-5c2bad02f9cf';
    $pane = new stdClass();
    $pane->pid = 'new-07dec5bc-64c2-4632-ac67-72598e98d159';
    $pane->panel = 'footer';
    $pane->type = 'social_links';
    $pane->subtype = 'social_links';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '07dec5bc-64c2-4632-ac67-72598e98d159';
    $display->content['new-07dec5bc-64c2-4632-ac67-72598e98d159'] = $pane;
    $display->panels['footer'][4] = 'new-07dec5bc-64c2-4632-ac67-72598e98d159';
    $pane = new stdClass();
    $pane->pid = 'new-94a239e5-00e0-4807-917f-df52c53405e7';
    $pane->panel = 'navigation';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '94a239e5-00e0-4807-917f-df52c53405e7';
    $display->content['new-94a239e5-00e0-4807-917f-df52c53405e7'] = $pane;
    $display->panels['navigation'][0] = 'new-94a239e5-00e0-4807-917f-df52c53405e7';
    $pane = new stdClass();
    $pane->pid = 'new-e0e21892-3602-4e8f-8598-3dd63b46b76a';
    $pane->panel = 'navigation';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-main_menu_second_level';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e0e21892-3602-4e8f-8598-3dd63b46b76a';
    $display->content['new-e0e21892-3602-4e8f-8598-3dd63b46b76a'] = $pane;
    $display->panels['navigation'][1] = 'new-e0e21892-3602-4e8f-8598-3dd63b46b76a';
    $pane = new stdClass();
    $pane->pid = 'new-f06a4c37-1ed2-4a64-8502-7b8d4d0619b0';
    $pane->panel = 'navigation';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'f06a4c37-1ed2-4a64-8502-7b8d4d0619b0';
    $display->content['new-f06a4c37-1ed2-4a64-8502-7b8d4d0619b0'] = $pane;
    $display->panels['navigation'][2] = 'new-f06a4c37-1ed2-4a64-8502-7b8d4d0619b0';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template__culture-site-template'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function culture_frontend_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'culture_frontpage';
  $page->task = 'page';
  $page->admin_title = 'Culture frontpage';
  $page->admin_description = '';
  $page->path = 'culture_frontpage';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_culture_frontpage__panel';
  $handler->task = 'page';
  $handler->subtask = 'culture_frontpage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'culture_front_page';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      's1_r_01_100' => NULL,
      's2_r_01_066' => NULL,
      's2_r_01_033' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f4b16f13-df53-4a39-9a14-222c621ea01a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7be97b8f-a72e-4e22-84ef-a67426e16b35';
    $pane->panel = 's1_r_01_100';
    $pane->type = 'ding_nodelist';
    $pane->subtype = 'ding_nodelist';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'list_type' => 'all',
      'title_length' => 50,
      'body_length' => 100,
      'dynamic_switch' => 0,
      'nodes_switch' => 0,
      'autoscroll_delay' => '3000',
      'columns' => 'full',
      'content_filter_promoted' => 0,
      'content_filter_date' => 0,
      'content_types' => array(
        'ding_event' => 'ding_event',
      ),
      'limit' => '3',
      'more_links' => array(),
      'override_title_text' => '',
      'selected_nodes' => array(),
      'sort_field' => '',
      'sort_order' => 'asc',
      'taxonomy_filters' => array(),
      'unique_id' => 'pane-16951590862312',
      'widget_type' => 'carousel',
      'item_template' => '',
      'display_mobile_image' => 0,
      'override_title' => 1,
      'override_title_heading' => 'h2',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '15',
        'granularity' => 'context',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7be97b8f-a72e-4e22-84ef-a67426e16b35';
    $display->content['new-7be97b8f-a72e-4e22-84ef-a67426e16b35'] = $pane;
    $display->panels['s1_r_01_100'][0] = 'new-7be97b8f-a72e-4e22-84ef-a67426e16b35';
    $pane = new stdClass();
    $pane->pid = 'new-0dfa37d0-188f-4658-be95-4c21edf6c1ae';
    $pane->panel = 's1_r_01_100';
    $pane->type = 'ding_nodelist';
    $pane->subtype = 'ding_nodelist';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'list_type' => 'all',
      'title_length' => 50,
      'body_length' => 100,
      'dynamic_switch' => 0,
      'nodes_switch' => 0,
      'autoscroll_delay' => '3000',
      'content_filter_promoted' => 0,
      'content_filter_date' => 0,
      'content_types' => array(
        'ding_event' => 'ding_event',
      ),
      'display_mobile_image' => 0,
      'limit' => '1',
      'more_links' => array(),
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'selected_nodes' => array(),
      'sort_field' => 'title',
      'sort_order' => 'asc',
      'taxonomy_filters' => array(),
      'unique_id' => 'pane-16951633071865',
      'widget_type' => 'carousel',
      'item_template' => '',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '1800',
        'granularity' => 'context',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0dfa37d0-188f-4658-be95-4c21edf6c1ae';
    $display->content['new-0dfa37d0-188f-4658-be95-4c21edf6c1ae'] = $pane;
    $display->panels['s1_r_01_100'][1] = 'new-0dfa37d0-188f-4658-be95-4c21edf6c1ae';
    $pane = new stdClass();
    $pane->pid = 'new-916c621b-7d9a-4a34-9d84-9da7c423a4e8';
    $pane->panel = 's1_r_01_100';
    $pane->type = 'ding_nodelist';
    $pane->subtype = 'ding_nodelist';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'list_type' => 'all',
      'title_length' => 50,
      'body_length' => 100,
      'dynamic_switch' => 0,
      'nodes_switch' => 0,
      'autoscroll_delay' => NULL,
      'columns' => 'full',
      'content_filter_promoted' => 0,
      'content_filter_date' => 0,
      'content_types' => array(
        'ding_event' => 'ding_event',
      ),
      'limit' => '10',
      'more_links' => array(),
      'override_title_text' => '',
      'selected_nodes' => array(),
      'sort_field' => 'sticky',
      'sort_order' => 'asc',
      'taxonomy_filters' => array(),
      'unique_id' => 'pane-16951627937108',
      'widget_type' => 'taxonomy',
      'item_template' => '',
      'display_mobile_image' => 0,
      'override_title' => 1,
      'override_title_heading' => 'h2',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '15',
        'granularity' => 'context',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '916c621b-7d9a-4a34-9d84-9da7c423a4e8';
    $display->content['new-916c621b-7d9a-4a34-9d84-9da7c423a4e8'] = $pane;
    $display->panels['s1_r_01_100'][2] = 'new-916c621b-7d9a-4a34-9d84-9da7c423a4e8';
    $pane = new stdClass();
    $pane->pid = 'new-e179d240-c1cb-4925-99aa-5a695dc63f36';
    $pane->panel = 's2_r_01_033';
    $pane->type = 'block';
    $pane->subtype = 'ding_event_calendar-ding-event-calendar';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => TRUE,
      'override_title_text' => '%title',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e179d240-c1cb-4925-99aa-5a695dc63f36';
    $display->content['new-e179d240-c1cb-4925-99aa-5a695dc63f36'] = $pane;
    $display->panels['s2_r_01_033'][0] = 'new-e179d240-c1cb-4925-99aa-5a695dc63f36';
    $pane = new stdClass();
    $pane->pid = 'new-3aa8e348-71c5-4b64-8fb0-0ca9208a6874';
    $pane->panel = 's2_r_01_033';
    $pane->type = 'campaign';
    $pane->subtype = 'campaign';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'ding_campaign_count' => 4,
      'ding_campaign_offset' => 0,
      'ding_campaign_style' => 'ding_campaign_full_width',
      'context' => array(
        0 => 'empty',
        1 => 'empty',
        2 => 'empty',
        3 => 'empty',
      ),
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3aa8e348-71c5-4b64-8fb0-0ca9208a6874';
    $display->content['new-3aa8e348-71c5-4b64-8fb0-0ca9208a6874'] = $pane;
    $display->panels['s2_r_01_033'][1] = 'new-3aa8e348-71c5-4b64-8fb0-0ca9208a6874';
    $pane = new stdClass();
    $pane->pid = 'new-b6c9ff00-9608-4da3-a34e-b4b1ab3dced5';
    $pane->panel = 's2_r_01_066';
    $pane->type = 'block';
    $pane->subtype = 'instagram_block-instagram_block';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b6c9ff00-9608-4da3-a34e-b4b1ab3dced5';
    $display->content['new-b6c9ff00-9608-4da3-a34e-b4b1ab3dced5'] = $pane;
    $display->panels['s2_r_01_066'][0] = 'new-b6c9ff00-9608-4da3-a34e-b4b1ab3dced5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['culture_frontpage'] = $page;

  return $pages;

}
