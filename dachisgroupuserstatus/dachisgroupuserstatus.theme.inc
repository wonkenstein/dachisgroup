<?php

function theme_dachisgroupuserstatus_history_block($vars) {

  $history = $vars['history'];

  $content = '';
  foreach ($history as $record) {
    $content .= $record->status . ' <br />' . format_date($record->created) . '<br /><br />';
  }

  return $content;
}


function theme_dachisgroupuserstatus_current_status($vars) {

  $account = $vars['account'];
  $current_status = $vars['current_status'];
  $name = '';
/*
  if (isset($account->field_firstname) && $account->field_lastname) {
    $name = $account->field_firstname['und'][0]['safe_value'] . ' ' . $account->field_lastname['und'][0]['safe_value'];
  }
*/
  $status_message = variable_get('dachisgroupuserstatus_status', '[STATUS]');

  return $name . ' ' . $status_message . ' ' . $current_status->status;
}
