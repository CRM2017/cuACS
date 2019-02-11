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
     qDebug()<<"idlist size"<<_animalsNum;

    ui->AnimalListTable->setRowCount(_animalsNum);
    QString _id, _name, _type;
     qDebug()<<"idlist"<<_dbcontrol.getIDList().at(1);

    for (unsigned int i=0; i<_animalsNum; i++){
        _id = QString::number(_dbcontrol.getIDList().at(i));
        _name = _dbcontrol.getNameList().at(i);
        _type = _dbcontrol.getTypeList().at(i);
        ui->AnimalListTable->setItem(i, 0,new QTableWidgetItem(_id));
        ui->AnimalListTable->setItem(i, 1,new QTableWidgetItem(_name));
        ui->AnimalListTable->setItem(i, 2,new QTableWidgetItem(_type));
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
    qDebug()<<"animalist index clicked: "<< index.row();
    _tableCol = index.row();
    _control.displayAnimalViewWindow(_tableCol);

}


