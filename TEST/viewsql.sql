SELECT DISTINCT field_tournament_match_node.nid AS field_tournament_match_node_nid, node_field_data_field_match_team_1.nid AS node_field_data_field_match_team_1_nid, node_field_data_field_match_team_2.nid AS node_field_data_field_match_team_2_nid, node.nid AS nid, field_team_reference_from_team_m_node.id AS field_team_reference_from_team_m_node_id, users_field_data_field_team_member_user_1.uid AS users_field_data_field_team_member_user_1_uid, users_field_data_field_team_member_user_2.uid AS users_field_data_field_team_member_user_2_uid, 'node' AS field_data_field_tournament_challonge_url_node_entity_type, 'node' AS field_data_field_tournament_challonge_id_node_entity_type, 'node' AS field_data_field_tournament_name_node_entity_type, 'node' AS field_data_field_team_logo_node_entity_type, 'node' AS field_data_field_match_team_1_node_entity_type, 'node' AS field_data_field_match_team_2_score_node_entity_type, 'node' AS field_data_field_match_team_2_node_entity_type, 'node' AS field_data_field_tournament_time_node_entity_type, 'node' AS field_data_field_match_status_node_entity_type, 'node' AS field_data_field_match_challonge_id_node_entity_type, 'team_members' AS field_data_field_team_reference_from_team_m_team_members_ent, 'node' AS field_data_field_match_team_1_score_node_entity_type, 'node' AS field_data_field_match_winner_node_entity_type FROM node node LEFT JOIN field_data_field_match_team_2 field_data_field_match_team_2 ON node.nid = field_data_field_match_team_2.entity_id AND (field_data_field_match_team_2.entity_type = :views_join_condition_ AND field_data_field_match_team_2.deleted = :views_join_condition_1) LEFT JOIN node node_field_data_field_match_team_2 ON field_data_field_match_team_2.field_match_team_2_target_id = node_field_data_field_match_team_2.nid LEFT JOIN field_data_field_match_team_1 field_data_field_match_team_1 ON node.nid = field_data_field_match_team_1.entity_id AND (field_data_field_match_team_1.entity_type = :views_join_condition_2 AND field_data_field_match_team_1.deleted = :views_join_condition_3) LEFT JOIN node node_field_data_field_match_team_1 ON field_data_field_match_team_1.field_match_team_1_target_id = node_field_data_field_match_team_1.nid INNER JOIN field_data_field_team_reference_from_team_m node_field_data_field_match_team_1__field_data_field_team_reference_from_team_m ON node_field_data_field_match_team_1.nid = node_field_data_field_match_team_1__field_data_field_team_reference_from_team_m.field_team_reference_from_team_m_target_id AND (node_field_data_field_match_team_1__field_data_field_team_reference_from_team_m.entity_type = :views_join_condition_4 AND node_field_data_field_match_team_1__field_data_field_team_reference_from_team_m.deleted = :views_join_condition_5) INNER JOIN eck_team_members field_team_reference_from_team_m_node ON node_field_data_field_match_team_1__field_data_field_team_reference_from_team_m.entity_id = field_team_reference_from_team_m_node.id LEFT JOIN field_data_field_team_member_user field_team_reference_from_team_m_node__field_data_field_team_member_user ON field_team_reference_from_team_m_node.id = field_team_reference_from_team_m_node__field_data_field_team_member_user.entity_id AND (field_team_reference_from_team_m_node__field_data_field_team_member_user.entity_type = :views_join_condition_6 AND field_team_reference_from_team_m_node__field_data_field_team_member_user.deleted = :views_join_condition_7) LEFT JOIN users users_field_data_field_team_member_user ON field_team_reference_from_team_m_node__field_data_field_team_member_user.field_team_member_user_target_id = users_field_data_field_team_member_user.uid LEFT JOIN field_data_field_team_reference_from_team_m field_data_field_team_reference_from_team_m ON node.nid = field_data_field_team_reference_from_team_m.field_team_reference_from_team_m_target_id AND (field_data_field_team_reference_from_team_m.entity_type = :views_join_condition_8 AND field_data_field_team_reference_from_team_m.deleted = :views_join_condition_9) LEFT JOIN eck_team_members field_team_reference_from_team_m_node_1 ON field_data_field_team_reference_from_team_m.entity_id = field_team_reference_from_team_m_node_1.id LEFT JOIN field_data_field_team_member_role field_team_reference_from_team_m_node_1__field_data_field_team_member_role ON field_team_reference_from_team_m_node_1.id = field_team_reference_from_team_m_node_1__field_data_field_team_member_role.entity_id AND (field_team_reference_from_team_m_node_1__field_data_field_team_member_role.entity_type = :views_join_condition_10 AND field_team_reference_from_team_m_node_1__field_data_field_team_member_role.deleted = :views_join_condition_11) LEFT JOIN taxonomy_term_data taxonomy_term_data_field_data_field_team_member_role ON field_team_reference_from_team_m_node_1__field_data_field_team_member_role.field_team_member_role_tid = taxonomy_term_data_field_data_field_team_member_role.tid INNER JOIN field_data_field_tournament_match field_data_field_tournament_match ON node.nid = field_data_field_tournament_match.field_tournament_match_target_id AND (field_data_field_tournament_match.entity_type = :views_join_condition_12 AND field_data_field_tournament_match.deleted = :views_join_condition_13) INNER JOIN node field_tournament_match_node ON field_data_field_tournament_match.entity_id = field_tournament_match_node.nid LEFT JOIN field_data_field_team_logo field_data_field_team_logo ON node.nid = field_data_field_team_logo.entity_id AND (field_data_field_team_logo.entity_type = :views_join_condition_14 AND field_data_field_team_logo.deleted = :views_join_condition_15) LEFT JOIN file_managed file_managed_field_data_field_team_logo ON field_data_field_team_logo.field_team_logo_fid = file_managed_field_data_field_team_logo.fid LEFT JOIN field_data_field_tournament_match field_tournament_match_node__field_data_field_tournament_match ON field_tournament_match_node.nid = field_tournament_match_node__field_data_field_tournament_match.entity_id AND (field_tournament_match_node__field_data_field_tournament_match.entity_type = :views_join_condition_16 AND field_tournament_match_node__field_data_field_tournament_match.deleted = :views_join_condition_17) LEFT JOIN node node_field_data_field_tournament_match ON field_tournament_match_node__field_data_field_tournament_match.field_tournament_match_target_id = node_field_data_field_tournament_match.nid LEFT JOIN field_data_field_team_reference_from_team_m node_field_data_field_match_team_2__field_data_field_team_reference_from_team_m ON node_field_data_field_match_team_2.nid = node_field_data_field_match_team_2__field_data_field_team_reference_from_team_m.field_team_reference_from_team_m_target_id AND (node_field_data_field_match_team_2__field_data_field_team_reference_from_team_m.entity_type = :views_join_condition_18 AND node_field_data_field_match_team_2__field_data_field_team_reference_from_team_m.deleted = :views_join_condition_19) LEFT JOIN eck_team_members field_team_reference_from_team_m_node_2 ON node_field_data_field_match_team_2__field_data_field_team_reference_from_team_m.entity_id = field_team_reference_from_team_m_node_2.id LEFT JOIN users users_field_data_field_team_member_user_1 ON field_team_reference_from_team_m_node__field_data_field_team_member_user.field_team_member_user_target_id = users_field_data_field_team_member_user_1.uid LEFT JOIN field_data_field_team_member_user field_team_reference_from_team_m_node_2__field_data_field_team_member_user ON field_team_reference_from_team_m_node_2.id = field_team_reference_from_team_m_node_2__field_data_field_team_member_user.entity_id AND (field_team_reference_from_team_m_node_2__field_data_field_team_member_user.entity_type = :views_join_condition_20 AND field_team_reference_from_team_m_node_2__field_data_field_team_member_user.deleted = :views_join_condition_21) LEFT JOIN users users_field_data_field_team_member_user_2 ON field_team_reference_from_team_m_node_2__field_data_field_team_member_user.field_team_member_user_target_id = users_field_data_field_team_member_user_2.uid LEFT JOIN field_data_field_match_status field_data_field_match_status ON node.nid = field_data_field_match_status.entity_id AND (field_data_field_match_status.entity_type = :views_join_condition_22 AND field_data_field_match_status.deleted = :views_join_condition_23) WHERE (( (node.status = :db_condition_placeholder_0) AND (node.type IN (:db_condition_placeholder_1)) )) ORDER BY field_data_field_match_status.field_match_status_value ASC


