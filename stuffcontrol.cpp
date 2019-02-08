#include "stuffcontrol.h"

#include <QDebug>

StuffControl::StuffControl()
{
    _view = new StuffWindow(*this);

}

StuffControl::~StuffControl(){

}

void StuffControl::update(){
    _view->update();
     qDebug()<< "stuffWindow updated";
}

void StuffControl::close(){
    _view->close();
    qDebug()<< "stuffWindow closed";
}
void StuffControl::show(){
    _view->show();
     qDebug()<< "stuffWindow opened";
}

void StuffControl::displayAnimalInfoWindow(){
    ManageAnimalControl m;
    m.show();

}

void StuffControl::displayAnimalViewWindow(){
    ManageAnimalControl m;
    m.updateAnimalDetailsFromDB();
    m.show();

}


