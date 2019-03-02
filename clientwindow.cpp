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

void ClientWindow::on_AnimalListTable_doubleClicked(const QModelIndex &index)
{
    qDebug()<<"animalist index clicked: "<< index.row();
    _tableCol = index.row();
    _control.displayViewAnimalWindow(_tableCol);

}


void ClientWindow::on_saveButton_clicked()
{

}
