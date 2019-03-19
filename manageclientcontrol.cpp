#include "manageclientcontrol.h"
#include "client.h"
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

void ManageClientControl:: updateClientInfoFromDB(int col){
    _view->updateClientListFromDB(col);
}


