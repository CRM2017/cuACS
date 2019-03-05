#include "clientwindow.h"
#include "ui_clientwindow.h"
#include "clientcontrol.h"
#include <QDebug>
#include <string>
#include "database.h"

ClientWindow::ClientWindow(ClientControl &control ,QWidget *parent) :
    _control(control),
    QDialog(parent),
    ui(new Ui::ClientWindow)
{
    ui->setupUi(this);
    displayAnimalList();
}

ClientWindow::~ClientWindow()
{
    qDebug() << "ClientWindow closed";
    delete ui;
}

void ClientWindow::on_recommandButton_clicked()
{
}





void ClientWindow:: displayAnimalList(){ //copy&paste from StaffWindow;

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

void ClientWindow::on_AnimalListTable_doubleClicked(const QModelIndex &index)
{
    qDebug()<<"animalist index clicked: "<< index.row();
    _tableCol = index.row();
    _control.displayViewAnimalWindow(_tableCol);

}


