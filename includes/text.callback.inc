<?php

/**
 * @file
 * Handles the OCR menu callback.
 */

/**
 * Prints the given page objects OCR datastream.
 *
 * This function exits.
 *
 * @param FedoraObject $object
 *   The page object whose OCR data-stream will be used for display.
 */
function islandora_internet_archive_bookreader_get_page_text(FedoraObject $object) {
  echo isset($object['OCR']) ? htmlspecialchars($object['OCR']->content) : '';
  drupal_exit();
}
