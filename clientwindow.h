#ifndef CLIENTWINDOW_H
#define CLIENTWINDOW_H

#include <QDialog>
#include <memory>
#include "databasecontrol.h"

class ClientControl;

namespace Ui {
class ClientWindow;
}

class ClientWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ClientWindow(ClientControl &control ,QWidget *parent = 0);
    ~ClientWindow();
    void displayAnimalList();

private slots:
    void on_recommandButton_clicked();
    void on_AnimalListTable_doubleClicked(const QModelIndex &index);



    void on_saveButton_clicked();

private:
    ClientControl &_control;
    Ui::ClientWindow *ui;

    int _tableCol;
    int _tableRow;
};

#endif // CLIENTWINDOW_H
