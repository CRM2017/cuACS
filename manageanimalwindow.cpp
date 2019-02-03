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
