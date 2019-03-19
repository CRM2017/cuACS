#ifndef MANAGEANIMALCONTROLFACTORY_H
#define MANAGEANIMALCONTROLFACTORY_H

#include "manageanimalcontrol.h"

class ManageAnimalControlFactory
{
public:
    ManageAnimalControlFactory();
    static ManageAnimalControl getManageAnimalControl();
};

#endif // MANAGEANIMALCONTROLFACTORY_H
