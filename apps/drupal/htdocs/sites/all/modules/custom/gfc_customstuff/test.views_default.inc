

<?php




$view = new view();
$view->name = 'my_matches_bigtest';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'My Matches';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'My Matches bigtest';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '30';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
'title' => 'title',
'field_match_round' => 'field_match_round',
'field_match_team_1' => 'field_match_team_1',
'field_match_team_1_score' => 'field_match_team_1_score',
'field_match_team_2' => 'field_match_team_2',
'field_match_team_2_score' => 'field_match_team_2_score',
'field_match_winner' => 'field_match_winner',
'field_team_member_role' => 'field_team_member_role',
'field_team_member_user' => 'field_team_member_user',
'field_team_member_user_1' => 'field_team_member_user_1',
'uid' => 'uid',
'field_match_status' => 'field_match_status',
'field_match_total_games' => 'field_match_total_games',
);
$handler->display->display_options['style_options']['default'] = 'field_match_status';
$handler->display->display_options['style_options']['info'] = array(
'title' => array(
'sortable' => 0,
'default_sort_order' => 'asc',
'align' => '',
'separator' => '',
'empty_column' => 0,
),
'field_match_round' => array(
'sortable' => 0,
'default_sort_order' => 'asc',
'align' => '',
'separator' => '',
'empty_column' => 0,
),
'field_match_team_1' => array(
'sortable' => 0,
'default_sort_order' => 'asc',
'align' => '',
'separator' => '',
'empty_column' => 0,
),
'field_match_team_1_score' => array(
'sortable' => 0,
'default_sort_order' => 'asc',
'align' => '',
'separator' => '',
'empty_column' => 0,
),
'field_match_team_2' => array(
'sortable' => 0,
'default_sort_order' => 'asc',
'align' => '',
'separator' => '',
'empty_column' => 0,
),
'field_match_team_2_score' => array(
'sortable' => 0,
'default_sort_order' => 'asc',
'align' => '',
'separator' => '',
'empty_column' => 0,
),
'field_match_winner' => array(
'sortable' => 0,
'default_sort_order' => 'asc',
'align' => '',
'separator' => '',
'empty_column' => 0,
),
'field_team_member_role' => array(
'sortable' => 0,
'default_sort_order' => 'asc',
'align' => '',
'separator' => '',
'empty_column' => 0,
),
'field_team_member_user' => array(
'sortable' => 0,
'default_sort_order' => 'asc',
'align' => '',
'separator' => '',
'empty_column' => 0,
),
'field_team_member_user_1' => array(
'sortable' => 0,
'default_sort_order' => 'asc',
'align' => '',
'separator' => '',
'empty_column' => 0,
),
'uid' => array(
'sortable' => 0,
'default_sort_order' => 'asc',
'align' => '',
'separator' => '',
'empty_column' => 0,
),
'field_match_status' => array(
'sortable' => 0,
'default_sort_order' => 'asc',
'align' => '',
'separator' => '',
'empty_column' => 0,
),
'field_match_total_games' => array(
'sortable' => 0,
'default_sort_order' => 'asc',
'align' => '',
'separator' => '',
'empty_column' => 0,
),
);
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['content'] = '<?php

ctools_include(\'modal\');
    ctools_include(\'ajax\');
    ctools_modal_add_js();
    ctools_add_js(\'ajax-responder\');


$sample_style = array(
    \'ctools-sample-style\' => array(
      \'modalSize\' => array(
        \'type\' => \'fixed\',
        \'width\' => 450,
        \'height\' => 400,
        \'addWidth\' => 1,
        \'addHeight\' => 0,
      ),
      \'modalOptions\' => array(
        \'opacity\' => .5,
        \'background-color\' => \'#000\',
      ),
      \'animation\' => \'fadeIn\',
     // \'modalTheme\' => \'CToolsSampleModal\',
    //  \'throbber\' => theme(\'image\', array(\'path\' => ctools_image_path(\'ajax-loader.gif\', \'ctools_ajax_sample\'), \'alt\' => t(\'Loading...\'), \'title\' => t(\'Loading\'))),
    ),
  );

  drupal_add_js($sample_style, \'setting\');
 // ctools_add_js(\'ctools-ajax-sample\', \'ctools_ajax_sample\');
 // ctools_add_css(\'ctools-ajax-sample\', \'ctools_ajax_sample\');


?>';
$handler->display->display_options['header']['area']['format'] = 'php_code';
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['label'] = 'There are no matches to display.';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = '[html format="ckeditor" different_values="0"]<p>No Matches to Display</p>[/html]
 ';
$handler->display->display_options['empty']['area']['format'] = 'full_html';


/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_match_team_2_target_id']['id'] = 'field_match_team_2_target_id';
$handler->display->display_options['relationships']['field_match_team_2_target_id']['table'] = 'field_data_field_match_team_2';
$handler->display->display_options['relationships']['field_match_team_2_target_id']['field'] = 'field_match_team_2_target_id';

/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_match_team_1_target_id']['id'] = 'field_match_team_1_target_id';
$handler->display->display_options['relationships']['field_match_team_1_target_id']['table'] = 'field_data_field_match_team_1';
$handler->display->display_options['relationships']['field_match_team_1_target_id']['field'] = 'field_match_team_1_target_id';

/* Relationship: Entity Reference: Referencing entity */
$handler->display->display_options['relationships']['reverse_field_team_reference_from_team_m_team_members']['id'] = 'reverse_field_team_reference_from_team_m_team_members';
$handler->display->display_options['relationships']['reverse_field_team_reference_from_team_m_team_members']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_team_reference_from_team_m_team_members']['field'] = 'reverse_field_team_reference_from_team_m_team_members';
$handler->display->display_options['relationships']['reverse_field_team_reference_from_team_m_team_members']['relationship'] = 'field_match_team_1_target_id';
$handler->display->display_options['relationships']['reverse_field_team_reference_from_team_m_team_members']['required'] = TRUE;

/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_team_member_user_target_id']['id'] = 'field_team_member_user_target_id';
$handler->display->display_options['relationships']['field_team_member_user_target_id']['table'] = 'field_data_field_team_member_user';
$handler->display->display_options['relationships']['field_team_member_user_target_id']['field'] = 'field_team_member_user_target_id';
$handler->display->display_options['relationships']['field_team_member_user_target_id']['relationship'] = 'reverse_field_team_reference_from_team_m_team_members';

/* Relationship: Entity Reference: Referencing entity */
$handler->display->display_options['relationships']['reverse_field_team_reference_from_team_m_team_members_1']['id'] = 'reverse_field_team_reference_from_team_m_team_members_1';
$handler->display->display_options['relationships']['reverse_field_team_reference_from_team_m_team_members_1']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_team_reference_from_team_m_team_members_1']['field'] = 'reverse_field_team_reference_from_team_m_team_members';
$handler->display->display_options['relationships']['reverse_field_team_reference_from_team_m_team_members_1']['relationship'] = 'field_match_team_2_target_id';
$handler->display->display_options['relationships']['reverse_field_team_reference_from_team_m_team_members_1']['required'] = TRUE;

/* Relationship: Team Members: Team Member Role (field_team_member_role) */
$handler->display->display_options['relationships']['field_team_member_role_tid']['id'] = 'field_team_member_role_tid';
$handler->display->display_options['relationships']['field_team_member_role_tid']['table'] = 'field_data_field_team_member_role';
$handler->display->display_options['relationships']['field_team_member_role_tid']['field'] = 'field_team_member_role_tid';
$handler->display->display_options['relationships']['field_team_member_role_tid']['relationship'] = 'reverse_field_team_reference_from_team_m_team_members';

/* Relationship: Entity Reference: Referencing entity */
$handler->display->display_options['relationships']['reverse_field_tournament_match_node']['id'] = 'reverse_field_tournament_match_node';
$handler->display->display_options['relationships']['reverse_field_tournament_match_node']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_tournament_match_node']['field'] = 'reverse_field_tournament_match_node';
$handler->display->display_options['relationships']['reverse_field_tournament_match_node']['required'] = TRUE;

/* Relationship: Content: Team Logo (field_team_logo:fid) */
$handler->display->display_options['relationships']['field_team_logo_fid']['id'] = 'field_team_logo_fid';
$handler->display->display_options['relationships']['field_team_logo_fid']['table'] = 'field_data_field_team_logo';
$handler->display->display_options['relationships']['field_team_logo_fid']['field'] = 'field_team_logo_fid';

/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_tournament_match_target_id']['id'] = 'field_tournament_match_target_id';
$handler->display->display_options['relationships']['field_tournament_match_target_id']['table'] = 'field_data_field_tournament_match';
$handler->display->display_options['relationships']['field_tournament_match_target_id']['field'] = 'field_tournament_match_target_id';
$handler->display->display_options['relationships']['field_tournament_match_target_id']['relationship'] = 'reverse_field_tournament_match_node';

/* Field: Content: Tournament_Challonge_URL */
$handler->display->display_options['fields']['field_tournament_challonge_url']['id'] = 'field_tournament_challonge_url';
$handler->display->display_options['fields']['field_tournament_challonge_url']['table'] = 'field_data_field_tournament_challonge_url';
$handler->display->display_options['fields']['field_tournament_challonge_url']['field'] = 'field_tournament_challonge_url';
$handler->display->display_options['fields']['field_tournament_challonge_url']['relationship'] = 'reverse_field_tournament_match_node';
$handler->display->display_options['fields']['field_tournament_challonge_url']['label'] = '';
$handler->display->display_options['fields']['field_tournament_challonge_url']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_tournament_challonge_url']['element_label_colon'] = FALSE;

/* Field: Content: Tournament Challonge ID */
$handler->display->display_options['fields']['field_tournament_challonge_id']['id'] = 'field_tournament_challonge_id';
$handler->display->display_options['fields']['field_tournament_challonge_id']['table'] = 'field_data_field_tournament_challonge_id';
$handler->display->display_options['fields']['field_tournament_challonge_id']['field'] = 'field_tournament_challonge_id';
$handler->display->display_options['fields']['field_tournament_challonge_id']['relationship'] = 'reverse_field_tournament_match_node';
$handler->display->display_options['fields']['field_tournament_challonge_id']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_tournament_challonge_id']['type'] = 'number_unformatted';
$handler->display->display_options['fields']['field_tournament_challonge_id']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
);

/* Field: Content: Name */
$handler->display->display_options['fields']['field_tournament_name']['id'] = 'field_tournament_name';
$handler->display->display_options['fields']['field_tournament_name']['table'] = 'field_data_field_tournament_name';
$handler->display->display_options['fields']['field_tournament_name']['field'] = 'field_tournament_name';
$handler->display->display_options['fields']['field_tournament_name']['relationship'] = 'reverse_field_tournament_match_node';
$handler->display->display_options['fields']['field_tournament_name']['label'] = 'Tournament';
$handler->display->display_options['fields']['field_tournament_name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_tournament_name']['type'] = 'text_trimmed';
$handler->display->display_options['fields']['field_tournament_name']['settings'] = array(
    'trim_length' => '50',
);
/* Field: Content: Team Logo */
$handler->display->display_options['fields']['field_team_logo_2']['id'] = 'field_team_logo_2';
$handler->display->display_options['fields']['field_team_logo_2']['table'] = 'field_data_field_team_logo';
$handler->display->display_options['fields']['field_team_logo_2']['field'] = 'field_team_logo';
$handler->display->display_options['fields']['field_team_logo_2']['relationship'] = 'field_match_team_1_target_id';
$handler->display->display_options['fields']['field_team_logo_2']['label'] = 'Team 1 Logo';
$handler->display->display_options['fields']['field_team_logo_2']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_team_logo_2']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_team_logo_2']['settings'] = array(
    'image_style' => 'blog_60x60',
    'image_link' => '',
);
/* Field: Content: Team Logo */
$handler->display->display_options['fields']['field_team_logo_3']['id'] = 'field_team_logo_3';
$handler->display->display_options['fields']['field_team_logo_3']['table'] = 'field_data_field_team_logo';
$handler->display->display_options['fields']['field_team_logo_3']['field'] = 'field_team_logo';
$handler->display->display_options['fields']['field_team_logo_3']['relationship'] = 'field_match_team_2_target_id';
$handler->display->display_options['fields']['field_team_logo_3']['label'] = 'Team 2 Logo';
$handler->display->display_options['fields']['field_team_logo_3']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_team_logo_3']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_team_logo_3']['settings'] = array(
    'image_style' => 'blog_60x60',
    'image_link' => '',
);
/* Field: Content: Match Team 1 */
$handler->display->display_options['fields']['field_match_team_1']['id'] = 'field_match_team_1';
$handler->display->display_options['fields']['field_match_team_1']['table'] = 'field_data_field_match_team_1';
$handler->display->display_options['fields']['field_match_team_1']['field'] = 'field_match_team_1';
$handler->display->display_options['fields']['field_match_team_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_match_team_1']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_match_team_1']['settings'] = array(
    'link' => 0,
);
/* Field: Content: Match Team 2 Score */
$handler->display->display_options['fields']['field_match_team_2_score']['id'] = 'field_match_team_2_score';
$handler->display->display_options['fields']['field_match_team_2_score']['table'] = 'field_data_field_match_team_2_score';
$handler->display->display_options['fields']['field_match_team_2_score']['field'] = 'field_match_team_2_score';
$handler->display->display_options['fields']['field_match_team_2_score']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_match_team_2_score']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
);
/* Field: Content: Match Team 2 */
$handler->display->display_options['fields']['field_match_team_2']['id'] = 'field_match_team_2';
$handler->display->display_options['fields']['field_match_team_2']['table'] = 'field_data_field_match_team_2';
$handler->display->display_options['fields']['field_match_team_2']['field'] = 'field_match_team_2';
$handler->display->display_options['fields']['field_match_team_2']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_match_team_2']['settings'] = array(
    'link' => 0,
);
/* Field: Content: Tournament Time */
$handler->display->display_options['fields']['field_tournament_time']['id'] = 'field_tournament_time';
$handler->display->display_options['fields']['field_tournament_time']['table'] = 'field_data_field_tournament_time';
$handler->display->display_options['fields']['field_tournament_time']['field'] = 'field_tournament_time';
$handler->display->display_options['fields']['field_tournament_time']['relationship'] = 'reverse_field_tournament_match_node';
$handler->display->display_options['fields']['field_tournament_time']['label'] = 'Date';
$handler->display->display_options['fields']['field_tournament_time']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
);
/* Field: Content: Match Status */
$handler->display->display_options['fields']['field_match_status']['id'] = 'field_match_status';
$handler->display->display_options['fields']['field_match_status']['table'] = 'field_data_field_match_status';
$handler->display->display_options['fields']['field_match_status']['field'] = 'field_match_status';
/* Field: Content: Match Challonge ID */
$handler->display->display_options['fields']['field_match_challonge_id']['id'] = 'field_match_challonge_id';
$handler->display->display_options['fields']['field_match_challonge_id']['table'] = 'field_data_field_match_challonge_id';
$handler->display->display_options['fields']['field_match_challonge_id']['field'] = 'field_match_challonge_id';
$handler->display->display_options['fields']['field_match_challonge_id']['label'] = 'Match ID';
$handler->display->display_options['fields']['field_match_challonge_id']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_match_challonge_id']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_match_challonge_id']['alter']['text'] = 'Report Scores';
$handler->display->display_options['fields']['field_match_challonge_id']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_match_challonge_id']['alter']['path'] = 'UpdateScoresForm/nojs/match/[field_tournament_challonge_url]/[field_match_challonge_id]';
$handler->display->display_options['fields']['field_match_challonge_id']['alter']['alt'] = 'Report Scores';
$handler->display->display_options['fields']['field_match_challonge_id']['alter']['rel'] = 'Report Scores';
$handler->display->display_options['fields']['field_match_challonge_id']['alter']['link_class'] = 'ctools-use-modal ctools-modal-ctools-sample-style';
$handler->display->display_options['fields']['field_match_challonge_id']['type'] = 'number_unformatted';
$handler->display->display_options['fields']['field_match_challonge_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
);
/* Field: Team Members: Team Reference From Team Members */
$handler->display->display_options['fields']['field_team_reference_from_team_m']['id'] = 'field_team_reference_from_team_m';
$handler->display->display_options['fields']['field_team_reference_from_team_m']['table'] = 'field_data_field_team_reference_from_team_m';
$handler->display->display_options['fields']['field_team_reference_from_team_m']['field'] = 'field_team_reference_from_team_m';
$handler->display->display_options['fields']['field_team_reference_from_team_m']['relationship'] = 'reverse_field_team_reference_from_team_m_team_members';
$handler->display->display_options['fields']['field_team_reference_from_team_m']['label'] = 'My Team';
$handler->display->display_options['fields']['field_team_reference_from_team_m']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_team_reference_from_team_m']['settings'] = array(
    'link' => 0,
);
/* Field: Views: Views Conditional */
$handler->display->display_options['fields']['views_conditional_6']['id'] = 'views_conditional_6';
$handler->display->display_options['fields']['views_conditional_6']['table'] = 'views_conditional';
$handler->display->display_options['fields']['views_conditional_6']['field'] = 'views_conditional';
$handler->display->display_options['fields']['views_conditional_6']['label'] = 'My Team';
$handler->display->display_options['fields']['views_conditional_6']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['views_conditional_6']['if'] = 'field_team_reference_from_team_m';
$handler->display->display_options['fields']['views_conditional_6']['condition'] = '1';
$handler->display->display_options['fields']['views_conditional_6']['equalto'] = '[field_match_team_1]';
$handler->display->display_options['fields']['views_conditional_6']['then'] = '[field_team_logo_2] <br> [field_match_team_1]';
$handler->display->display_options['fields']['views_conditional_6']['or'] = '[field_team_logo_3] <br> [field_match_team_2]';
$handler->display->display_options['fields']['views_conditional_6']['strip_tags'] = 0;
/* Field: User: Uid */
$handler->display->display_options['fields']['uid']['id'] = 'uid';
$handler->display->display_options['fields']['uid']['table'] = 'users';
$handler->display->display_options['fields']['uid']['field'] = 'uid';
$handler->display->display_options['fields']['uid']['relationship'] = 'field_team_member_user_target_id';
$handler->display->display_options['fields']['uid']['label'] = '';
$handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['uid']['alter']['text'] = 'Vs.';
$handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
/* Field: Views: Views Conditional */
$handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
$handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
$handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
$handler->display->display_options['fields']['views_conditional']['label'] = 'Opponent';
$handler->display->display_options['fields']['views_conditional']['if'] = 'field_team_reference_from_team_m';
$handler->display->display_options['fields']['views_conditional']['condition'] = '2';
$handler->display->display_options['fields']['views_conditional']['equalto'] = '[field_match_team_1]';
$handler->display->display_options['fields']['views_conditional']['then'] = '[field_team_logo_2] <br> [field_match_team_1]';
$handler->display->display_options['fields']['views_conditional']['or'] = '[field_team_logo_3] <br> [field_match_team_2]';
$handler->display->display_options['fields']['views_conditional']['strip_tags'] = 0;
/* Field: Content: Match Team 1 Score */
$handler->display->display_options['fields']['field_match_team_1_score']['id'] = 'field_match_team_1_score';
$handler->display->display_options['fields']['field_match_team_1_score']['table'] = 'field_data_field_match_team_1_score';
$handler->display->display_options['fields']['field_match_team_1_score']['field'] = 'field_match_team_1_score';
$handler->display->display_options['fields']['field_match_team_1_score']['label'] = 'Result';
$handler->display->display_options['fields']['field_match_team_1_score']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_match_team_1_score']['alter']['text'] = '[field_match_team_1] <b>VS.</b>  [field_match_team_2]';
$handler->display->display_options['fields']['field_match_team_1_score']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
);
/* Field: Content: Match Winner */
$handler->display->display_options['fields']['field_match_winner']['id'] = 'field_match_winner';
$handler->display->display_options['fields']['field_match_winner']['table'] = 'field_data_field_match_winner';
$handler->display->display_options['fields']['field_match_winner']['field'] = 'field_match_winner';
$handler->display->display_options['fields']['field_match_winner']['label'] = 'Winner';
$handler->display->display_options['fields']['field_match_winner']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_match_winner']['empty'] = '<i>TBD<i/>';
$handler->display->display_options['fields']['field_match_winner']['settings'] = array(
    'link' => 0,
);
/* Field: Views: Views Conditional */
$handler->display->display_options['fields']['views_conditional_1']['id'] = 'views_conditional_1';
$handler->display->display_options['fields']['views_conditional_1']['table'] = 'views_conditional';
$handler->display->display_options['fields']['views_conditional_1']['field'] = 'views_conditional';
$handler->display->display_options['fields']['views_conditional_1']['label'] = 'ResultCalc';
$handler->display->display_options['fields']['views_conditional_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['views_conditional_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['views_conditional_1']['if'] = 'field_team_reference_from_team_m';
$handler->display->display_options['fields']['views_conditional_1']['condition'] = '1';
$handler->display->display_options['fields']['views_conditional_1']['equalto'] = '[field_match_winner]';
$handler->display->display_options['fields']['views_conditional_1']['then'] = '<b>Won</b>';
$handler->display->display_options['fields']['views_conditional_1']['or'] = '<b>Lost</b>';
$handler->display->display_options['fields']['views_conditional_1']['strip_tags'] = 0;
/* Field: Views: Views Conditional */
$handler->display->display_options['fields']['views_conditional_4']['id'] = 'views_conditional_4';
$handler->display->display_options['fields']['views_conditional_4']['table'] = 'views_conditional';
$handler->display->display_options['fields']['views_conditional_4']['field'] = 'views_conditional';
$handler->display->display_options['fields']['views_conditional_4']['label'] = 'Result';
$handler->display->display_options['fields']['views_conditional_4']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['views_conditional_4']['if'] = 'field_match_status';
$handler->display->display_options['fields']['views_conditional_4']['condition'] = '1';
$handler->display->display_options['fields']['views_conditional_4']['equalto'] = 'Scores Reported';
$handler->display->display_options['fields']['views_conditional_4']['then'] = '[views_conditional_1]';
$handler->display->display_options['fields']['views_conditional_4']['or'] = '<i>TBD<i/>';
$handler->display->display_options['fields']['views_conditional_4']['strip_tags'] = 0;
/* Field: Views: Views Conditional */
$handler->display->display_options['fields']['views_conditional_2']['id'] = 'views_conditional_2';
$handler->display->display_options['fields']['views_conditional_2']['table'] = 'views_conditional';
$handler->display->display_options['fields']['views_conditional_2']['field'] = 'views_conditional';
$handler->display->display_options['fields']['views_conditional_2']['label'] = 'Score';
$handler->display->display_options['fields']['views_conditional_2']['exclude'] = TRUE;
$handler->display->display_options['fields']['views_conditional_2']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['views_conditional_2']['if'] = 'field_team_reference_from_team_m';
$handler->display->display_options['fields']['views_conditional_2']['condition'] = '1';
$handler->display->display_options['fields']['views_conditional_2']['equalto'] = '[field_match_team_1]';
$handler->display->display_options['fields']['views_conditional_2']['then'] = '<b>[field_match_team_1_score]-[field_match_team_2_score]  </b>';
$handler->display->display_options['fields']['views_conditional_2']['or'] = '<b>[field_match_team_2_score]-[field_match_team_1_score]  </b>';
$handler->display->display_options['fields']['views_conditional_2']['strip_tags'] = 0;
/* Field: Views: Views Conditional */
$handler->display->display_options['fields']['views_conditional_3']['id'] = 'views_conditional_3';
$handler->display->display_options['fields']['views_conditional_3']['table'] = 'views_conditional';
$handler->display->display_options['fields']['views_conditional_3']['field'] = 'views_conditional';
$handler->display->display_options['fields']['views_conditional_3']['label'] = 'Score';
$handler->display->display_options['fields']['views_conditional_3']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['views_conditional_3']['if'] = 'field_match_status';
$handler->display->display_options['fields']['views_conditional_3']['condition'] = '2';
$handler->display->display_options['fields']['views_conditional_3']['equalto'] = 'Scores Reported';
$handler->display->display_options['fields']['views_conditional_3']['then'] = '[field_match_challonge_id] ';
$handler->display->display_options['fields']['views_conditional_3']['or'] = '[views_conditional_2] ';
$handler->display->display_options['fields']['views_conditional_3']['strip_tags'] = 0;
/* Field: Views: Views Conditional */
$handler->display->display_options['fields']['views_conditional_5']['id'] = 'views_conditional_5';
$handler->display->display_options['fields']['views_conditional_5']['table'] = 'views_conditional';
$handler->display->display_options['fields']['views_conditional_5']['field'] = 'views_conditional';
/* Sort criterion: Content: Tournament Time -  start date (field_tournament_time) */
$handler->display->display_options['sorts']['field_tournament_time_value']['id'] = 'field_tournament_time_value';
$handler->display->display_options['sorts']['field_tournament_time_value']['table'] = 'field_data_field_tournament_time';
$handler->display->display_options['sorts']['field_tournament_time_value']['field'] = 'field_tournament_time_value';
$handler->display->display_options['sorts']['field_tournament_time_value']['relationship'] = 'reverse_field_tournament_match_node';
$handler->display->display_options['sorts']['field_tournament_time_value']['order'] = 'DESC';
/* Contextual filter: Team Members: Team Member User (field_team_member_user) */
$handler->display->display_options['arguments']['field_team_member_user_target_id']['id'] = 'field_team_member_user_target_id';
$handler->display->display_options['arguments']['field_team_member_user_target_id']['table'] = 'field_data_field_team_member_user';
$handler->display->display_options['arguments']['field_team_member_user_target_id']['field'] = 'field_team_member_user_target_id';
$handler->display->display_options['arguments']['field_team_member_user_target_id']['relationship'] = 'reverse_field_team_reference_from_team_m_team_members';
$handler->display->display_options['arguments']['field_team_member_user_target_id']['default_action'] = 'default';
$handler->display->display_options['arguments']['field_team_member_user_target_id']['default_argument_type'] = 'current_user';
$handler->display->display_options['arguments']['field_team_member_user_target_id']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_team_member_user_target_id']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_team_member_user_target_id']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
    'match' => 'match',
);
$handler->display->display_options['filters']['type']['group'] = 1;

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'my-matches';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['block_description'] = 'My Matches';
