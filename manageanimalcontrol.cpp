#include "manageanimalcontrol.h"
#include "animal.h"
#include "databasecontrol.h"

ManageAnimalControl::ManageAnimalControl() : _view(*this)
{
    _view.setModal(true);
    _view.exec();

}

ManageAnimalControl::~ManageAnimalControl(){
}

void ManageAnimalControl::createAnimal(int id, QString name, QString type){
    Animal animal(id, name, type);
    DatabaseControl dbctr;
    dbctr.insertAnimal(animal);
}
