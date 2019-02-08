#include "databasecontrol.h"
#include "animal.h"

DatabaseControl::DatabaseControl() :_db (new Database())
{

    initAnimals();

}

DatabaseControl:: ~DatabaseControl()
{
    delete _db;
}

void DatabaseControl::initAnimals(){
    Animal a1(1001, "H", "dog");
    Animal a2(1002, "A", "dog");
    Animal a3(1003, "B", "dog");
     _db->addAnimal(a1);
     _db->addAnimal(a2);
     _db->addAnimal(a3);

}

vector <int> DatabaseControl::getIDList(){
    return _db->getIDList();
}

void DatabaseControl::insertAnimal(Animal a){
    _db->addAnimal(a);
}

