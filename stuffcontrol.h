#ifndef STUFFCONTROL_H
#define STUFFCONTROL_H

#include "stuffwindow.h"
#include "databasecontrol.h"
#include "manageanimalcontrol.h"

class StuffControl
{
public:
    StuffControl();
    ~StuffControl();
    void displayAddAnimalWindow();
    void displayViewAnimalWindow(int col);
    void show();
    void update();
    void close();

private:
    StuffWindow *_view;
    ManageAnimalControl _manageAnimalcontrol;


};

#endif // STUFFCONTROL_H
