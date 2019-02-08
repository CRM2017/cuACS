#include "manageanimalcontrol.h"
#include "animal.h"
#include <QDebug>


ManageAnimalControl::ManageAnimalControl()
{
    _view = new ManageAnimalWindow(*this);

}

ManageAnimalControl::~ManageAnimalControl(){
}

//void ManageAnimalControl::createAnimal(int id, const QString &name, QString &type){
//    Animal animal(id, name, type);

//}

void ManageAnimalControl:: show(){
    qDebug()<< "animal creating window opend";
    _view->show();
}


void ManageAnimalControl:: close(){
    qDebug()<< "animal creating window closed";
    _view->close();
}
void ManageAnimalControl:: updateAnimalDetailsFromDB(){
    _view->updateTextEditFromDB();
}
