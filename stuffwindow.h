#ifndef STUFFWINDOW_H
#define STUFFWINDOW_H

#include <QDialog>
#include <memory>

class StuffControl;

namespace Ui {
class StuffWindow;
}

class StuffWindow : public QDialog
{
    Q_OBJECT

public:
    explicit StuffWindow(StuffControl &control ,QWidget *parent = 0);
    ~StuffWindow();

private slots:
    void on_addAnimalButton_clicked();

private:
    StuffControl &_control;
    //Ui::stuffwindow *ui;
    std::unique_ptr<Ui::StuffWindow> ui;
};

#endif // STUFFWINDOW_H
