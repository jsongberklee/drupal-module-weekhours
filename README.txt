Open Hours : simple Drupal module to display weekly open business hours as a block
==================================================================================

Overview: coming soon~!

Installation:

1. rename the folder "dp7-mod-weekhours-master" to "weekhours".

2. move the folder to "sites/modules/", download all necessary dependancy modules and libraries (e.g: jquery-ui-timepicker for stanford_date_timepicker).

3. enable "weekhours_entity" will create a custom content type, you can disable this module once you confirm the content type "weekhour" is created.

4. go to "/admin/structure/types/manage/weekhour", modify options on "Automatic title generation" section, the radio button to "Automatically generate the title and hide the title field" and type in "Weekhour-[node:field_wh_datetime]" in "Pattern for the title" textarea, you should also modify other options as you like (e.g: comment, display, publishing and other settings).

5. enable "weekhours" module and go to "/admin/config/regional/weekhours".

6. type in your regular business hours follwing the format discription.

7. go to "/node/add/weekhour" to create any special / holiday / closing hours by creating each node.

8. go to "/admin/structure/block", place the block "Weekly Hour Block" to anywhere in you region to display it.
