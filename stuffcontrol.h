#ifndef STUFFCONTROL_H
#define STUFFCONTROL_H

#include "stuffwindow.h"
#include "databasecontrol.h"


class StuffControl
{
public:
    StuffControl();
    ~StuffControl();
    void displayAnimalInfoWindow();
    void show();

private:
    StuffWindow _view;

};

#endif // STUFFCONTROL_H
