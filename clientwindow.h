// This is cliend window UI that can display client detail and list animals
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
    void displayClienInfo();


private slots:
    void on_recommandButton_clicked();
    void on_AnimalListTable_doubleClicked(const QModelIndex &index);


    void on_id_textEdited(const QString &arg1);

    void on_confirmButton_clicked();

private:
    ClientControl &_control;
    Ui::ClientWindow *ui;
    QString _id;
    int _tableCol;
    int _tableRow;
};

#endif // CLIENTWINDOW_H
