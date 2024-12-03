#include "ortanlegen.h"
#include "ui_ortanlegen.h"

ortAnlegen::ortAnlegen(QWidget *parent, std::vector<Ort*> *vector)
    : QDialog(parent)
    , ui(new Ui::ortAnlegen)
    , ortVector(vector)  // Set ortVector
{
    ui->setupUi(this);
}


ortAnlegen::~ortAnlegen()
{
    delete ui;
}

void ortAnlegen::on_pushButton_clicked()
{
    string lineEditInput = ui->lineEdit_input->text().toStdString();



    if(lineEditInput == "adresse" || lineEditInput == "Adresse") {
        ui->label_breiten->setText("Breitengrad: ");
        ui->label_laengen->setText("Laengengrad: ");
        ui->label_genauigkeit->setText("Genauigkeit: ");
        ui->label_strasse->setText("Strasse: ");
        ui->label_hausnummer->setText("Hausnummer: ");
        ui->label_gemeinde->setText("Gemeinde: ");
        ui->label_plz->setText("Postleitzahl: ");
        isAdresse = true;
    } else if(lineEditInput == "poi") {
        ui->label_breiten->setText("Breitengrad: ");
        ui->label_laengen->setText("Laengengrad: ");
        ui->label_genauigkeit->setText("Genauigkeit: ");
        ui->label_strasse->setText("Kategorie: ");
        ui->label_hausnummer->setText("Bemerkung: ");
        ui->label_gemeinde->setText("");
        ui->label_plz->setText("");
        isAdresse = false;
    }
}


void ortAnlegen::on_pushButton_2_clicked()
{
    double laengengrad, breitengrad, genauigkeit;
    string strasse, gemeinde;
    int hausNummer, plz;

    string kategorie, bemerkung;

    if(isAdresse) {
        ui->label_erfolg->setText("Eingabe erfolgreich gespeichert");
        laengengrad = ui->lineEdit_laengen->text().toDouble();
        breitengrad = ui->lineEdit_breiten->text().toDouble();
        genauigkeit = ui->lineEdit_genauigkeit->text().toDouble();
        strasse = ui->lineEdit_strasse->text().toStdString();
        gemeinde = ui->lineEdit_gemeinde->text().toStdString();
        hausNummer = ui->lineEdit_hausnummer->text().toInt();
        plz = ui->lineEdit_plz->text().toInt();

        int id = ortVector->size();
        adressCount++;
        ortVector->push_back(new Adresse(id, laengengrad, breitengrad, genauigkeit, strasse, hausNummer, plz, gemeinde));

        isAdresse = false;
        //ui->label_debug->setText(QString::fromStdString(ortVector[0]->getStrasse()));
    } else {
        ui->label_erfolg->setText("Eingabe erfolgreich gespeichert");
        laengengrad = ui->lineEdit_laengen->text().toDouble();
        breitengrad = ui->lineEdit_breiten->text().toDouble();
        genauigkeit = ui->lineEdit_genauigkeit->text().toDouble();
        kategorie = ui->lineEdit_strasse->text().toStdString();
        bemerkung = ui->lineEdit_hausnummer->text().toStdString();

        int id = ortVector->size();
        poiCount++;
        ortVector->push_back(new PointOfInterest(id, laengengrad, breitengrad, genauigkeit, kategorie, bemerkung));


    }
}

