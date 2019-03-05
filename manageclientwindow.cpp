#include "manageclientwindow.h"
#include "ui_manageclientwindow.h"
#include "client.h"
#include "staffwindow.h"
#include "staffcontrol.h"
#include "manageclientcontrol.h"

ManageClientWindow::ManageClientWindow(ManageClientControl &control ,QWidget *parent) :
    _control(control),
    QDialog(parent),
    ui(new Ui::ManageClientWindow)
{
    ui->setupUi(this);
}

ManageClientWindow::~ManageClientWindow()
{
    //delete ui;
}

void ManageClientWindow::on_submitButton_clicked()
{
    DatabaseControl dbcontrol;
    Client *newClient = new Client(_id, _name, _phone, _email, _address, _age, _gender);
    dbcontrol.insertClient(newClient);
    _control.close();
}

void ManageClientWindow::hideSubmitButton(){
    ui->submitButton->hide();
}

void ManageClientWindow::on_ID_textEdited(const QString &arg1)
{
    _id=arg1;
}

void ManageClientWindow::on_name_textEdited(const QString &arg1)
{
    _name=arg1;
}

void ManageClientWindow::on_phone_textEdited(const QString &arg1)
{
    _phone=arg1;
}

void ManageClientWindow::on_age_textEdited(const QString &arg1)
{
    _age= arg1;
}

void ManageClientWindow::on_email_textEdited(const QString &arg1)
{
    _email = arg1;
}

void ManageClientWindow::on_address_textEdited(const QString &arg1)
{
    _address =arg1;
}

void ManageClientWindow::on_gender_currentIndexChanged(const QString &arg1)
{
    _gender=arg1;
}

void ManageClientWindow::updateClientListFromDB(int col){
    DatabaseControl _dbControl;
    QString id, name, phone, email, address, age, gender;
    vector <vector<QString>> data;
    data = _dbControl.getClientInfo();
    id = data[0][col];
    name = data[1][col];
    phone = data[2][col];
    email = data[3][col];
    address = data[4][col];
    age = data[5][col];
    gender = data[6][col];
    ui->ID->setText(id);
    ui->name->setText(name);
    ui->phone->setText(phone);
    ui->email->setText(email);
    ui->age->setText(age);
    ui->address->setText(address);
    ui->gender->setCurrentText(gender);

    ui->ID->setReadOnly(true);
    ui->name->setReadOnly(true);
    ui->phone->setReadOnly(true);
    ui->email->setReadOnly(true);
    ui->address->setReadOnly(true);
    ui->age->setReadOnly(true);
    ui->gender->setEnabled(false);
}
