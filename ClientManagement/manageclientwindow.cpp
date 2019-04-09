#include "ClientManagement/manageclientwindow.h"
#include "ui_manageclientwindow.h"
#include "Storage/client.h"
#include "StaffInterface/staffwindow.h"
#include "StaffInterface/staffcontrol.h"
#include "ClientManagement/manageclientcontrol.h"

ManageClientWindow::ManageClientWindow(ManageClientControl &control ,QWidget *parent) :
    _control(control),
    QDialog(parent),
    ui(new Ui::ManageClientWindow)
{
    ui->setupUi(this);
}

ManageClientWindow::~ManageClientWindow()
{
    //delete ui;
}

void ManageClientWindow::on_submitButton_clicked()
{
    DatabaseControl dbcontrol = DataBaseControlFactory::getDatabaseControl();
    Client *newClient = new Client(_id,_name, _phone, _email,_address ,_age, _gender, _Animaltype, _Animalbreed, _Animalage, _Animalgender , _Animalcolor, _Animalweight, _Animalheight, _Animalspayed, _Animalvaccine, _Animalaggressivity, _Animaltrained,
                                   _Animalpersonality, _Animalfeeding, _Animalfood, _Animalappetite, _Animalsource, _Animalexercise, _Animalskills, _Animallearning, _Animalspace, _Animalfee, _PriorAttribute1, _PriorAttribute2, _PriorAttribute3, _PriorAttribute4, _PriorAttribute5);
    qDebug()<< _Animaltype;
    dbcontrol.insertClient(newClient);
    this->close();

}

void ManageClientWindow::hideSubmitButton(){
    ui->submitButton->hide();
}
void ManageClientWindow::hideEditButton(){
    ui->editButton->hide();
}
void ManageClientWindow::hideSaveButton(){
    ui->saveButton->hide();
}
void ManageClientWindow::disableACMResultButton(){
    ui->ViewACMButton->setDisabled(true);
}
void ManageClientWindow::showACMResultButton(){
    ui->ViewACMButton->setDisabled(false);
}

//slots
void ManageClientWindow::on_ID_textEdited(const QString &arg1)
{
    _id=arg1;
}

void ManageClientWindow::on_name_textEdited(const QString &arg1)
{
    _name=arg1;
}

void ManageClientWindow::on_phone_textEdited(const QString &arg1)
{
    _phone=arg1;
}

void ManageClientWindow::on_age_textEdited(const QString &arg1)
{
    _age= arg1;
}

void ManageClientWindow::on_email_textEdited(const QString &arg1)
{
    _email = arg1;
}

void ManageClientWindow::on_address_textEdited(const QString &arg1)
{
    _address =arg1;
}

void ManageClientWindow::on_gender_currentIndexChanged(const QString &arg1)
{
    _gender=arg1;
}
void ManageClientWindow::on_SpeciesComBox_currentIndexChanged(const QString &arg1)
{
    _Animaltype = arg1;
}

void ManageClientWindow::on_BreedComBox_currentIndexChanged(const QString &arg1)
{
    _Animalbreed = arg1;
}

void ManageClientWindow::on_AgeComBox_currentIndexChanged(const QString &arg1)
{
    _Animalage = arg1;
}


void ManageClientWindow::on_GenderComBox_currentIndexChanged(const QString &arg1)
{
    _Animalgender = arg1;
}

void ManageClientWindow::on_PrimaryColorComBox_currentIndexChanged(const QString &arg1)
{
    _Animalcolor = arg1;
}


void ManageClientWindow::on_WeightComBox_currentIndexChanged(const QString &arg1)
{
    _Animalweight = arg1;
}


void ManageClientWindow::on_HeightComBox_currentIndexChanged(const QString &arg1)
{
    _Animalheight = arg1;
}

void ManageClientWindow::on_SpayedComBox_currentIndexChanged(const QString &arg1)
{
    _Animalspayed = arg1;
}

void ManageClientWindow::on_VaccineComBox_currentIndexChanged(const QString &arg1)
{
    _Animalvaccine = arg1;
}

void ManageClientWindow::on_AggressivityComBox_currentIndexChanged(const QString &arg1)
{
    _Animalaggressivity = arg1;
}

void ManageClientWindow::on_TrainedComBox_currentIndexChanged(const QString &arg1)
{
    _Animaltrained = arg1;
}

void ManageClientWindow::on_PersonalityComBox_currentIndexChanged(const QString &arg1)
{
    _Animalpersonality = arg1;
}

void ManageClientWindow::on_FeedingDifficultyComBox_currentIndexChanged(const QString &arg1)
{
    _Animalfeeding = arg1;
}

void ManageClientWindow::on_FoodPreferenceComBox_currentIndexChanged(const QString &arg1)
{
    _Animalfood = arg1;
}

void ManageClientWindow::on_AppetiteLevelComBox_currentIndexChanged(const QString &arg1)
{
    _Animalappetite = arg1;
}

void ManageClientWindow::on_AdoptionSourceComBox_currentIndexChanged(const QString &arg1)
{
    _Animalsource = arg1;
}

void ManageClientWindow::on_ExerciseNeedComBox_currentIndexChanged(const QString &arg1)
{
    _Animalexercise = arg1;
}

void ManageClientWindow::on_SpecialSkillsComBox_currentIndexChanged(const QString &arg1)
{
    _Animalskills = arg1;
}

void ManageClientWindow::on_LearnSpeedComBox_currentIndexChanged(const QString &arg1)
{
    _Animallearning = arg1;
}

void ManageClientWindow::on_SpaceNeedComBox_currentIndexChanged(const QString &arg1)
{
    _Animalspace = arg1;
}

void ManageClientWindow::on_AdoptionPriceComBox_currentIndexChanged(const QString &arg1)
{
    _Animalfee = arg1;
}

void ManageClientWindow::on_PriAttComBox1_currentIndexChanged(const QString &arg1)
{
    _PriorAttribute1 = arg1;
}

void ManageClientWindow::on_PriAttComBox2_currentIndexChanged(const QString &arg1)
{
    _PriorAttribute2 = arg1;
}

void ManageClientWindow::on_PriAttComBox3_currentIndexChanged(const QString &arg1)
{
    _PriorAttribute3 = arg1;
}

void ManageClientWindow::on_PriAttComBox4_currentIndexChanged(const QString &arg1)
{
    _PriorAttribute4 = arg1;
}

void ManageClientWindow::on_PriAttComBox5_currentIndexChanged(const QString &arg1)
{
    _PriorAttribute5 = arg1;
}


void ManageClientWindow::updateClientListFromDB(int col){
    DatabaseControl _dbControl = DataBaseControlFactory::getDatabaseControl();
    QString id, name, phone, email, address, age, gender, Animaltypes, Animalbreed, Animalage,Animalgender, Animalcolor, Animalweight, Animalheight, Animalspayed, Animalvaccine,
            Animalaggressivity, Animaltrained, Animalpersonality, Animalfeeding, Animalfood, Animalappetite, Animalsource, Animalexercise, Animalskills,
            Animallearning, Animalspace,Animalfee, PriorAttribute1, PriorAttribute2, PriorAttribute3, PriorAttribute4, PriorAttribute5;
    vector <vector<QString>> data;
    data = _dbControl.getClientInfo();
    id = data[0][col];
    name = data[1][col];
    phone = data[2][col];
    email = data[3][col];
    address = data[4][col];
    age = data[5][col];
    gender = data[6][col];
    Animaltypes = data[7][col];
    Animalbreed= data[8][col];
    Animalage = data[9][col];
    Animalgender= data[10][col];
    Animalcolor= data[11][col];
    Animalweight= data[12][col];
    Animalheight = data[13][col];
    Animalspayed = data[14][col];
    Animalvaccine = data[15][col];
    Animalaggressivity = data[16][col];
    Animaltrained = data[17][col];
    Animalpersonality = data[18][col];
    Animalfeeding = data[19][col];
    Animalfood = data[20][col];
    Animalappetite = data[21][col];
    Animalsource = data[22][col];
    Animalexercise = data[23][col];
    Animalskills = data[24][col];
    Animallearning = data[25][col];
    Animalspace = data[26][col];
    Animalfee = data[27][col];
    PriorAttribute1 = data[28][col];
    PriorAttribute2 = data[29][col];
    PriorAttribute3 = data[30][col];
    PriorAttribute4 = data[31][col];
    PriorAttribute5 = data[32][col];

    ui->ID->setText(id);
    ui->name->setText(name);
    ui->phone->setText(phone);
    ui->email->setText(email);
    ui->age->setText(age);
    ui->address->setText(address);
    ui->gender->setCurrentText(gender);


    ui->SpeciesComBox->setCurrentText(Animaltypes);
    ui->BreedComBox->setCurrentText(Animalbreed);
    ui->AgeComBox->setCurrentText(Animalage);
    ui->GenderComBox->setCurrentText(Animalgender);
    ui->PrimaryColorComBox->setCurrentText(Animalcolor);
    ui->WeightComBox->setCurrentText(Animalweight);
    ui->HeightComBox->setCurrentText(Animalheight);
    ui->SpayedComBox->setCurrentText(Animalspayed);
    ui->VaccineComBox->setCurrentText(Animalvaccine);
    ui->AggressivityComBox->setCurrentText(Animalaggressivity);
    ui->TrainedComBox->setCurrentText(Animaltrained);
    ui->PersonalityComBox->setCurrentText(Animalpersonality);
    ui->FeedingDifficultyComBox->setCurrentText(Animalfeeding);
    ui->FoodPreferenceComBox->setCurrentText(Animalfood);
    ui->AppetiteLevelComBox->setCurrentText(Animalappetite);
    ui->AdoptionSourceComBox->setCurrentText(Animalsource);
    ui->ExerciseNeedComBox->setCurrentText(Animalexercise);
    ui->SpecialSkillsComBox->setCurrentText(Animalskills);
    ui->LearnSpeedComBox->setCurrentText(Animallearning);
    ui->SpaceNeedComBox->setCurrentText(Animalspace);
    ui->AdoptionPriceComBox->setCurrentText(Animalfee);
    ui->PriAttComBox1->setCurrentText(PriorAttribute1);
    ui->PriAttComBox2->setCurrentText(PriorAttribute2);
    ui->PriAttComBox3->setCurrentText(PriorAttribute3);
    ui->PriAttComBox4->setCurrentText(PriorAttribute4);
    ui->PriAttComBox5->setCurrentText(PriorAttribute5);


    ui->ID->setReadOnly(true);
    ui->name->setReadOnly(true);
    ui->phone->setReadOnly(true);
    ui->email->setReadOnly(true);
    ui->address->setReadOnly(true);
    ui->age->setReadOnly(true);
    ui->gender->setEnabled(false);

    ui->SpeciesComBox->setEnabled(false);
    ui->BreedComBox->setEnabled(false);
    ui->AgeComBox->setEnabled(false);
    ui->GenderComBox->setEnabled(false);
    ui->PrimaryColorComBox->setEnabled(false);
    ui->WeightComBox->setEnabled(false);
    ui->HeightComBox->setEnabled(false);
    ui->SpayedComBox->setEnabled(false);
    ui->VaccineComBox->setEnabled(false);
    ui->AggressivityComBox->setEnabled(false);
    ui->TrainedComBox->setEnabled(false);
    ui->PersonalityComBox->setEnabled(false);
    ui->FeedingDifficultyComBox->setEnabled(false);
    ui->FoodPreferenceComBox->setEnabled(false);
    ui->AppetiteLevelComBox->setEnabled(false);
    ui->AdoptionSourceComBox->setEnabled(false);
    ui->ExerciseNeedComBox->setEnabled(false);
    ui->SpecialSkillsComBox->setEnabled(false);
    ui->LearnSpeedComBox->setEnabled(false);
    ui->SpaceNeedComBox->setEnabled(false);
    ui->AdoptionPriceComBox->setEnabled(false);
    ui->PriAttComBox1->setEnabled(false);
    ui->PriAttComBox2->setEnabled(false);
    ui->PriAttComBox3->setEnabled(false);
    ui->PriAttComBox4->setEnabled(false);
    ui->PriAttComBox5->setEnabled(false);

}


void ManageClientWindow::on_editButton_clicked()
{
    ui->saveButton->show();
    ui->editButton->hide();

    ui->ID->setReadOnly(false);
    ui->name->setReadOnly(false);
    ui->phone->setReadOnly(false);
    ui->email->setReadOnly(false);
    ui->address->setReadOnly(false);
    ui->age->setReadOnly(false);
    ui->gender->setEnabled(true);

    ui->SpeciesComBox->setEnabled(true);
    ui->BreedComBox->setEnabled(true);
    ui->AgeComBox->setEnabled(true);
    ui->GenderComBox->setEnabled(true);
    ui->PrimaryColorComBox->setEnabled(true);
    ui->WeightComBox->setEnabled(true);
    ui->HeightComBox->setEnabled(true);
    ui->SpayedComBox->setEnabled(true);
    ui->VaccineComBox->setEnabled(true);
    ui->AggressivityComBox->setEnabled(true);
    ui->TrainedComBox->setEnabled(true);
    ui->PersonalityComBox->setEnabled(true);
    ui->FeedingDifficultyComBox->setEnabled(true);
    ui->FoodPreferenceComBox->setEnabled(true);
    ui->AppetiteLevelComBox->setEnabled(true);
    ui->AdoptionSourceComBox->setEnabled(true);
    ui->ExerciseNeedComBox->setEnabled(true);
    ui->SpecialSkillsComBox->setEnabled(true);
    ui->LearnSpeedComBox->setEnabled(true);
    ui->SpaceNeedComBox->setEnabled(true);
    ui->AdoptionPriceComBox->setEnabled(true);
    ui->PriAttComBox1->setEnabled(true);
    ui->PriAttComBox2->setEnabled(true);
    ui->PriAttComBox3->setEnabled(true);
    ui->PriAttComBox4->setEnabled(true);
    ui->PriAttComBox5->setEnabled(true);


    _id = ui->ID->text();
    _name = ui->name->text();
    _phone = ui->phone->text();
    _email = ui ->email->text();
    _address = ui->address->text();
    _age  = ui->age->text();
    _gender = ui->gender->currentText();
    _Animalage = ui->AgeComBox->currentText();
    _Animaltype = ui->SpeciesComBox->currentText();
    _Animalbreed = ui->BreedComBox->currentText();
    _Animalage = ui->AgeComBox->currentText();
    _Animalgender = ui->GenderComBox->currentText();
    _Animalcolor = ui->PrimaryColorComBox->currentText();
    _Animalweight = ui->WeightComBox->currentText();
    _Animalheight = ui->HeightComBox->currentText();
    _Animalspayed = ui->SpayedComBox->currentText();
    _Animalvaccine = ui->VaccineComBox->currentText();
    _Animalaggressivity = ui->AggressivityComBox->currentText();
    _Animaltrained = ui->TrainedComBox->currentText();
    _Animalpersonality = ui->PersonalityComBox->currentText();
    _Animalfeeding = ui->FeedingDifficultyComBox->currentText();
    _Animalfood = ui->FoodPreferenceComBox->currentText();
    _Animalappetite = ui->AppetiteLevelComBox->currentText();
    _Animalsource = ui->AdoptionSourceComBox->currentText();
    _Animalexercise = ui->ExerciseNeedComBox->currentText();
    _Animalskills = ui->SpecialSkillsComBox->currentText();
    _Animallearning = ui->LearnSpeedComBox->currentText();
    _Animalspace = ui->SpaceNeedComBox->currentText();
    _Animalfee = ui->AdoptionPriceComBox->currentText();
    _PriorAttribute1 = ui->PriAttComBox1->currentText();
    _PriorAttribute2 = ui->PriAttComBox2->currentText();
    _PriorAttribute3 = ui->PriAttComBox3->currentText();
    _PriorAttribute4 = ui->PriAttComBox4->currentText();
    _PriorAttribute5 = ui->PriAttComBox5->currentText();



}

void ManageClientWindow::on_saveButton_clicked()
{
    QSqlDatabase _db = QSqlDatabase::addDatabase("QSQLITE");
    _db.setDatabaseName("./cuACSdb.sqlite");
    _db.open();
    QSqlQuery qry;

    QString update_sql = "UPDATE clienttable SET "
                         "NAME= :name,"
                         "Phone= :phone,"
                         "EMAIL= :email,"
                         "ADDRESS= :address,"
                         "AGE= :age,"
                         "GENDER= :gender,"
                         "ANIMAL_SPECIES= :ani_type,"
                         "ANIMAL_BREED= :ani_breed,"
                         "ANIMAL_AGE= :ani_age,"
                         "ANIMAL_GENDER= :ani_gender,"
                         "ANIMAL_PRIMARYCOLOR= :ani_color,"
                         "ANIMAL_WEIGHT= :ani_weight,"
                         "ANIMAL_HEIGHT= :ani_height,"
                         "ANIMAL_SPAYED= :ani_spayed,"
                         "ANIMAL_VACCINE= :ani_vaccine,"
                         "ANIMAL_AGGRESSIVITY= :ani_aggressivity,"
                         "ANIMAL_TRAINED= :ani_trained,"
                         "ANIMAL_PERSONALITY= :ani_personality,"
                         "ANIMAL_FEEDINGDIFFICULTY= :ani_feeding,"
                         "ANIMAL_FOODPREFERENCE= :ani_food,"
                         "ANIMAL_APPETITELEVEL= :ani_appetite,"
                         "Animal_AdoptionSource= :ani_source,"
                         "ANIMAL_EXERCISENEED= :ani_exercise,"
                         "ANIMAL_SPECIALSKILL= :ani_skills,"
                         "Animal_LearnSpeed= :ani_learning,"
                         "ANIMAL_SPACENEED= :ani_space,"
                         "ANIMAL_ADOPTIONFEE= :ani_fee,"
                         "PRIOR_ATTRIBUTE1 = :pri_att1,"
                         "PRIOR_ATTRIBUTE2 = :pri_att2,"
                         "PRIOR_ATTRIBUTE3 = :pri_att3,"
                         "PRIOR_ATTRIBUTE4 = :pri_att4,"
                         "PRIOR_ATTRIBUTE5 = :pri_att5"
                         " WHERE ID = :id;";

    qry.prepare( update_sql);
    qry.bindValue(":id",ui->ID->text());
    qry.bindValue(":name", _name);
    qry.bindValue(":phone", _phone);
    qry.bindValue(":email", _email);
    qry.bindValue(":address", _address);
    qry.bindValue(":age", _age);
    qry.bindValue(":gender", _gender);
    qry.bindValue(":ani_type", _Animaltype);
    qry.bindValue(":ani_breed", _Animalbreed);
    qry.bindValue(":ani_age", _Animalage);
    qry.bindValue(":ani_gender", _Animalgender);
    qry.bindValue(":ani_color", _Animalcolor);
    qry.bindValue(":ani_weight", _Animalweight);
    qry.bindValue(":ani_height", _Animalheight);
    qry.bindValue(":ani_spayed", _Animalspayed);
    qry.bindValue(":ani_vaccine", _Animalvaccine);
    qry.bindValue(":ani_aggressivity", _Animalaggressivity);
    qry.bindValue(":ani_trained", _Animaltrained);
    qry.bindValue(":ani_personality", _Animalpersonality);
    qry.bindValue(":ani_feeding", _Animalfeeding);
    qry.bindValue(":ani_food", _Animalfood);
    qry.bindValue(":ani_appetite", _Animalappetite);
    qry.bindValue(":ani_source", _Animalsource);
    qry.bindValue(":ani_exercise", _Animalexercise);
    qry.bindValue(":ani_skills", _Animalskills);
    qry.bindValue(":ani_learning", _Animallearning);
    qry.bindValue(":ani_space", _Animalspace);
    qry.bindValue(":ani_fee", _Animalfee);
    qry.bindValue(":pri_att1", _PriorAttribute1);
    qry.bindValue(":pri_att2", _PriorAttribute2);
    qry.bindValue(":pri_att3", _PriorAttribute3);
    qry.bindValue(":pri_att4", _PriorAttribute4);
    qry.bindValue(":pri_att5", _PriorAttribute5);



    if (!qry.exec())
    {
        qDebug() << "ManageClientWindow:: Databse update " << qry.lastError();
    }

    this->close();



}

/*void ManageClientWindow::on_saveButton_clicked()
{
    QSqlDatabase _db = QSqlDatabase::addDatabase("QSQLITE");
    _db.setDatabaseName("./cuACSdb.sqlite");
    _db.open();
    QSqlQuery qry;


    qry.prepare("UPDATE clienttable set name = 'Harry' where id = '1001';");
    qDebug()<<"gebhjak";



    if (!qry.exec())
    {
        qDebug() << "ManageClientWindow:: Databse update " << qry.lastError();
    }
}*/


void ManageClientWindow::updateAnimalIndex(int AnimalIndex){
    _animalIndex = AnimalIndex;
}


void ManageClientWindow::on_ViewACMButton_clicked()
{
    ManageAnimalControl m = ManageAnimalControlFactory::getManageAnimalControl();
    m.hideSubmitButton();
    m.hideSaveButton();
    m.hideEditButton();
    m.hideUploadPhotoButton();
    m.updateAnimalDetailsFromDB(_animalIndex);
    m.show();
}
