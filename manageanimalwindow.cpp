#include "manageanimalwindow.h"
//#include "manageanimalwindow.h"
#include "ui_manageanimalwindow.h"
#include "animal.h"
#include "staffwindow.h"
#include "staffcontrol.h"
#include "manageanimalcontrol.h"
#include <QDebug>
#include <QPixmap>
#include <QFileDialog>
#include <QtSql>


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


void ManageAnimalWindow::on_color_currentIndexChanged(const QString &arg1)
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

void ManageAnimalWindow::on_uploadButton_clicked()
{
    _relativePhotoPath = QFileDialog::getOpenFileName(
                this,
                tr("Open File"),
                "home",
                "Photo File (*.jpeg)"
                );
    QPixmap pix(_relativePhotoPath);
    ui->PhotoLabel->setPixmap(pix.scaled(299,329,Qt::KeepAspectRatio));
}

void ManageAnimalWindow:: hideSubmitButton(){
    ui->submitButton->hide();
}



void ManageAnimalWindow::updateTextEditFromDB(int col){
    DatabaseControl _dbControl = DataBaseControlFactory::getDatabaseControl();
    int id = _dbControl.getIDList().at(col);
    QString names, types, breed, age,gender, color, weight, height, spayed, vaccine,
            aggressivity, trained, personality, feeding, food, appetite, source, exercise, skills,
            learning, space,fee, relativePhotoPath;
    vector <vector<QString>> data;
// prototype: [ names[], types[], breed[], age[] ....]

    data = _dbControl.getAnimalData();
    names = data[0][col];
    types = data[1].at(col);
    breed = data[2].at(col);
     age = data[3].at(col);
    gender = data[4].at(col);
    color = data[5].at(col);
    weight = data[6].at(col);
    height = data[7].at(col);
    spayed = data[8].at(col);
    vaccine= data[9].at(col);
    aggressivity = data[10].at(col);
    trained = data[11].at(col);
    personality = data[12].at(col);
    feeding = data[13].at(col);
    food = data[14].at(col);
    appetite = data[15].at(col);
    source = data[16].at(col);
    exercise = data[17].at(col);
    skills = data[18].at(col);
    learning = data[19].at(col);
    space=  data[20].at(col);
    fee= data[21].at(col);
    relativePhotoPath = data[22].at(col);

    //qDebug()<<relativePhotoPath;
    QPixmap pix(relativePhotoPath);
    ui->PhotoLabel->setPixmap(pix.scaled(299,329,Qt::KeepAspectRatio));
    ui->id->setText( QString::number(id));
    ui->name->setText(names);
    ui->type->setText(types);
    ui->breed->setText(breed);
    ui->age->setText(age);
    ui->gender->setCurrentText(gender);
    ui->color->setCurrentText(color);
    ui->weight->setText(weight);
    ui->height->setText(height);
    ui->spayed->setCurrentText(spayed);
    ui->vaccine->setCurrentText(vaccine);
    ui->aggressivity->setCurrentText(aggressivity);
    ui->trained->setCurrentText(trained);
    ui->personality->setCurrentText(personality);
    ui->feeding->setCurrentText(feeding);
    ui->food->setCurrentText(food);
    ui->appetite->setCurrentText(appetite);
    ui->source->setCurrentText(source);
    ui->exercise->setCurrentText(exercise);
    ui->skills->setCurrentText(skills);
    ui->learning->setCurrentText(learning);
    ui->space->setText(space);
    ui->fee->setText(fee);

    ui->id->setReadOnly(true);
    ui->name->setReadOnly(true);
    ui->type->setReadOnly(true);
    ui->breed->setReadOnly(true);
    ui->age->setReadOnly(true);
    ui->weight->setReadOnly(true);
    ui->height->setReadOnly(true);
    ui->space->setReadOnly(true);
    ui->fee->setReadOnly(true);


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
    DatabaseControl dbcontrol = DataBaseControlFactory::getDatabaseControl();
    Animal *newAnimal = new Animal(_id, _name, _type, _breed, _age, _gender, _color, _weight, _height, _spayed, _vaccine, _aggressivity, _trained,
                                   _personality, _feeding, _food, _appetite, _source, _exercise, _skills, _learning, _space, _fee, _relativePhotoPath);
    dbcontrol.insertAnimal(newAnimal);
    _control.close();
}

void ManageAnimalWindow::on_submitButton_rejected()
{
    _control.close();
}





void ManageAnimalWindow::on_editButton_clicked()
{
    ui->id->setReadOnly(false);
    ui->name->setReadOnly(false);
    ui->type->setReadOnly(false);
    ui->breed->setReadOnly(false);
    ui->age->setReadOnly(false);
    ui->weight->setReadOnly(false);
    ui->height->setReadOnly(false);
    ui->space->setReadOnly(false);
    ui->fee->setReadOnly(false);
}

void ManageAnimalWindow::on_saveButton_clicked()
{
    QSqlDatabase _db = QSqlDatabase::addDatabase("QSQLITE");
    _db.setDatabaseName("./cuACSdb.sqlite");
    _db.open();
    QSqlQuery qry;
    qry.exec("UPDATE animaltable SET NAME='Ming' WHERE ID=1237  ");
}
