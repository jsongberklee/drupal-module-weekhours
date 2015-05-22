Weekly Open Hours (weekhours) drupal module (v 7.x-1.xx) - 201400917

* Overview ******************************************************

Simple Drupal module to display weekly open business hours as a block


* Installation **************************************************

NOTE: This module expect you to know how to install all dependancy modules, install libraries and style with CSS file(s) in your theme folder.

1. rename the folder "dp7-mod-weekhours-master" to "weekhours".

2. move the folder to "sites/modules/", download all necessary dependancy modules and libraries (e.g: jquery-ui-timepicker for stanford_date_timepicker).

3. enable "weekhours_entity" (under the Feature package) module will create a custom content type, you can disable this module once you confirm the content type "weekhour" is created.

4. go to "/admin/structure/types/manage/weekhour", modify options on "Automatic title generation" section, the radio button to "Automatically generate the title and hide the title field" and type in "Weekhour-[node:field_wh_datetime]" in "Pattern for the title" textarea, you should also modify other options as you like (e.g: comment, display, publishing and other settings).

5. enable "weekhours" module and go to "/admin/config/regional/weekhours".

6. type in your regular business hours follwing the format discription. Check "Relative display" if you want to display 7 relative days from today.

7. go to "/node/add/weekhour" to create any special / holiday / closing hours by creating each node.

8. go to "/admin/structure/block", place the block "Weekly Hour Block" to anywhere in your block region to display it.


* Usage ********************************************************

Go to "/admin/structure/block" and locate "Weekly Hour Block" to any block region as you wish.

"EDIT" and "Create new hour" will be shown on the block to the user with the edit weekhour content permission.

For closing day, setting the start and end hours to 00:00 will display the description text and "CLOSED" text.


* CONTACT ******************************************************

JAESUNG SONG (jsong@berklee.edu) : Maintainer

Last updated on May 22, 2015