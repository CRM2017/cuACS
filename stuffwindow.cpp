#include "stuffwindow.h"
#include "ui_stuffwindow.h"
#include "stuffcontrol.h"
#include "databasecontrol.h"

StuffWindow::StuffWindow(StuffControl &control ,QWidget *parent) :
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

    DatabaseControl dbctrl;
    int _animalsNum = dbctrl.getDB().getIDList().size();
    ui->AnimalListTable->setRowCount(_animalsNum);

    for (int i=0; i<dbctrl.getDB().getIDList().size(); i++){
        ui->AnimalListTable->setItem(i, 0,new QTableWidgetItem(dbctrl.getDB().getIDList().at(i)));
        ui->AnimalListTable->setItem(i, 1,new QTableWidgetItem("harry"));
        ui->AnimalListTable->setItem(i, 2,new QTableWidgetItem("dog"));
    }

}

void StuffWindow::on_addAnimalButton_clicked(){

    _control.displayAnimalInfoWindow();

}




