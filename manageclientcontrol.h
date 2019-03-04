#ifndef MANAGECLIENTCONTROL_H
#define MANAGECLIENTCONTROL_H

#include "manageclientcontrol.h"
#include "manageclientwindow.h"

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
//    ManageClientWindow _view;
};

#endif // MANAGECLIENTCONTROL_H
