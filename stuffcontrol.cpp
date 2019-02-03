#include "stuffcontrol.h"
#include "manageanimalcontrol.h"

StuffControl::StuffControl() : _view(*this)
{
    _view.setModal(true);
    _view.exec();

}

StuffControl::~StuffControl(){
}

void StuffControl::displayAnimalInfoWindow(){
    ManageAnimalControl ma;
}


