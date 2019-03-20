// This client control can display client window or close it

#ifndef MANAGECLIENTCONTROL_H
#define MANAGECLIENTCONTROL_H

#include "ClientManagement/manageclientcontrol.h"
#include "ClientManagement/manageclientwindow.h"

class ManageClientControl
{
public:
    ManageClientControl();
    ~ManageClientControl();
    void updateClientInfoFromDB(int col);
    void hideSubmitButton();
    void show();
    void close();


private:
    ManageClientWindow *_view;

};

#endif // MANAGECLIENTCONTROL_H
