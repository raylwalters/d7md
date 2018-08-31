<?php

function node_metadata_page($node) {
  $output = '';

  $output .= '<div><label>Author:</label> ' . $node->name . '</div>';
  $output .= '<div><label>Created:</label> ' . format_date($node->created) . '</div>';
  $output .= '<div><label>Changed:</label> ' . format_date($node->changed) . '</div>';
  $output .= '<div><label>Comment Count:</label> ' . $node->comment_count . '</div>';

  return $output;

  return t('Node ID is @nid', array('@nid' => $nid));
}