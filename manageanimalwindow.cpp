#include "manageanimalwindow.h"
//#include "manageanimalwindow.h"
#include "ui_manageanimalwindow.h"
#include "animal.h"
#include "staffwindow.h"
#include "staffcontrol.h"
#include "manageanimalcontrol.h"


ManageAnimalWindow::ManageAnimalWindow(ManageAnimalControl &control ,QWidget *parent) :
    _control(control),
    QDialog(parent),
    ui(new Ui::ManageAnimalWindow)
{
    ui->setupUi(this);

}

ManageAnimalWindow::~ManageAnimalWindow()
{
    //delete ui;
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

void ManageAnimalWindow:: hideSubmitButton(){
    ui->submitButton->hide();
}

void ManageAnimalWindow::on_submitButton_clicked()
{
    DatabaseControl dbcontrol;
    Animal *newAnimal = new Animal(_id, _name, _type);
    dbcontrol.insertAnimal(newAnimal);
    _control.close();
}

void ManageAnimalWindow::updateTextEditFromDB(int col){
    DatabaseControl _dbControl;
    int id = _dbControl.getIDList().at(col);
    QString name = _dbControl.getNameList().at(col);
    QString type= _dbControl.getTypeList().at(col);
    ui->id->setText( QString::number(id));
    ui->name->setText(name);
    ui->type->setText(type);
    ui->id->setReadOnly(true);
    ui->name->setReadOnly(true);
    ui->type->setReadOnly(true);


}
