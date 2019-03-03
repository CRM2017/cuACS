#include "staffwindow.h"
#include "ui_staffwindow.h"
#include "staffcontrol.h"
#include <QDebug>
#include <string>
#include "database.h"
StaffWindow::StaffWindow(StaffControl &control , QWidget *parent) :
    _control(control),
    QDialog(parent),
    ui(new Ui::StaffWindow)
{
    ui->setupUi(this);


    displayAnimalList();
}

StaffWindow::~StaffWindow()
{
    qDebug()<<"StaffWindow deleted";
    delete ui;
}

void StaffWindow:: displayAnimalList(){

    DatabaseControl _dbcontrol;
    unsigned int _animalsNum = _dbcontrol.getIDList().size();
    qDebug()<<"idlist size"<<_animalsNum;

    ui->AnimalListTable->setRowCount(_animalsNum);
    QString _id, _name, _type, _breed,_age;
     qDebug()<<"id List"<<_dbcontrol.getIDList().at(1);

    for (unsigned int i=0; i<_animalsNum; i++){
        _id = QString::number(_dbcontrol.getIDList().at(i));
         vector < vector<QString> > animalAttributes = _dbcontrol.getAnimalData();

        _name = animalAttributes[0].at(i);
        _type = animalAttributes[1].at(i);
        _breed = animalAttributes[2].at(i);
        _age = animalAttributes[3].at(i);
        ui->AnimalListTable->setItem(i, 0,new QTableWidgetItem(_id));
        ui->AnimalListTable->setItem(i, 1,new QTableWidgetItem(_name));
        ui->AnimalListTable->setItem(i, 2,new QTableWidgetItem(_type));
        ui->AnimalListTable->setItem(i, 3,new QTableWidgetItem(_breed));
        ui->AnimalListTable->setItem(i, 4,new QTableWidgetItem(_age));


    }
    _dbcontrol._db->disconnectDB();

}

void StaffWindow::on_addAnimalButton_clicked(){

    _control.displayAddAnimalWindow();

}


void StaffWindow::on_updateButton_clicked()
{
    displayAnimalList();
}

void StaffWindow::on_AnimalListTable_doubleClicked(const QModelIndex &index)
{
    qDebug()<<"animalist index clicked: "<< index.row();
    _tableCol = index.row();
    _control.displayViewAnimalWindow(_tableCol);

}



void StaffWindow::on_addClientButton_clicked()
{
    _control.displayAddClientWindow();
}
