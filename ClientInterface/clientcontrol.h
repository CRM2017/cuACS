// This client control can control client window display or close

#ifndef CLIENTCONTROL_H
#define CLIENTCONTROL_H

#include "ClientInterface/clientwindow.h"
#include "DatabaseManagement/databasecontrol.h"
#include "AnimalManagement/manageanimalcontrol.h"
#include "AnimalManagement/manageanimalcontrolfactory.h"

class ClientControl
{
public:
    ClientControl();
    ~ClientControl();
    void displayAddAnimalWindow();
    void displayViewAnimalWindow();
    void displayViewAnimalWindow(int col);
    void show();
    void update();
    void close();

private:
    ClientWindow *_view;
    ManageAnimalControl _manageAnimalcontrol;

};

#endif // CLIENTCONTROL_H
