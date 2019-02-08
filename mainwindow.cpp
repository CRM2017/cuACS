#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "maincontrol.h"""

MainWindow::MainWindow(MainControl &control, QWidget *parent) :
    QMainWindow(parent), _control(control),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_stuffButton_clicked(){
    _control.displayStuffWindow();
}

void MainWindow::on_clientButton_clicked(){

}
