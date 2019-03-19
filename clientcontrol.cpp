#include "clientcontrol.h"
#include "manageanimalcontrolfactory.h"

#include <QDebug>

ClientControl::ClientControl()
{
    _view = new ClientWindow(*this);

}

ClientControl::~ClientControl(){
}

void ClientControl::close(){
    _view->close();
    qDebug() << "Client Window closed";
}

void ClientControl::show(){
    _view->show();
    qDebug() << "Client Window opened";
}

void ClientControl::displayViewAnimalWindow(int col){
    ManageAnimalControl m = ManageAnimalControlFactory::getManageAnimalControl();
    m.hideSubmitButton();
    m.updateAnimalDetailsFromDB(col);
    m.show();
}

