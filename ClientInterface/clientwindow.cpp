#include "ClientInterface/clientwindow.h"
#include "ui_clientwindow.h"
#include "ClientInterface/clientcontrol.h"
#include <QDebug>
#include <string>
#include "DatabaseManagement/database.h"

ClientWindow::ClientWindow(ClientControl &control ,QWidget *parent) :
    _control(control),
    QDialog(parent),
    ui(new Ui::ClientWindow)
{
    ui->setupUi(this);
    displayAnimalList();
    ui->name->setReadOnly(true);
    ui->phone->setReadOnly(true);
    ui->email->setReadOnly(true);
    ui->address->setReadOnly(true);
    ui->age->setReadOnly(true);
    ui->gender->setReadOnly(true);

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

    DatabaseControl _dbcontrol = DataBaseControlFactory::getDatabaseControl();
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



void ClientWindow::on_id_textEdited(const QString &arg1)
{
    _id = arg1;
}

void ClientWindow::on_confirmButton_clicked()
{
    displayClienInfo();
}

void ClientWindow:: displayClienInfo(){
    DatabaseControl _dbControl = DataBaseControlFactory::getDatabaseControl();
    QString  name, phone, email, address, age, gender;
    vector <vector<QString>> data;

    data = _dbControl.getClientInfo();
    int index = -1;
    for (int i=0; i< data[0].size(); i++){
        if (data[0][i] == _id){
            index = i;
        }
    }

    if (index!= -1){
         ui->promptMessage->setText("Client found!");
        name = data[1][index];
        phone = data[2][index];
        email = data[3][index];
        address = data[4][index];
        age = data[5][index];
        gender = data[6][index];
        ui->name->setText(name);
        ui->phone->setText(phone);
        ui->email->setText(email);
        ui->address->setText(address);
        ui->age->setText(age);
        ui->gender->setText(gender);

    }
    else{
        ui->promptMessage->setText("Client ID dosen't exist, please try again!");
        ui->name->setText("");
        ui->phone->setText("");
        ui->email->setText("");
        ui->address->setText("");
        ui->age->setText("");
        ui->gender->setText("");
    }

}
