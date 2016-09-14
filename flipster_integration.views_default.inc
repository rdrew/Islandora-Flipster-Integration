<?php
/**
 * @file
 * flipster_integration.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function flipster_integration_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'collection_slideshow_coverflow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'collection slideshow - coverflow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'collection slideshow';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['wrapper_class'] = 'collection_slideshow';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  /* Field: Islandora Solr: PID */
  $handler->display->display_options['fields']['PID']['id'] = 'PID';
  $handler->display->display_options['fields']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['PID']['field'] = 'PID';
  $handler->display->display_options['fields']['PID']['label'] = '';
  $handler->display->display_options['fields']['PID']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['PID']['alter']['text'] = '<img src="/islandora/object/[PID]/datastream/JPG/view"/>
';
  $handler->display->display_options['fields']['PID']['element_type'] = '0';
  $handler->display->display_options['fields']['PID']['element_label_type'] = '0';
  $handler->display->display_options['fields']['PID']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['PID']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['PID']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['PID']['link_to_object'] = 0;
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = '';
  $handler->display->display_options['fields']['dc.title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.title']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['dc.title']['element_wrapper_class'] = 'slide_caption';
  $handler->display->display_options['fields']['dc.title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 1;
  /* Contextual filter: Islandora Solr: RELS_EXT_isMemberOf_uri_ms */
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOf_uri_ms']['id'] = 'RELS_EXT_isMemberOf_uri_ms';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOf_uri_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOf_uri_ms']['field'] = 'RELS_EXT_isMemberOf_uri_ms';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOf_uri_ms']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOf_uri_ms']['default_argument_options']['argument'] = 'info:fedora/morphospace:ambrosina';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOf_uri_ms']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOf_uri_ms']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOf_uri_ms']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_ms */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_ms']['id'] = 'RELS_EXT_isMemberOfCollection_uri_ms';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_ms']['field'] = 'RELS_EXT_isMemberOfCollection_uri_ms';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_ms']['value'] = 'info:fedora/morphospace:lab';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_ms']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_ms']['expose']['identifier'] = 'rels_ext_ismemberofcollection_uri_ms';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_ms']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_ms */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_ms']['id'] = 'RELS_EXT_isMemberOfCollection_uri_ms';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_ms']['field'] = 'RELS_EXT_isMemberOfCollection_uri_ms';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_ms']['value'] = 'info:fedora/morphospace:lab';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_ms']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_ms']['expose']['identifier'] = 'rels_ext_ismemberofcollection_uri_ms';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_ms']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['path'] = 'coverflow';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['wrapper_class'] = 'collection_slideshow';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'collection_slideshow:pager';
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_ms */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_ms']['id'] = 'RELS_EXT_isMemberOfCollection_uri_ms';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_ms']['field'] = 'RELS_EXT_isMemberOfCollection_uri_ms';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_ms']['value'] = 'info:fedora/morphospace:lab';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_ms']['exposed'] = TRUE;
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_ms']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_ms']['expose']['label'] = 'Name of the collection (ex: info:fedora/morphospace:lab)';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_ms']['expose']['description'] = 'ex: info:fedora/morphospace:lab';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_ms']['expose']['identifier'] = 'rels_ext_ismemberofcollection_uri_ms';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_ms']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_ms']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => '3',
    4 => '4',
    5 => '5',
    6 => 0,
  );
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 'link_to_view';
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'RELS_EXT_isMemberOf_uri_ms' => array(
      'type' => 'none',
      'context' => 'entity:field_collection_item.host',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Islandora Solr: RELS_EXT_isMemberOf_uri_ms',
    ),
  );
  $export['collection_slideshow_coverflow'] = $view;

  return $export;
}
