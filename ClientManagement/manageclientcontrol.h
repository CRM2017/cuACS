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
    void hideEditButton();
    void hideSaveButton();
    void disableACMResultButton();
    void hideACMResultButton();
    void showACMResultButton();
    void show();
    void close();
    void updateAnimalIndex(int animalIndex);


private:
    ManageClientWindow *_view;
    //int _anmialIndex;

};

#endif // MANAGECLIENTCONTROL_H
