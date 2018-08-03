This module handles the migration of NNHPD ITS from a older OA version to a new version.

Migrate to the new empty OA
1. Install OA
2. Copy all folders and files from the old ITS [openatrium]/sites to new OA /sites
3. Enable modules:
	composer_manager
	field_collection
	cck
	toc_filter
	textile
	view_php
	panels_style_collapsible
	charts_google
	nnhpd_its_settings
	oa_field_collection_fields
	oa_its_panelizer
	nhpd_oa_member
	nhpd_oa_task_move_copy
	nhpd_oa2
	nhpd_oa2_unique_tag
	oa_migrate_d2d
	oa_worktracker_task_custom_fields_workflow_control
	oa_watchers
	oa_task_modification_tool
	
	
	
4. Export ITS content types and account setting
5. Disable notification 
6. Copy all attachments from old its (in folder private://its) to new OA private://old_its/its. Reserve the file permission setting. If private://its is not writeable to all, set it to writeable to all. (If you run drush with your id, drush may not able to save files to the folder is not set to writeable to all.) 
7. Dump legacy database and install it as 'old_oa_its'
8. Migration
	Open terminal 
	CD to the folder of the site, such as sites/oa_nnhpd_its
	RUN drush migrate-register
	RUN drush mio --help for how to use the migration tools
	RUN oim --operation=import-only
	RUN oim --operation=import-only again (Since some tasks or wikis are refered by other tasks or wikis, the second run let the referrers find the referees)
9. Remove writeable to all from the folder private://its
10. Open and edit every section, make sure the Section type for Task section is 'Tasks Section' and wiki section is 'Wiki Section'. Save it.

11. Enable notification
12. Set Search API

Migrate to existing ITS
Follow the steps above from 6 to 12.
	
	