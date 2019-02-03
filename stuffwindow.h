#ifndef STUFFWINDOW_H
#define STUFFWINDOW_H

#include <QDialog>

namespace Ui {
class StuffWindow;
}

class StuffWindow : public QDialog
{
    Q_OBJECT

public:
    explicit StuffWindow(QWidget *parent = 0);
    ~StuffWindow();

private slots:
    void on_animalList_clicked(const QModelIndex &index);


private:
    Ui::StuffWindow *ui;

};

#endif // STUFFWINDOW_H
