�
    P  ��         	      !        �  l�  2        //  0                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             D       �c    ) �   �k    ��    ` ) h    �    ` �g    �w   �u   ) � 
   �    ` ��   ��   ��   ��   ��   ��   ��   ��   ��   ) �   �j   ��PRIMARY�path_menu�menu_plid_expand_child�menu_parents�router_path�                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          �                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 system                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                InnoDB      "                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        ,Contains the individual links within a menu.                                                                                                                                                                       P�  ��         P   �  � )                                          
menu_name  mlid  plid  
link_path  router_path 	 link_title 
 options  module  hidden  	external  has_children  	expanded  weight  depth  customized  p1  p2  p3  p4 Y )                                          p5  p6  p7  p8  p9 	 updated 
E`        !f 

 c     !3 

 g      !~ 
E�k       !5 C�j      !p 	D�i      !a 
 h	 �  �?s H�r	      !0  q     !� 	 s     !x  u     !c 	 w     !�  y     !;  }     !P       !n 

 �     !� 

 �     !1 

 �     !0 

 �     !1 

 �     !0 

 �     !0 

 �     !2 

 �     !1 

 �     !0 	 �     !Q �menu_name�mlid�plid�link_path�router_path�link_title�options�module�hidden�external�has_children�expanded�weight�depth�customized�p1�p2�p3�p4�p5�p6�p7�p8�p9�updated� The menu name. All links with the same menu name (such as ’navigation’) are part of the same menu.The menu link ID (mlid) is the integer primary key.The parent link ID (plid) is the mlid of the link above in the hierarchy, or zero if the link is at the top level in its menu.The Drupal path or external path this link points to.For links corresponding to a Drupal path (external = 0), this connects the link to a menu_router.path for joins.The text displayed for the link, which may be modified by a title callback stored in menu_router.A serialized array of options to be passed to the url() or l() function, such as a query string or HTML attributes.The name of the module that generated this link.A flag for whether the link should be rendered in menus. (1 = a disabled menu item that may be shown on admin screens, -1 = a menu callback, 0 = a normal, visible link)A flag to indicate if the link points to a full URL starting with a protocol, like http:// (1 = external, 0 = internal).Flag indicating whether any links have this link as a parent (1 = children exist, 0 = no children).Flag for whether this link should be rendered as expanded in menus - expanded links always have their child links displayed, instead of only when the link is in the active trail (1 = expanded, 0 = not expanded)Link weight among links in the same menu at the same depth.The depth relative to the top level. A link with plid == 0 will have depth == 1.A flag to indicate that the user has manually created or edited the link (1 = customized, 0 = not customized).The first mlid in the materialized path. If N = depth, then pN must equal the mlid. If depth > 1 then p(N-1) must equal the plid. All pX where X > depth must equal zero. The columns p1 .. p9 are also called the parents.The second mlid in the materialized path. See p1.The third mlid in the materialized path. See p1.The fourth mlid in the materialized path. See p1.The fifth mlid in the materialized path. See p1.The sixth mlid in the materialized path. See p1.The seventh mlid in the materialized path. See p1.The eighth mlid in the materialized path. See p1.The ninth mlid in the materialized path. See p1.Flag that indicates that this link was generated during the update from Drupal 5.