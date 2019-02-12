# cuACS


						COMP 3004 project Delivery 1

PROJECT NAME: 
	Carleton University Animal Care System

TEAM NAME: 
	H2O Lesson

TEAM MEMBERS:
	
	Ming Lei 100981171

	Taihe Chen 101047827

	Zixuan Zhang 101027027

	Jiarui Li 100994952

--------------------------------------------------------------------------------------------------------------------------------------
RUNING INVIRONMENT:
Linux OS ubuntu18.04

INSTALLATION:
1. Download the file 3004_D1 and unzip it.
2. Open QtCreator: File -> Open Project -> cuACS -> cuACS.pro -> open
3. On menu bar, Build -> Rebuild Project "cuACS", then clicked Build -> Run

-------------------------------------------------------------------------------------------------------------------------------------
CLARIFICATION:
1. Due to delivery 1 only need to implement the basic animal attributes, the are only 3 valid attributes: "ID", "Name" and "Type".
Others attributes will not be added into database.
2. There are 5 initial animals with ID 1001, 1002, 1003, 1004 and 1005. An animal with exsited ID can not be added into Database.
 
-------------------------------------------------------------------------------------------------------------------------------------

USAGE:
On main window:
When you run this applcation successfully, the main window should apprear and display two buttons: 
"Stuff" button and "Client" Button. ("Client button" do nothing becase there is no requirements in D1 )
Clicked the "Stuff" button to view animal list.  

On stuff window:

You can see an animal table with three basic attributes: ID, Name and Type on the table.

View an animal details:

Double clicked one of three attribute on the table, the animal details window will apprears.
Notice: In the animal view mode, the ID, Name and Type is not editable.

Create an animal:

On stuff window, clicked the "Add" button, the animal creation window will appears, after filling the "ID", "Name" and "Type",
Clicked the "Submit" button then the new animal will be added in database.

Update the Animal list:

After you adding a new animal and submit, clicked the "Update" button on the stuff window, the added animal will appear on the animal list table.

View data in database:

Open the "cuACSdb.sqlite" file with "SQLite DB Broswer" to check the database.






