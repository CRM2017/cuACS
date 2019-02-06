#include "manageanimalwindow.h"
#include "manageanimalwindow.h"
#include "ui_manageanimalwindow.h"


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
    _id = arg1;
}

void ManageAnimalWindow::on_name_textEdited(const QString &arg1)
{
    _name = arg1;
}

void ManageAnimalWindow::on_type_textEdited(const QString &arg1)
{
    _type = arg1;
}

void ManageAnimalWindow::displayAddedAnimal(){

}

