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
    qDebug()<< "animal creating window opened";
    _view->show();
}


void ManageAnimalControl:: close(){
    qDebug()<< "animal creating window closed";
    _view->close();
}
void ManageAnimalControl:: updateAnimalDetailsFromDB(int col){
    _view->updateTextEditFromDB(col);
}

void ManageAnimalControl:: hideSubmitButton(){
    _view->hideSubmitButton();
}
