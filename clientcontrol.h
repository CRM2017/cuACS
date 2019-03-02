#ifndef CLIENTCONTROL_H
#define CLIENTCONTROL_H

//#include "clientcontrol.h"
#include "clientwindow.h"
#include "databasecontrol.h"
#include "manageanimalcontrol.h"

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
