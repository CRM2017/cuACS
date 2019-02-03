#ifndef STUFFCONTROL_H
#define STUFFCONTROL_H

#include "stuffwindow.h"
#include "stuffcontrol.h"

class StuffControl
{
public:
    StuffControl();
    ~StuffControl();
    void displayAnimalInfoWindow();

private:
    StuffWindow _view;
};

#endif // STUFFCONTROL_H
