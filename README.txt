
						COMP 3004 project Delivery 2

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
PROJECT RUNNING STEPS:  --->use command line
1. Uncompress the "cuACS.tar" file using command:
	tar -xvf cuACS.tar

2. Open the teminal in current "cuACS file"

3. Build the project using command: 
	make

4. Launch project using command: 
	./cuACS

Altenatvie launch method ---> use QtCreator
1. Open QtCreator: File -> Open Project -> cuACS -> cuACS.pro -> open
2. On menu bar, Build -> Rebuild Project "cuACS", then clicked Build
3. Copy "cuACSdb.sqlite" to "build-cuACS-Desktop-Debug" file
4. On qtCreator menu bar, click run project 

-------------------------------------------------------------------------------------------------------------------------------------

FEATURES:
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





