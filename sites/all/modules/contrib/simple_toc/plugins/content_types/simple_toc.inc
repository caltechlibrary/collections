<?php

/**
 * @file
 * Plugin to handle the Simple TOC content type.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('Simple TOC'),
  'single' => TRUE,
  'required context' => new ctools_context_required(t('Node'), 'node'),
  'category' => t('Node'),
  'description' => t('Display the nodes TOC (if enabled for nodes content type).'),
  'edit form' => 'simple_toc_content_type_edit_form',
  'render callback' => 'simple_toc_content_type_render',
);

/**
 * Output function for the Simple TOC content type.
 */
function simple_toc_content_type_render($subtype, $conf, $args, $context) {
  if (($node = menu_get_object()) && isset($node->simple_toc)) {
    $block = new stdClass();
    $block->title = $node->simple_toc['title'];
    $block->content = $node->simple_toc['value'];
    return $block;
  }
}

/**
 * The form to add or edit the Simple TOC.
 */
function simple_toc_content_type_edit_form($form, &$form_state) {
  return $form;
}

/**
 * Save the Simple TOC.
 */
function simple_toc_content_type_edit_form_submit($form, &$form_state) {
  return;
}
