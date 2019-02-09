#ifndef MANAGEANIMALWINDOW_H
#define MANAGEANIMALWINDOW_H

#include <QDialog>
#include <memory>
#include "databasecontrol.h"

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
    void hideSubmitButton();

private slots:

    void on_id_textEdited(const QString &arg1);

    void on_name_textEdited(const QString &arg1);

    void on_type_textEdited(const QString &arg1);

    void on_submitButton_clicked();

public slots:
    void updateTextEditFromDB(int col);

private:
    ManageAnimalControl &_control;

    Ui:: ManageAnimalWindow *ui;
    int _id;
    QString _name;
    QString _type;
//    std::unique_ptr<Ui::ManageAnimalWindow> ui;
};

#endif // MANAGEANIMALWINDOW_H
