#include "stuffwindow.h"
#include "ui_stuffwindow.h"

StuffWindow::StuffWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StuffWindow)
{
    ui->setupUi(this);
}

StuffWindow::~StuffWindow()
{
    delete ui;
}

void StuffWindow::on_animalList_clicked(const QModelIndex &index)
{
    int currenAni = ui->animalList->currentRow();

    ui->animalDetails->setPlainText("This is a dog");




}




