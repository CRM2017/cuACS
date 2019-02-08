#include "stuffwindow.h"
#include "ui_stuffwindow.h"
#include "stuffcontrol.h"

StuffWindow::StuffWindow(StuffControl &control , QWidget *parent) :
    _control(control),
    QDialog(parent),
    ui(new Ui::StuffWindow)
{

    displayAnimalList();

}

StuffWindow::~StuffWindow()
{
    //delete ui;
}

void StuffWindow:: displayAnimalList(){
    ui->setupUi(this);
    DatabaseControl _dbcontrol;
    int _animalsNum = _dbcontrol.getIDList().size();
    ui->AnimalListTable->setRowCount(_animalsNum);

    for (int i=0; i<_dbcontrol._db->getIDList().size(); i++){
        ui->AnimalListTable->setItem(i, 0,new QTableWidgetItem(_dbcontrol._db->getIDList().at(i)));
        ui->AnimalListTable->setItem(i, 1,new QTableWidgetItem("harry"));
        ui->AnimalListTable->setItem(i, 2,new QTableWidgetItem("dog"));
    }

}

void StuffWindow::on_addAnimalButton_clicked(){

    _control.displayAnimalInfoWindow();

}




