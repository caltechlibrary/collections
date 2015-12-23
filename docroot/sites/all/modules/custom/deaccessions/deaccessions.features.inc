<?php
/**
 * @file
 * deaccessions.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function deaccessions_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function deaccessions_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function deaccessions_flag_default_flags() {
  $flags = array();
  // Exported flag: "Saves".
  $flags['saves'] = array(
    'entity_type' => 'node',
    'title' => 'Saves',
    'global' => 0,
    'types' => array(
      0 => 'deaccession',
    ),
    'flag_short' => 'Save this journal',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Do not save this journal',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'confirm',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'colorbox' => 'colorbox',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'diff_standard' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'flag_confirmation' => 'Are you sure you want to save [node:title]?',
    'unflag_confirmation' => 'Are you sure you do not want to save [node:title]?',
    'module' => 'deaccessions',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function deaccessions_node_info() {
  $items = array(
    'deaccession' => array(
      'name' => t('Deaccession'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
