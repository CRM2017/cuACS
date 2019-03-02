#ifndef StaffWINDOW_H
#define StaffWINDOW_H

#include <QDialog>
#include <memory>
#include "databasecontrol.h"

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

private slots:
    void on_addAnimalButton_clicked();
    void on_updateButton_clicked();
    void on_AnimalListTable_doubleClicked(const QModelIndex &index);

    void on_addClientButton_clicked();

private:
    StaffControl &_control;
    Ui::StaffWindow *ui;

//    vector<int> _IDList = _dbcontrol.getIDList();
//    vector<QString> _NameList = _dbcontrol.getNameList();
//    vector<QString> _TypeList = _dbcontrol.getTypeList();
    int _tableCol;
    int _tableRow;

//    std::unique_ptr<Ui::StaffWindow> ui;
};

#endif // StaffWINDOW_H
