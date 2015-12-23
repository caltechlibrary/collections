<?php
/**
 * @file
 * cancellations.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cancellations_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'cancellations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Cancellations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Cancellations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_cxn_publisher' => 'field_cxn_publisher',
    'field_cxn_division' => 'field_cxn_division',
    'field_cxn_price' => 'field_cxn_price',
    'field_cxn_uses' => 'field_cxn_uses',
    'field_cxn_download_cost' => 'field_cxn_download_cost',
    'nid' => 'nid',
    'comment_count' => 'comment_count',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cxn_publisher' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cxn_division' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cxn_price' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cxn_uses' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cxn_download_cost' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'comment_count' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_cxn_publisher']['id'] = 'field_cxn_publisher';
  $handler->display->display_options['fields']['field_cxn_publisher']['table'] = 'field_data_field_cxn_publisher';
  $handler->display->display_options['fields']['field_cxn_publisher']['field'] = 'field_cxn_publisher';
  /* Field: Content: Division */
  $handler->display->display_options['fields']['field_cxn_division']['id'] = 'field_cxn_division';
  $handler->display->display_options['fields']['field_cxn_division']['table'] = 'field_data_field_cxn_division';
  $handler->display->display_options['fields']['field_cxn_division']['field'] = 'field_cxn_division';
  $handler->display->display_options['fields']['field_cxn_division']['delta_offset'] = '0';
  /* Field: Content: 2016 Price */
  $handler->display->display_options['fields']['field_cxn_price']['id'] = 'field_cxn_price';
  $handler->display->display_options['fields']['field_cxn_price']['table'] = 'field_data_field_cxn_price';
  $handler->display->display_options['fields']['field_cxn_price']['field'] = 'field_cxn_price';
  $handler->display->display_options['fields']['field_cxn_price']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Content: 2014 Uses */
  $handler->display->display_options['fields']['field_cxn_uses']['id'] = 'field_cxn_uses';
  $handler->display->display_options['fields']['field_cxn_uses']['table'] = 'field_data_field_cxn_uses';
  $handler->display->display_options['fields']['field_cxn_uses']['field'] = 'field_cxn_uses';
  $handler->display->display_options['fields']['field_cxn_uses']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Cost per Download */
  $handler->display->display_options['fields']['field_cxn_download_cost']['id'] = 'field_cxn_download_cost';
  $handler->display->display_options['fields']['field_cxn_download_cost']['table'] = 'field_data_field_cxn_download_cost';
  $handler->display->display_options['fields']['field_cxn_download_cost']['field'] = 'field_cxn_download_cost';
  $handler->display->display_options['fields']['field_cxn_download_cost']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = 'Comments';
  $handler->display->display_options['fields']['comment_count']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['alter']['text'] = '<a class="colorbox-node" href="/node/[nid]" data-inner-width="600" data-inner-height="600">[comment_count]</a> / <a class="colorbox-node" href="comment/reply/[nid]" data-href="comment/reply/[nid]?width=600&height=600">Add a comment</a>';
  $handler->display->display_options['fields']['comment_count']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['format_plural_singular'] = '@count comment';
  $handler->display->display_options['fields']['comment_count']['format_plural_plural'] = '@count comments';
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
    'cancellation' => 'cancellation',
  );
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search Terms';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Division (field_cxn_division) */
  $handler->display->display_options['filters']['field_cxn_division_value']['id'] = 'field_cxn_division_value';
  $handler->display->display_options['filters']['field_cxn_division_value']['table'] = 'field_data_field_cxn_division';
  $handler->display->display_options['filters']['field_cxn_division_value']['field'] = 'field_cxn_division_value';
  $handler->display->display_options['filters']['field_cxn_division_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_cxn_division_value']['expose']['operator_id'] = 'field_cxn_division_value_op';
  $handler->display->display_options['filters']['field_cxn_division_value']['expose']['label'] = 'Division';
  $handler->display->display_options['filters']['field_cxn_division_value']['expose']['operator'] = 'field_cxn_division_value_op';
  $handler->display->display_options['filters']['field_cxn_division_value']['expose']['identifier'] = 'field_cxn_division_value';
  $handler->display->display_options['filters']['field_cxn_division_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'cancellations';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Cancellations';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['cancellations'] = $view;

  return $export;
}
