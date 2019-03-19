#include "manageanimalcontrolfactory.h"
#include "manageanimalcontrol.h"

ManageAnimalControlFactory::ManageAnimalControlFactory(){}

ManageAnimalControl ManageAnimalControlFactory::getManageAnimalControl(){
    ManageAnimalControl animalControl;
    return animalControl;
}
