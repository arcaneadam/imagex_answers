<?php
/**
 * @file
 * imagex_answers_question_list.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function imagex_answers_question_list_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function imagex_answers_question_list_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
