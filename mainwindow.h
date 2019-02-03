#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "stuffwindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow( QWidget *parent = 0);
    ~MainWindow();


private slots:
    void on_stuffButton_clicked();

private:
    Ui::MainWindow *ui;
    StuffWindow *stuffWindow;
};

#endif // MAINWINDOW_H
