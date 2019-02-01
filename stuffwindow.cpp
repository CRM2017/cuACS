#include "stuffwindow.h"
#include "ui_stuffwindow.h"

stuffwindow::stuffwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::stuffwindow)
{
    ui->setupUi(this);
}

stuffwindow::~stuffwindow()
{
    delete ui;
}
