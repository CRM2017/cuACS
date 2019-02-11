#ifndef STUFFWINDOW_H
#define STUFFWINDOW_H

#include <QDialog>
#include <memory>
#include "databasecontrol.h"

class StuffControl;

namespace Ui {
class StuffWindow;
}

class StuffWindow : public QDialog
{
    Q_OBJECT

public:
    explicit StuffWindow(StuffControl &control,QWidget *parent = 0);
    ~StuffWindow();
    void displayAnimalList();

private slots:
    void on_addAnimalButton_clicked();
    void on_updateButton_clicked();
    void on_AnimalListTable_doubleClicked(const QModelIndex &index);

private:
    StuffControl &_control;
    Ui::StuffWindow *ui;

//    vector<int> _IDList = _dbcontrol.getIDList();
//    vector<QString> _NameList = _dbcontrol.getNameList();
//    vector<QString> _TypeList = _dbcontrol.getTypeList();
    int _tableCol;
    int _tableRow;

//    std::unique_ptr<Ui::StuffWindow> ui;
};

#endif // STUFFWINDOW_H
