<?php
/**
 * @file
 * gsb_feature_offsite_idea_story_ct.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gsb_feature_offsite_idea_story_ct_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__offsite_idea_story';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '15',
        ),
        'title' => array(
          'weight' => '3',
        ),
        'path' => array(
          'weight' => '13',
        ),
        'redirect' => array(
          'weight' => '12',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__offsite_idea_story'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_offsite_idea_story';
  $strongarm->value = array();
  $export['menu_options_offsite_idea_story'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_offsite_idea_story';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_offsite_idea_story'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_offsite_idea_story';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_offsite_idea_story'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_offsite_idea_story';
  $strongarm->value = '1';
  $export['node_preview_offsite_idea_story'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_offsite_idea_story';
  $strongarm->value = 0;
  $export['node_submitted_offsite_idea_story'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_access_node_type_offsite_idea_story';
  $strongarm->value = 0;
  $export['workbench_access_node_type_offsite_idea_story'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_default_state_offsite_idea_story';
  $strongarm->value = 'published';
  $export['workbench_moderation_default_state_offsite_idea_story'] = $strongarm;

  return $export;
}