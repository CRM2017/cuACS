#include "AnimalManagement/manageanimalcontrolfactory.h"
#include "AnimalManagement/manageanimalcontrol.h"

ManageAnimalControlFactory::ManageAnimalControlFactory(){}

ManageAnimalControl ManageAnimalControlFactory::getManageAnimalControl(){
    ManageAnimalControl animalControl;
    return animalControl;
}
