#include "ClientManagement/manageclientcontrol.h"
#include "Storage/client.h"
#include "QDebug"

ManageClientControl::ManageClientControl()
{
    _view = new ManageClientWindow(*this);

}

ManageClientControl::~ManageClientControl(){}

void ManageClientControl::show(){
    qDebug()<<"client manage window opened";
    _view->show();
}

void ManageClientControl::close(){
    qDebug()<<"client creating window closed";
    _view->close();

}
void ManageClientControl::hideSubmitButton(){
    _view->hideSubmitButton();
}
void ManageClientControl::hideEditButton(){
    _view->hideEditButton();
}
void ManageClientControl::hideSaveButton(){
    _view->hideSaveButton();
}
void ManageClientControl::disableACMResultButton(){
    _view->disableACMResultButton();
}
void ManageClientControl::hideACMResultButton(){
    _view->hideACMResultButton();
}

void ManageClientControl::showACMResultButton(){
    _view->showACMResultButton();
}

void ManageClientControl:: updateClientInfoFromDB(int col){
    _view->updateClientListFromDB(col);
}

void ManageClientControl::updateAnimalIndex(int animalIndex){
    //_anmialIndex = animalIndex;
    _view->updateAnimalIndex(animalIndex);
}


