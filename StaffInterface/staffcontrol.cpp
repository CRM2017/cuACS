#include "StaffInterface/staffcontrol.h"
#include "AnimalManagement/manageanimalcontrolfactory.h"


#include <QDebug>

StaffControl::StaffControl()
{
    _view = new StaffWindow(*this);

}

StaffControl::~StaffControl(){

}

void StaffControl::update(){
    _view->update();
     qDebug()<< "StaffWindow updated";
}

void StaffControl::close(){
    _view->close();
    qDebug()<< "StaffWindow closed";
}
void StaffControl::show(){
    _view->show();
     qDebug()<< "StaffWindow opened";
}

void StaffControl::displayAddAnimalWindow(){
    ManageAnimalControl m;
    m.show();
    m.hideEditButton();
    m.hideSaveButton();
}
void StaffControl::displayAddClientWindow(){
    ManageClientControl m;
    m.show();
}


void StaffControl::displayViewAnimalWindow(int col){
    ManageAnimalControl m = ManageAnimalControlFactory::getManageAnimalControl();
    m.hideSubmitButton();
    m.hideSaveButton();
    m.updateAnimalDetailsFromDB(col);
    m.show();

}

void StaffControl::displayViewClientWindow(int col){
    ManageClientControl m;
    m.hideSubmitButton();
    m.updateClientInfoFromDB(col);
    m.show();

}

