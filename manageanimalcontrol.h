#ifndef MANAGEANIMALCONTROL_H
#define MANAGEANIMALCONTROL_H

#include "manageanimalcontrol.h"
#include "manageanimalwindow.h"

class ManageAnimalControl
{
public:
    ManageAnimalControl();
    ~ManageAnimalControl();
    void close();
//    void createAnimal(int id, QString name, QString type);

private:
    ManageAnimalWindow _view;
};

#endif // MANAGEANIMALCONTROL_H
