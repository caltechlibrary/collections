<?php
/**
 * @file
 * cancellations.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function cancellations_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'cancellations';
  $feeds_importer->config = array(
    'name' => 'Cancellations',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Publisher',
            'target' => 'field_cxn_publisher',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => '2016 Price',
            'target' => 'field_cxn_price',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => '2016 Price',
            'target' => 'field_cxn_price_n',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => '2016 Price',
            'target' => 'field_cxn_price_f',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'cancellation',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['cancellations'] = $feeds_importer;

  return $export;
}
