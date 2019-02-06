#include "databasecontrol.h"
#include "animal.h"

DatabaseControl::DatabaseControl()
{
    initAnimals();

}

DatabaseControl:: ~DatabaseControl()
{
}

void DatabaseControl::initAnimals(){


}

void DatabaseControl::insertAnimal(Animal a){
    _db.addAnimal(a);
}
Database DatabaseControl::getDB(){
    return _db;
}

