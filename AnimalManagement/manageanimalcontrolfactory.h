#ifndef MANAGEANIMALCONTROLFACTORY_H
#define MANAGEANIMALCONTROLFACTORY_H

#include "AnimalManagement/manageanimalcontrol.h"

class ManageAnimalControlFactory
{
public:
    ManageAnimalControlFactory();
    static ManageAnimalControl getManageAnimalControl();
};

#endif // MANAGEANIMALCONTROLFACTORY_H
