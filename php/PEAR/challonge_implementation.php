<?php

//Include Challonge API Class File
include('challonge.class.php');



function createGFCTournament($mynodeidparent) {
	
	// /********************************************************************************
	// //CREATE A TOURNAMENT and Update Drupal Tournaments Node with Challonge tourney ID
	//	
			
	// Include the Challonge API Class
	include('/opt/bitnami/apps/drupal/htdocs/includes/challonge.class.php');
	$c = new ChallongeAPI('XqrMnBPs15MvmX0izddB4zyIHKswRCoaIAyq4cTt');
	
	// get the GFC data needed to create tourney in Challonge
							//$mynodeidparent = 18; //test id for debugging
	$node = node_load($mynodeidparent);
	$wrapper = entity_metadata_wrapper('node',$node);
	
	// retreive param values needed from GFC data
	
	// get tourney name
	$tourney_name = $wrapper->field_tournament_name->value(); 
	
	// get type of play
	$term = taxonomy_term_load ( $wrapper->field_tournament_type->raw()); 
	$wrapper2 = entity_metadata_wrapper('taxonomy_term',$term);
	$tourney_type = $term->name;
	
	// get description
	$tourney_descriptions = $wrapper->field_tournament_description->value (); 
	
	//get url value
	$tourney_url = (string)uniqid(); //str_replace ( ' ', '', $tourney_name ); // TODO: invent good url scheme	                                                  
	                                                    
	// set paramater values for challonge from GFC values
	$params = array (
			"tournament[name]" => $tourney_name,
			"tournament[tournament_type]" => $tourney_type, // see if this can be dynamic
			"tournament[url]" => $tourney_url,
			"tournament[description]" => $tourney_descriptions 
	);
	
	// call to challonge to create tournament
	$tournament = $c->makeCall ("tournaments",$params,"post");
	$tournament = $c->createTournament($params);
	
	//Save new URL value to GFC
	$wrapper->field_tournament_challonge_url->set($tourney_url);
	// save value
	$wrapper->save();
	
	// *************************
	// update GFC with returned tournament ID
	// *************************
	
	//****************NOTE: Need to reload by URL value from CHALLONGE due to bug
	$tournament_id = $tourney_url;
	$params = array("include_matches " => 0);
	$tournament = $c->makeCall("tournaments/$tournament_id", $params, "get");
	$tournament = $c->getTournament($tournament_id, $params);
	
	
	// retreive new tournament id and set to variable
	$challonge_id = (integer)$tournament->id;
	
	// id set value
	$wrapper->field_tournament_challonge_id->set($challonge_id);
	//set url value
	
	// save value
	$wrapper->save();
	
	return $c->result;

}


?>