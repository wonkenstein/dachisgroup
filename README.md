dachisgroup
===========

Brief/Spec
----------

Current User Status Module

Create a Drupal module in either Drupal 6 or 7 to fulfil the following criteria.

1. We wish to display a simple status on a User's profile page. For example
"John Appleseed is currently [STATUS]" or "John Appleseed is currently not [STATUS]".
[STATUS] could be replaced by something like "in the office" or "listening to music".
This setting should be an on/off toggle switch.
2. The status will need to be a configurable value from its own settings page.
Once the status value is set for the site, it should not need to be changed. This
could take the form of a drop down menu or radio buttons with pre-configured values
or a text box with one value.
3. There should be access restrictions in place to control who is allowed to change this setting.
4. The User Profile page also needs a restriction in place to who can alter the user's status.
5. The complete history of a user's status should be stored in its own database
table along with a time reference.
6. A block should be available to show the current user's recent statuses along
with the time. The block should show no more than 10 results.

Bonus points

1. Build an AJAX controlled block for toggling a user status so the user does not
need to go to their profile page.
2. Use the Views module to create the recent status block.
3. Create a cron task to purge older values from the user status database table.



Notes
-----
Drupal 7 module, requires views module.
Turn it on and dachisgroupuserstatus table should be created in database by hook_schema.
status_setting

admin/config/people/dachisgroupuserstatus
Can change the text 'is currently' in the John Appleseed 'is currently' [STATUS]
John Appleseed assumed to be available as part of user profile configuration
Checkbox to toggle display of status for users profile - sitewide.

user/%user/dachisgroupuserstatus
Users can update their own statuses and history kept in dachisgroupuserstatus table
Roles can be configured so they can update all other user statuses if required.

Blocks Available
Recent Status History Block
List of 10 most recent statuses

Update User Status Block
Able to update user status in a block and done via AJAX

User Status History :: Views
List of 10 most recent statuses - configured using views

hook_cron
cron function that deletes statuses that are older than 28 days - should make this configurable


