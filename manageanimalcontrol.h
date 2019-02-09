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
    void show();
    void close();
//    void createAnimal(int id, QString name, QString type);

private:
    ManageAnimalWindow *_view;
};

#endif // MANAGEANIMALCONTROL_H
