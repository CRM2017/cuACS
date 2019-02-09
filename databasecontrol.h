#ifndef DATABASECONTROL_H
#define DATABASECONTROL_H

#include <vector>
#include "database.h"
#include "animal.h"
#include <QString>

using namespace std;
class DatabaseControl
{
public:
    DatabaseControl();
    ~DatabaseControl();
    void initAnimals();
    void insertAnimal(Animal *a);
    vector <int> getIDList();
    vector<QString> getNameList();
    vector<QString> getTypeList();


    Database *_db;



private:


};

#endif // DATABASECONTROL_H
