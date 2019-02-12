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

void StuffControl::displayAddAnimalWindow(){
    ManageAnimalControl m;
    m.show();

}

void StuffControl::displayViewAnimalWindow(int col){
    ManageAnimalControl m;
    m.hideSubmitButton();
    m.updateAnimalDetailsFromDB(col);
    m.show();

}


