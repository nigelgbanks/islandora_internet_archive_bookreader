<?php

/**
 * @file
 * Handles the search callback.
 */

/**
 * Performs a solr search for the given term within the given book.
 *
 * Prints a JSON object repersenting the results.
 * This function exits.
 *
 * @param string $object_id
 *   The PID of the book object.
 * @param string $term
 *   The text to search for within the OCR'ed text.
 */
function islandora_internet_archive_bookreader_search_callback($object_id, $term) {
  if (!module_exists('islandora_solr')) {
    drupal_exit();
  }
  $results = islandora_internet_archive_bookreader_query_solr($object_id, $term);
  $results = islandora_internet_archive_bookreader_map_solr_results_to_bookreader_results($results, $term);
  drupal_json_output($results);
  drupal_exit();
}
