<?php
/**
 * Plugin class.
 */


class LinkitViewsPlugin extends LinkitSearchPlugin {
  /**
   * Overrides LinkitSearchPlugin::ui_title().
   */
  function ui_title() {
    return t("Views");
  }

  /**
   * Overrides LinkitSearchPlugin::ui_description().
   */
  function ui_description() {
    return t('Extend Linkit with views support. (Views Pages)');
  }

  /**
   * Implements LinkitSearchPluginInterface::fetchResults().
   */
  public function fetchResults($search_string) {
    $matches = array();

    $query = db_select('views_view', 'w')
      ->condition('wd.display_plugin', 'page')
      ->fields('wd', array('display_options', 'display_title'))
      ->fields('w', array('human_name'));
    $query->join('views_display', 'wd', 'w.vid = wd.vid');

    $result = $query->execute();

    foreach ($result AS $view) {
      $display_options = unserialize($view->display_options);
      $matches[] = array(
        'title' => $view->display_title,
        'path' => base_path() . $display_options['path'],
        'description' => t('View: %view', array('%view' => $view->human_name)),
        'group' => t('View pages'),
      );
    }

    return $matches;
  }
}
