// This is client manage window UI that used to add new client or view a client
#ifndef MANAGECLIENTWINDOW_H
#define MANAGECLIENTWINDOW_H

#include <QDialog>
#include <memory>
#include "DatabaseManagement/databasecontrol.h"
#include "DatabaseManagement/databasecontrolfactory.h"

class ManageClientControl;

namespace Ui {
class ManageClientWindow;
}

class ManageClientWindow : public QDialog
{
    Q_OBJECT
public:
    explicit ManageClientWindow(ManageClientControl &control ,QWidget *parent = 0);
    ~ManageClientWindow();
    void hideSubmitButton();
    void hideEditButton();
    void hideSaveButton();

private slots:

    void on_submitButton_clicked();
    void on_editButton_clicked();
    void on_saveButton_clicked();

    void on_ID_textEdited(const QString &arg1);

    void on_name_textEdited(const QString &arg1);

    void on_phone_textEdited(const QString &arg1);

    void on_age_textEdited(const QString &arg1);

    void on_email_textEdited(const QString &arg1);

    void on_address_textEdited(const QString &arg1);

    void on_gender_currentIndexChanged(const QString &arg1);

    void on_SpeciesComBox_currentIndexChanged(const QString &arg1);

    void on_BreedComBox_currentIndexChanged(const QString &arg1);

    void on_AgeComBox_currentIndexChanged(const QString &arg1);

    void on_GenderComBox_currentIndexChanged(const QString &arg1);

    void on_PrimaryColorComBox_currentIndexChanged(const QString &arg1);

    void on_WeightComBox_currentIndexChanged(const QString &arg1);

    void on_HeightComBox_currentIndexChanged(const QString &arg1);

    void on_SpayedComBox_currentIndexChanged(const QString &arg1);

    void on_VaccineComBox_currentIndexChanged(const QString &arg1);

    void on_AggressivityComBox_currentIndexChanged(const QString &arg1);

    void on_TrainedComBox_currentIndexChanged(const QString &arg1);

    void on_PersonalityComBox_currentIndexChanged(const QString &arg1);

    void on_FeedingDifficultyComBox_currentIndexChanged(const QString &arg1);

    void on_FoodPreferenceComBox_currentIndexChanged(const QString &arg1);

    void on_AppetiteLevelComBox_currentIndexChanged(const QString &arg1);

    void on_AdoptionSourceComBox_currentIndexChanged(const QString &arg1);

    void on_ExerciseNeedComBox_currentIndexChanged(const QString &arg1);

    void on_SpecialSkillsComBox_currentIndexChanged(const QString &arg1);

    void on_LearnSpeedComBox_currentIndexChanged(const QString &arg1);

    void on_SpaceNeedComBox_currentIndexChanged(const QString &arg1);

    void on_AdoptionPriceComBox_currentIndexChanged(const QString &arg1);

    void on_PriAttComBox1_currentIndexChanged(const QString &arg1);

    void on_PriAttComBox2_currentIndexChanged(const QString &arg1);

    void on_PriAttComBox3_currentIndexChanged(const QString &arg1);

    void on_PriAttComBox4_currentIndexChanged(const QString &arg1);

    void on_PriAttComBox5_currentIndexChanged(const QString &arg1);

public slots:
    void updateClientListFromDB(int col);

private:
    ManageClientControl &_control;
    Ui::ManageClientWindow *ui;
    QString _id,_name, _phone, _email,_address ,_age, _gender, _Animaltype, _Animalbreed, _Animalage, _Animalgender , _Animalcolor, _Animalweight, _Animalheight, _Animalspayed, _Animalvaccine, _Animalaggressivity, _Animaltrained,
    _Animalpersonality, _Animalfeeding, _Animalfood, _Animalappetite, _Animalsource, _Animalexercise, _Animalskills, _Animallearning, _Animalspace, _Animalfee, _PriorAttribute1, _PriorAttribute2, _PriorAttribute3, _PriorAttribute4, _PriorAttribute5;
};

#endif // MANAGECLIENTWINDOW_H
