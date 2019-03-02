#ifndef StaffCONTROL_H
#define StaffCONTROL_H

#include "staffwindow.h"
#include "databasecontrol.h"
#include "manageanimalcontrol.h"
#include "manageclientcontrol.h"

class StaffControl
{
public:
    StaffControl();
    ~StaffControl();
    void displayAddAnimalWindow();
    void displayAddClientWindow();
    void displayViewAnimalWindow(int col);
    void show();
    void update();
    void close();

private:
    StaffWindow *_view;
    ManageAnimalControl _manageAnimalcontrol;
    //ManageClientControl _manageClientcontrol;


};

#endif // StaffCONTROL_H
