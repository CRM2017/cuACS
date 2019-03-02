#ifndef MANAGECLIENTWINDOW_H
#define MANAGECLIENTWINDOW_H

#include <QDialog>
#include <memory>
#include "databasecontrol.h"

class ManageClientControl;

namespace Ui {
class ManageClientWindow;
}

class ManageClientWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ManageClientWindow(ManageClientControl &control ,QWidget *parent = 0);
    ~ManageClientWindow();
    //void hideSubmitButton();

private slots:
    void on_submitButton_clicked();

private:
    ManageClientControl &_control;
    Ui::ManageClientWindow *ui;
};

#endif // MANAGECLIENTWINDOW_H
