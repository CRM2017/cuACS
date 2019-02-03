#include "stuffwindow.h"
#include "ui_stuffwindow.h"
#include "stuffcontrol.h"


StuffWindow::StuffWindow(StuffControl &control ,QWidget *parent) :
    _control(control),
    QDialog(parent),
    ui(new Ui::StuffWindow)
{
    ui->setupUi(this);

}

StuffWindow::~StuffWindow()
{
    //delete ui;
}

void StuffWindow::on_addAnimalButton_clicked(){
    _control.displayAnimalInfoWindow();
}


