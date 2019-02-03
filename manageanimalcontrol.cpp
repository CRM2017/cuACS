#include "manageanimalcontrol.h"

ManageAnimalControl::ManageAnimalControl() : _view(*this)
{
    _view.setModal(true);
    _view.exec();
}

ManageAnimalControl::~ManageAnimalControl(){
}

