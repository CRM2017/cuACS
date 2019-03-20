#include "AnimalManagement/manageanimalcontrol.h"
#include "Storage/animal.h"
#include <QDebug>


ManageAnimalControl::ManageAnimalControl()
{
    _view = new ManageAnimalWindow(*this);

}

ManageAnimalControl::~ManageAnimalControl(){
}



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
void ManageAnimalControl:: hideEditButton(){
    _view->hideEditButton();
}
void ManageAnimalControl:: hideSaveButton(){
    _view->hideSaveButton();
}
