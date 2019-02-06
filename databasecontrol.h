#ifndef DATABASECONTROL_H
#define DATABASECONTROL_H

#include <vector>
#include "database.h"
#include "animal.h"

using namespace std;
class DatabaseControl
{
public:
    DatabaseControl();
    ~DatabaseControl();
    void initAnimals();
    void insertAnimal(Animal a);
    vector <int> getIDList();
    QString getNameByID();
    QString getTyoeByID();
    vector<Animal> getAnimalList();
    Database getDB();



private:
    Database _db;

};

#endif // DATABASECONTROL_H
