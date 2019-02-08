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

    void on_viewButton_clicked();

private:
    StuffControl &_control;
    Ui::StuffWindow *ui;

//    std::unique_ptr<Ui::StuffWindow> ui;
};

#endif // STUFFWINDOW_H
