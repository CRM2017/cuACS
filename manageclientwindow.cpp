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
    //_control.close();

}
