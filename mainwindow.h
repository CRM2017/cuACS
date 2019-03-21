// This is main window UI include staff button and client button which are used to lauch staff window and client window
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <memory>
#include "maincontrol.h"
class MainControl;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(MainControl& control, QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_StaffButton_clicked();
    void on_clientButton_clicked();

private:
    MainControl& _control;
    Ui:: MainWindow *ui;
//  std::unique_ptr<Ui::MainWindow> _ui;
};

#endif // MAINWINDOW_H
