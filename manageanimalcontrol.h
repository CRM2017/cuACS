// This control can be used to control animal management window display or close

#ifndef MANAGEANIMALCONTROL_H
#define MANAGEANIMALCONTROL_H

#include "manageanimalwindow.h"

class ManageAnimalControl
{
public:
    ManageAnimalControl();
    ~ManageAnimalControl();
    void updateAnimalDetailsFromDB(int col);
    void hideSubmitButton();
    void hideEditButton();
    void hideSaveButton();
    void show();
    void close();
//    void createAnimal(int id, QString name, QString type);

private:
    ManageAnimalWindow *_view;


};

#endif // MANAGEANIMALCONTROL_H
