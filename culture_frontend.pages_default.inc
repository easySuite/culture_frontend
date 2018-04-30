<?php
/**
 * @file
 * culture_frontend.pages_default.inc
 */

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
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_culture_frontpage__panel';
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
    'title_length' => 25,
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
    'unique_id' => 'pane-15250829720176',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7be97b8f-a72e-4e22-84ef-a67426e16b35';
  $display->content['new-7be97b8f-a72e-4e22-84ef-a67426e16b35'] = $pane;
  $display->panels['s1_r_01_100'][0] = 'new-7be97b8f-a72e-4e22-84ef-a67426e16b35';
  $pane = new stdClass();
  $pane->pid = 'new-e179d240-c1cb-4925-99aa-5a695dc63f36';
  $pane->panel = 's2_r_01_033';
  $pane->type = 'block';
  $pane->subtype = 'ding_event_calendar-ding-event-calendar';
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
  $pane->shown = TRUE;
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
  $pane->pid = 'new-916c621b-7d9a-4a34-9d84-9da7c423a4e8';
  $pane->panel = 's2_r_01_066';
  $pane->type = 'ding_nodelist';
  $pane->subtype = 'ding_nodelist';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'list_type' => 'all',
    'title_length' => 25,
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
    'limit' => '4',
    'more_links' => array(),
    'override_title_text' => '',
    'selected_nodes' => array(),
    'sort_field' => 'sticky',
    'sort_order' => 'asc',
    'taxonomy_filters' => array(),
    'unique_id' => 'pane-15250830563206',
    'widget_type' => 'taxonomy',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '916c621b-7d9a-4a34-9d84-9da7c423a4e8';
  $display->content['new-916c621b-7d9a-4a34-9d84-9da7c423a4e8'] = $pane;
  $display->panels['s2_r_01_066'][0] = 'new-916c621b-7d9a-4a34-9d84-9da7c423a4e8';
  $pane = new stdClass();
  $pane->pid = 'new-b6c9ff00-9608-4da3-a34e-b4b1ab3dced5';
  $pane->panel = 's2_r_01_066';
  $pane->type = 'block';
  $pane->subtype = 'instagram_block-instagram_block';
  $pane->shown = TRUE;
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b6c9ff00-9608-4da3-a34e-b4b1ab3dced5';
  $display->content['new-b6c9ff00-9608-4da3-a34e-b4b1ab3dced5'] = $pane;
  $display->panels['s2_r_01_066'][1] = 'new-b6c9ff00-9608-4da3-a34e-b4b1ab3dced5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['culture_frontpage'] = $page;

  return $pages;

}
