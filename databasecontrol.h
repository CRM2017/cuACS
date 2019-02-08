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

    Database *_db;



private:


};

#endif // DATABASECONTROL_H
