#include "manageanimalcontrol.h"
#include "animal.h"


ManageAnimalControl::ManageAnimalControl() : _view(*this)
{
    _view.setModal(true);
    _view.exec();

}

ManageAnimalControl::~ManageAnimalControl(){
}

//void ManageAnimalControl::createAnimal(int id, const QString &name, QString &type){
//    Animal animal(id, name, type);

//}

void ManageAnimalControl:: close(){
    _view.close();
}
