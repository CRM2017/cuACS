#include "stuffwindow.h"
#include "ui_stuffwindow.h"
#include "stuffcontrol.h"
#include <QDebug>
#include <string>
#include "database.h"
StuffWindow::StuffWindow(StuffControl &control , QWidget *parent) :
    _control(control),
    QDialog(parent),
    ui(new Ui::StuffWindow)
{
    ui->setupUi(this);
    displayAnimalList();

}

StuffWindow::~StuffWindow()
{
    qDebug()<<"StuffWindow deleted";
    delete ui;
}

void StuffWindow:: displayAnimalList(){

    DatabaseControl _dbcontrol;

    int _animalsNum = _dbcontrol.getIDList().size();
    ui->AnimalListTable->setRowCount(_animalsNum);
    QString id;
    for (unsigned int i=0; i<_dbcontrol.getIDList().size(); i++){
        qDebug()<<"idlist"<<_dbcontrol.getIDList().at(i);
        id = QString::number(_dbcontrol.getIDList().at(i));
        ui->AnimalListTable->setItem(i, 0,new QTableWidgetItem(id));
        ui->AnimalListTable->setItem(i, 1,new QTableWidgetItem("harry"));
        ui->AnimalListTable->setItem(i, 2,new QTableWidgetItem("dog"));
    }

}

void StuffWindow::on_addAnimalButton_clicked(){

    _control.displayAnimalInfoWindow();


}


void StuffWindow::on_updateButton_clicked()
{
    displayAnimalList();
}

void StuffWindow::on_AnimalListTable_doubleClicked(const QModelIndex &index)
{
    qDebug()<<"animalist index clicked: "<< index;

    _control.displayAnimalViewWindow();

}

void StuffWindow::on_viewButton_clicked()
{

}
