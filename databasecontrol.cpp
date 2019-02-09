#include "databasecontrol.h"
#include "animal.h"

DatabaseControl::DatabaseControl() :_db (new Database())
{
    initAnimals();

}

DatabaseControl:: ~DatabaseControl()
{
    _db->disconnectDB();
    delete _db;
}

void DatabaseControl::initAnimals(){
    Animal *a1 = new  Animal (1001, "H", "dog");
     Animal *a2 = new  Animal(1002, "A", "dog");
    Animal *a3 = new  Animal(1003, "B", "dog");
     _db->addAnimal(a1);
     _db->addAnimal(a2);
     _db->addAnimal(a3);
    insertAnimal(a1);
    insertAnimal(a2);
    insertAnimal(a3);


}

vector<int> DatabaseControl::getIDList(){
    return _db->getIDList();
}
vector<QString> DatabaseControl::getNameList(){
    return _db->getNameList();
}
vector<QString> DatabaseControl::getTypeList(){
    return _db->getTypeList();
}

void DatabaseControl::insertAnimal(Animal *a){
    _db->addAnimal(a);
}

