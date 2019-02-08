#include "animalviewwindow.h"
#include "ui_animalviewwindow.h"

AnimalViewWindow::AnimalViewWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AnimalViewWindow)
{
    ui->setupUi(this);
}

AnimalViewWindow::~AnimalViewWindow()
{
    delete ui;
}
