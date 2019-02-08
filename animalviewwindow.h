#ifndef ANIMALVIEWWINDOW_H
#define ANIMALVIEWWINDOW_H

#include <QDialog>

namespace Ui {
class AnimalViewWindow;
}

class AnimalViewWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AnimalViewWindow(QWidget *parent = 0);
    ~AnimalViewWindow();

private:
    Ui::AnimalViewWindow *ui;
};

#endif // ANIMALVIEWWINDOW_H
