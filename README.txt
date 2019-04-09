COMP 3004 project Delivery 4

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
Linux OS ubuntu18.04 ---Course VM

--------------------------------------------------------------------------------------------------------------------------------------
PROJECT RUNNING STEPS:  ---> use command line
1. Uncompress the "cuACS.tar" file using command:
	tar -xvf cuACS.tar

2. Open the teminal in current "cuACS file"

3. Build the project using command: 
	make

4. Launch project using command: 
	./cuACS


-------------------------------------------------------------------------------------------------------------------------------------
NEW FEATURES IN D4

Staff feature:
NOTE: You have to click run ACM button before clicking "view ACM Result" Button
      After modifying the Client Preference, please click the "Run ACM" Button to get latest machting result

1. ACM Algorithm 
       Main window -> Click "Staff" button -> Choose Client Tab -> Click "Run ACM" button ->
       double click to select a client from the client table -> client detail window opens ->
       click "View ACM Result" button -> case 1. The ACM result will display the animal details
					 case 2. Nothing opened but with a prompt massage "No Animal Matched!"


-------------------------------------------------------------------------------------------------------------------------------------
D3 FEATURES

Client feature:
1. Edit client's own details profile and matching preferences
	Main window -> Click "Client" button -> Enter a valid client ID -> Click "Confirm" button ->
	Click "Preference" button -> Client view window -> Click "Edit" button -> modify any data ->
	Click "Save" button -> Enter the Client ID to see the new change 

Staff feature:
2. Edit any animals profile
	Main window -> Click "Staff" button -> select "Animal List" tag -> Double Click the animal column
	-> animal view window -> Click "Edit" button -> modify any data -> Click "Save" button -> 
	Click "update" button to see the new change

------------------------------------------------------------------------------------------------------------------------
D2 FEATURES 	
1. View all animals (staff/client)

	Main window -> Click "Staff" button -> select "Animal List" tag
	Main window -> Click "Client" button -> select "Animal List" tag
 
2. Add animal
	Main window -> Click "Staff" button -> "Add" button -> animal adding window -> 
	"Submmit" button -> Clicked "Updata" button to view new added animal

3. View all clients
	Main window -> Click "Staff" button -> select "Client List" tag

4. Add client
	Main window -> Click "Staff" button -> select "Animal List" tag -> "Add Client" button ->
	client adding window -> "Submmit" button -> Clicked "Updata" button to view new added client

5. View Animal /client details
	Double Click the animal/client item on the animal/client table to view their detials



-------------------------------------------------------------------------------------------------------------------------------------
D1 FEATURES

 

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

