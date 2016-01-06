<?php

// Include the class on your page somewhere
include ('/opt/bitnami/apps/drupal/htdocs/includes/challonge.class.php');

// Create a new instance of the API wrapper. Pass your API key into the constructor
// You can view/generate your API key on the 'Password / API Key' tab of your account settings page.
$c = new ChallongeAPI ( 'XqrMnBPs15MvmX0izddB4zyIHKswRCoaIAyq4cTt' );

/*
 * For whatever reason (example: developing locally) if you get a SSL validation error from CURL,
 * you can set the verify_ssl attribute of the class to false (defualts to true). It is highly recommended that you
 * *NOT** do this on a production server.
 */
$c->verify_ssl = false;

// TOURNAMENT EXAMPLES
// ************************
// Get all tournaments you created
// http://challonge.com/api/tournaments
$tournaments = $c->makeCall ( 'tournaments' );
$tournaments = $c->getTournaments ();

print_r ( $c->result );

// /********************************************************************************
// //CREATE A TOURNAMENT and Update Drupal Tournaments Node with Challonge tourney ID
//
//

// Include the class on your page somewhere
include ('/opt/bitnami/apps/drupal/htdocs/includes/challonge.class.php');
$c = new ChallongeAPI ( 'XqrMnBPs15MvmX0izddB4zyIHKswRCoaIAyq4cTt' );

// get the GFC data needed to create tourney in Challonge
$mynodeidparent = 17;
$node = node_load ( $mynodeidparent );
$wrapper = entity_metadata_wrapper ( 'node', $node );

// retreive param values needed from GFC data

// get tourney name
$tourney_name = $wrapper->field_tournament_name->value (); 

// get type of play
$term = taxonomy_term_load ( $wrapper->field_tournament_type->raw () ); 
$wrapper2 = entity_metadata_wrapper ( 'taxonomy_term', $term );
$tourney_type = $term->name;

// get description
$tourney_descriptions = $wrapper->field_tournament_description->value (); 

//get url value
$tourney_url = str_replace ( ' ', '', $tourney_name ); // TODO: invent good url scheme
                                                    
// DEBUG CODE ONLY
                                                    // print $tourney_name;
                                                    // print $tourney_type;
                                                    // print $tourney_descriptions;
                                                    // print $tourney_url;
                                                    // END DEBUG CODE
                                                    
// set paramater values for challonge from GFC values
$params = array (
		"tournament[name]" => $tourney_name,
		"tournament[tournament_type]" => $tourney_type, // see if this can be dynamic
		"tournament[url]" => $tourney_url,
		"tournament[description]" => $tourney_descriptions 
);

// call to challonge to create tournament
$tournament = $c->makeCall ( "tournaments", $params, "post" );
$tournament = $c->createTournament ( $params );

// *************************
// update GFC with returned tournament ID
// *************************

// get challonge id from xml result

// load result in dom
$return = new SimpleXMLElement ( $c->result );
// retreive new tournament id and set to variable
$challonge_id = $return->tournament->id;

// load GFC drupal tournament and update field

// set value
$wrapper->field_tournament_challonge_url->set ( $challonge_id );

// save value
$wrapper->save ();

?>