#include "manageanimalwindow.h"
//#include "manageanimalwindow.h"
#include "ui_manageanimalwindow.h"
#include "animal.h"
#include "staffwindow.h"
#include "staffcontrol.h"
#include "manageanimalcontrol.h"
#include <QDebug>


ManageAnimalWindow::ManageAnimalWindow(ManageAnimalControl &control ,QWidget *parent) :
    _control(control),
    QDialog(parent),
    ui(new Ui::ManageAnimalWindow)
{
    ui->setupUi(this);

}

ManageAnimalWindow::~ManageAnimalWindow()
{
    delete ui;
}

void ManageAnimalWindow::on_id_textEdited(const QString &arg1)
{
    _id = arg1.toInt();
}

void ManageAnimalWindow::on_name_textEdited(const QString &arg1)
{
    _name = arg1;
}

void ManageAnimalWindow::on_type_textEdited(const QString &arg1)
{
    _type = arg1;
}

void ManageAnimalWindow::on_age_textEdited(const QString &arg1)
{
    _age = arg1;
}

void ManageAnimalWindow::on_breed_textEdited(const QString &arg1)
{
    _breed = arg1;
}


void ManageAnimalWindow::on_gender_currentIndexChanged(const QString &arg1)
{
    _gender = arg1;
}

void ManageAnimalWindow::on_color_textEdited(const QString &arg1)
{
    _color = arg1;
}

void ManageAnimalWindow::on_weight_textEdited(const QString &arg1)
{
    _weight = arg1;
}

void ManageAnimalWindow::on_height_textEdited(const QString &arg1)
{
    _height= arg1;
}

void ManageAnimalWindow::on_spayed_currentIndexChanged(const QString &arg1)
{
    _spayed = arg1;
}

void ManageAnimalWindow::on_vaccine_currentIndexChanged(const QString &arg1)
{
    _vaccine = arg1;
}

void ManageAnimalWindow::on_aggressivity_currentIndexChanged(const QString &arg1)
{
    _aggressivity = arg1;
}

void ManageAnimalWindow::on_trained_currentIndexChanged(const QString &arg1)
{
    _trained = arg1;
}

void ManageAnimalWindow::on_personality_currentIndexChanged(const QString &arg1)
{
    _personality = arg1;
}

void ManageAnimalWindow::on_feeding_currentIndexChanged(const QString &arg1)
{
    _feeding = arg1;
}

void ManageAnimalWindow::on_food_currentIndexChanged(const QString &arg1)
{
    _food = arg1;
}

void ManageAnimalWindow::on_appetite_currentIndexChanged(const QString &arg1)
{
    _appetite = arg1;
}

void ManageAnimalWindow::on_source_currentIndexChanged(const QString &arg1)
{
    _source = arg1;
}

void ManageAnimalWindow::on_exercise_currentIndexChanged(const QString &arg1)
{
    _exercise = arg1;
}

void ManageAnimalWindow::on_skills_currentIndexChanged(const QString &arg1)
{
    _skills = arg1;
}

void ManageAnimalWindow::on_learning_currentIndexChanged(const QString &arg1)
{
    _learning = arg1;
}

void ManageAnimalWindow::on_space_textEdited(const QString &arg1)
{
    _space = arg1;
}


void ManageAnimalWindow::on_fee_textEdited(const QString &arg1)
{
    _fee = arg1;
}

void ManageAnimalWindow:: hideSubmitButton(){
    ui->submitButton->hide();
}



void ManageAnimalWindow::updateTextEditFromDB(int col){
    DatabaseControl _dbControl;
    int id = _dbControl.getIDList().at(col);
//    QString name = _dbControl.getNameList().at(col);
//    QString type= _dbControl.getTypeList().at(col);

    ui->id->setText( QString::number(id));
    ui->name->setText("??");
    ui->type->setText("??");
    ui->breed->setText("bread");
    ui->age->setText("-1");
    ui->gender->setCurrentIndex(1);

    ui->id->setReadOnly(true);
    ui->name->setReadOnly(true);
    ui->type->setReadOnly(true);


}

/*void ManageAnimalWindow::on_submitButton_clicked()
{
    DatabaseControl dbcontrol;
    Animal *newAnimal = new Animal(_id, _name, _type, _breed, _age, _gender, _color, _weight, _height, _spayed, _vaccine, _aggressivity, _trained,
                                   _personality, _feeding, _food, _appetite, _source, _exercise, _skills, _learning, _space, _fee);
    dbcontrol.insertAnimal(newAnimal);
//    _control.close();
    _control.close();


}*/



void ManageAnimalWindow::on_submitButton_accepted()
{
    DatabaseControl dbcontrol;
    Animal *newAnimal = new Animal(_id, _name, _type, _breed, _age, _gender, _color, _weight, _height, _spayed, _vaccine, _aggressivity, _trained,
                                   _personality, _feeding, _food, _appetite, _source, _exercise, _skills, _learning, _space, _fee);
    dbcontrol.insertAnimal(newAnimal);
    _control.close();
}

void ManageAnimalWindow::on_submitButton_rejected()
{
    _control.close();
}
