// This is staff window UI that used to display animal list and client list

#ifndef StaffWINDOW_H
#define StaffWINDOW_H

#include <QVector>
#include <QDialog>
#include <memory>
#include "DatabaseManagement/databasecontrol.h"

class StaffControl;

namespace Ui {
class StaffWindow;
}

class StaffWindow : public QDialog
{
    Q_OBJECT

public:
    explicit StaffWindow(StaffControl &control,QWidget *parent = 0);
    ~StaffWindow();
    void displayAnimalList();
    void displayClientList();

private slots:
    void on_addAnimalButton_clicked();
    void on_updateButton_clicked();
    void on_AnimalListTable_doubleClicked(const QModelIndex &index);
    void on_ClienListTable_doubleClicked(const QModelIndex &index);
    void on_addClientButton_clicked();
    void on_updateclientButton_clicked();



    void on_runACMButton_clicked();

private:
    StaffControl &_control;
    Ui::StaffWindow *ui;

    int _tableCol;
    int _tableRow;
    QVector<int> _AnimalIndex;


};

#endif // StaffWINDOW_H
