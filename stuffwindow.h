#ifndef STUFFWINDOW_H
#define STUFFWINDOW_H

#include <QWidget>

namespace Ui {
class stuffwindow;
}

class stuffwindow : public QWidget
{
    Q_OBJECT

public:
    explicit stuffwindow(QWidget *parent = 0);
    ~stuffwindow();

private:
    Ui::stuffwindow *ui;
};

#endif // STUFFWINDOW_H
