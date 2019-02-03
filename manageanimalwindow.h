#ifndef MANAGEANIMALWINDOW_H
#define MANAGEANIMALWINDOW_H

#include <QDialog>
#include <memory>

class ManageAnimalControl;

namespace Ui {
class ManageAnimalWindow;
}

class ManageAnimalWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ManageAnimalWindow(ManageAnimalControl &control ,QWidget *parent = 0);
    ~ManageAnimalWindow();

private:
    ManageAnimalControl &_control;
    std::unique_ptr<Ui::ManageAnimalWindow> ui;
};

#endif // MANAGEANIMALWINDOW_H
