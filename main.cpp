#include "mainwindow.h"
#include <QApplication>
#include "databasecontrol.h"

int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    MainControl w;
    DatabaseControl dbcontrol;
    return a.exec();
}
