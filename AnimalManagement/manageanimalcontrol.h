// This control can be used to control animal management window display or close

#ifndef MANAGEANIMALCONTROL_H
#define MANAGEANIMALCONTROL_H

#include "AnimalManagement/manageanimalwindow.h"


class ManageAnimalControl
{
public:
    ManageAnimalControl();
    ~ManageAnimalControl();
    void updateAnimalDetailsFromDB(int col);
    void hideSubmitButton();
    void hideEditButton();
    void hideSaveButton();
    void hideUploadPhotoButton();
    void show();
    void close();


private:
    ManageAnimalWindow *_view;


};

#endif // MANAGEANIMALCONTROL_H
