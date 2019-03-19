// This is animal management ui that can be used as the view aniam window and add animal window
#ifndef MANAGEANIMALWINDOW_H
#define MANAGEANIMALWINDOW_H

#include <QDialog>
#include <memory>
#include "databasecontrol.h"
#include "databasecontrolfactory.h"
#include <vector>

class ManageAnimalControl;

namespace Ui {
class ManageAnimalWindow;
}

class ManageAnimalWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ManageAnimalWindow(ManageAnimalControl &control ,QWidget *parent = 0);
    ~ManageAnimalWindow();
    void hideSubmitButton();

private slots:

    void on_id_textEdited(const QString &arg1);

    void on_name_textEdited(const QString &arg1);

    void on_type_textEdited(const QString &arg1);

    void on_age_textEdited(const QString &arg1);

    void on_breed_textEdited(const QString &arg1);

    void on_gender_currentIndexChanged(const QString &arg1);

    void on_color_currentIndexChanged(const QString &arg1);
    
    void on_weight_textEdited(const QString &arg1);
    
    void on_height_textEdited(const QString &arg1);
    
    void on_spayed_currentIndexChanged(const QString &arg1);
    
    void on_vaccine_currentIndexChanged(const QString &arg1);
    
    void on_aggressivity_currentIndexChanged(const QString &arg1);
    
    void on_trained_currentIndexChanged(const QString &arg1);
    
    void on_personality_currentIndexChanged(const QString &arg1);
    
    void on_feeding_currentIndexChanged(const QString &arg1);
    
    void on_food_currentIndexChanged(const QString &arg1);
    
    void on_appetite_currentIndexChanged(const QString &arg1);
    
    void on_source_currentIndexChanged(const QString &arg1);
    
    void on_exercise_currentIndexChanged(const QString &arg1);
    
    void on_skills_currentIndexChanged(const QString &arg1);
    
    void on_learning_currentIndexChanged(const QString &arg1);
    
    void on_space_textEdited(const QString &arg1);
    
    void on_fee_textEdited(const QString &arg1);

    //void on_submitButton_clicked();

    void on_submitButton_accepted();

    void on_submitButton_rejected();


    void on_uploadButton_clicked();

    void on_editButton_clicked();

    void on_saveButton_clicked();

public slots:
    void updateTextEditFromDB(int col);

private:
    ManageAnimalControl &_control;

    Ui:: ManageAnimalWindow *ui;
    int _id;
    QString _name, _type, _age, _breed, _gender, _color, _weight, _height, _spayed, _vaccine, _aggressivity, _trained,
    _personality, _feeding, _food, _appetite, _source, _exercise, _skills, _learning, _space, _fee, _relativePhotoPath;
    vector <QString> _animalData;
//    std::unique_ptr<Ui::ManageAnimalWindow> ui;
};

#endif // MANAGEANIMALWINDOW_H
