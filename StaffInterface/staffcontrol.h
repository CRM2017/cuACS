// This staff control can display staff window or close it

#ifndef StaffCONTROL_H
#define StaffCONTROL_H

#include "StaffInterface/staffwindow.h"
#include "DatabaseManagement/databasecontrol.h"
#include "AnimalManagement/manageanimalcontrol.h"
#include "ClientManagement/manageclientcontrol.h"
#include "AnimalManagement/manageanimalcontrolfactory.h"
class StaffControl
{
public:
    StaffControl();
    ~StaffControl();
    void displayAddAnimalWindow();
    void displayAddClientWindow();
    void displayViewAnimalWindow(int col);
    void displayViewClientWindow(int col);
    void show();
    void update();
    void close();
    void executeACM();

private:
    StaffWindow *_view;
//    ManageAnimalControl _manageAnimalcontrol;


};

#endif // StaffCONTROL_H
