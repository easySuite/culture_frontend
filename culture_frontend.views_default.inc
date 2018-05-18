<?php
/**
 * @file
 * culture_frontend.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function culture_frontend_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'culture_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Culture events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ding_event' => 'ding_event',
  );
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_ding_event_date.field_ding_event_date_value' => 'field_data_field_ding_event_date.field_ding_event_date_value',
    'field_data_field_ding_event_date.field_ding_event_date_value2' => 'field_data_field_ding_event_date.field_ding_event_date_value2',
  );

  /* Display: Similar */
  $handler = $view->new_display('panel_pane', 'Similar', 'culture_events_similar');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Similar events';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Similar Entries: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'similar_entries';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['validate']['fail'] = 'access denied';
  $handler->display->display_options['arguments']['nid']['title_relevance'] = '0.8';
  $handler->display->display_options['arguments']['nid']['body_relevance'] = '1.4';
  $handler->display->display_options['arguments']['nid']['included_fields:og_membership_request'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_file_image_alt_text'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_file_image_title_text'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:message_text'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_ding_page_body'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_ding_page_lead'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_first_element'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_last_element'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_new_count'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_state'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_ding_list'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_ding_list_user'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_element_type'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_list_type'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_note'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_notes'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_search_query'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_search_title'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_taxonomy_term'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_ting_object'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_value'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:comment_body'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_ding_event_body'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_ding_event_lead'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_ding_event_price'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_ding_library_body'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_ding_library_fax_number'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_ding_library_lead'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_ding_library_phone_number'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_ding_library_slug'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_ding_group_body'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_ding_group_lead'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_ding_news_body'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_ding_news_lead'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_ding_tabroll_lead'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_ding_staff_description'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_ding_staff_forename'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_ding_staff_phone'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_ding_staff_position'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_ding_staff_surname'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_ding_staff_work_areas'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_ding_interaction_body'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_taxonomy_ting_objects'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_camp_link'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_camp_text_full'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_ding_eresource_body'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_ding_eresource_lead'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_facebook_actions'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_facebook_caption'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_facebook_description'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_facebook_feed_targeting'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_facebook_link'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_facebook_location'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_facebook_location_id'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_facebook_message'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_facebook_name'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_facebook_options'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_facebook_picture'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_facebook_question'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_facebook_subject'] = '0';
  $handler->display->display_options['arguments']['nid']['included_fields:field_facebook_targeting'] = '0';

  /* Display: Category */
  $handler = $view->new_display('panel_pane', 'Category', 'culture_events_category');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Other events in same category';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'event_category' => 'event_category',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'event_category' => 'event_category',
  );

  /* Display: Day */
  $handler = $view->new_display('panel_pane', 'Day', 'culture_events_day');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Other events the same day';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
  $handler->display->display_options['arguments']['date_argument']['use_fromto'] = 'no';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_ding_event_date.field_ding_event_date_value' => 'field_data_field_ding_event_date.field_ding_event_date_value',
  );

  /* Display: Library */
  $handler = $view->new_display('panel_pane', 'Library', 'culture_events_library');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Other events in the same library';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $translatables['culture_events'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Similar'),
    t('Similar events'),
    t('View panes'),
    t('Category'),
    t('Other events in same category'),
    t('Day'),
    t('Other events the same day'),
    t('Library'),
    t('Other events in the same library'),
    t('OG membership from node'),
    t('Group node from OG membership'),
  );
  $export['culture_events'] = $view;

  return $export;
}
