//database control class that can be used to add animal or client to database as well as get data from datbase

#ifndef DATABASECONTROL_H
#define DATABASECONTROL_H

#include <vector>
#include "DatabaseManagement/database.h"
#include "Storage/animal.h"
#include "Storage/client.h"
#include <QString>
using namespace std;
class DatabaseControl
{
public:
    DatabaseControl();
    ~DatabaseControl();
    void initAnimals();
    void insertAnimal(Animal *a);
    void insertClient(Client *c);
    vector <int> getIDList();
    vector<QString> getNameList();
    vector<QString> getTypeList();
    vector<QString> getAgeList();
    vector <vector<QString>> getAnimalData();
    vector <vector<QString>> getClientInfo();


    Database *_db;



private:


};

#endif // DATABASECONTROL_H
