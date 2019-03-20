// This is client manage window UI that used to add new client or view a client
#ifndef MANAGECLIENTWINDOW_H
#define MANAGECLIENTWINDOW_H

#include <QDialog>
#include <memory>
#include "DatabaseManagement/databasecontrol.h"
#include "DatabaseManagement/databasecontrolfactory.h"

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
    void hideSubmitButton();

private slots:

    void on_submitButton_clicked();

    void on_ID_textEdited(const QString &arg1);

    void on_name_textEdited(const QString &arg1);

    void on_phone_textEdited(const QString &arg1);

    void on_age_textEdited(const QString &arg1);

    void on_email_textEdited(const QString &arg1);

    void on_address_textEdited(const QString &arg1);

    void on_gender_currentIndexChanged(const QString &arg1);

public slots:
    void updateClientListFromDB(int col);

private:
    ManageClientControl &_control;
    Ui::ManageClientWindow *ui;
    QString _id, _name, _phone, _email, _address, _age, _gender;
};

#endif // MANAGECLIENTWINDOW_H
