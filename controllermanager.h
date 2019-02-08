#ifndef CONTROLLERMANAGER_H
#define CONTROLLERMANAGER_H
#include "stuffcontrol.h"

class ControllerManager
{
public:
    ControllerManager(StuffControl&stuffControl);

private:
    StuffControl *_stuffConrol;
};

#endif // CONTROLLERMANAGER_H
