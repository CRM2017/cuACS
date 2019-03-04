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
    displayClientList();
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
    QString _id, _name, _type, _breed,_age, _gender;
     qDebug()<<"id List"<<_dbcontrol.getIDList().at(1);

    for (unsigned int i=0; i<_animalsNum; i++){
        _id = QString::number(_dbcontrol.getIDList().at(i));
         vector < vector<QString> > animalAttributes = _dbcontrol.getAnimalData();

        _name = animalAttributes[0].at(i);
        _type = animalAttributes[1].at(i);
        _breed = animalAttributes[2].at(i);
        _age = animalAttributes[3].at(i);
        _gender = animalAttributes[4].at(i);
        ui->AnimalListTable->setItem(i, 0,new QTableWidgetItem(_id));
        ui->AnimalListTable->setItem(i, 1,new QTableWidgetItem(_name));
        ui->AnimalListTable->setItem(i, 2,new QTableWidgetItem(_type));
        ui->AnimalListTable->setItem(i, 3,new QTableWidgetItem(_breed));
        ui->AnimalListTable->setItem(i, 4,new QTableWidgetItem(_age));
        ui->AnimalListTable->setItem(i, 5,new QTableWidgetItem(_gender));


    }
    _dbcontrol._db->disconnectDB();

}

void StaffWindow:: displayClientList(){

    DatabaseControl _dbcontrol;

    vector <vector<QString>> clientInfo = _dbcontrol.getClientInfo();
    unsigned int _clientNum =clientInfo[0].size();
    ui->ClienListTable->setRowCount(_clientNum);
    QString _id, _name, _phone, _email,_address;

    for (unsigned int i=0; i<clientInfo[0].size(); i++){
        _id = clientInfo[0][i];
        _name = clientInfo[1][i];
        _phone = clientInfo[2][i];
        _email = clientInfo[3][i];
        _address = clientInfo[4][i];
        qDebug()<<"client list display"<<_id;
        qDebug()<<"client list display"<<_name;
        qDebug()<<"client list display"<<_phone;
        qDebug()<<"client list display"<<_email;

        ui->ClienListTable->setItem(i,0, new QTableWidgetItem(_id));
        ui->ClienListTable->setItem(i,1, new QTableWidgetItem(_name));
        ui->ClienListTable->setItem(i,2, new QTableWidgetItem(_phone));
        ui->ClienListTable->setItem(i,3, new QTableWidgetItem(_email));
        ui->ClienListTable->setItem(i,4, new QTableWidgetItem(_address));


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

void StaffWindow::on_clientUpdateButton_clicked()
{
    displayClientList();
}
