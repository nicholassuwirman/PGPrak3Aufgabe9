#include "speichernladenwindow.h"
#include "ui_speichernladenwindow.h"
#include <iomanip>
#include <iostream>
#include <fstream>

speichernLadenWindow::speichernLadenWindow(QWidget *parent, std::vector<Ort*> *vector)
    : QDialog(parent)
    , ui(new Ui::speichernLadenWindow)
    , ortVector(vector)
{
    ui->setupUi(this);
}

speichernLadenWindow::~speichernLadenWindow()
{
    delete ui;
}

void speichernLadenWindow::on_pushButton_clicked()
{
    string input = ui->lineEdit_input->text().toStdString();

    if(input == "speichern") {
        ui->label_questionFileName->setText("What is the file name?");
        isSpeichern = true;
        //on_pushButton_2_clicked();

    } else if(input == "laden") {
        ui->label_questionFileName->setText("What is the file name?");
        isLaden = true;
        //on_pushButton_2_clicked();


    }
}

void speichernLadenWindow::on_pushButton_2_clicked()
{
    if(isSpeichern) {
        string fileName = ui->lineEdit_fileName->text().toStdString();
        bool PoiTitlePrinted = false;
        bool adressTitlePrinted = false;

        ofstream outFile(fileName);

        for(auto* ort: *ortVector) {
            if(auto* adr = dynamic_cast<Adresse*>(ort)) {
                if(adressTitlePrinted == false) {
                    outFile << "Adresse:" << endl;
                    adressTitlePrinted = true;
                }

                const double laengengrad = adr->getLaengengrad();
                const double breitengrad = adr->getBreitengrad();

                outFile << laengengrad << ", " << breitengrad << ", "
                        << adr->getGenauigkeit() << ", " << adr->getGemeinde() << ", "
                        << adr->getHausNummer() << ", " << adr->getPlz() << ", "
                        << adr->getStrasse() << endl;
            }
        }

        for(auto* ort : *ortVector) {
            if(auto* adr = dynamic_cast<PointOfInterest*>(ort)) {
                if(PoiTitlePrinted == false) {
                    outFile << "Poi:" << endl;
                    PoiTitlePrinted = true;
                }

                const double laengengrad = adr->getLaengengrad();
                const double breitengrad = adr->getBreitengrad();

                outFile << laengengrad << ", " << breitengrad << ", "
                        << adr->getGenauigkeit() << ", " << adr->getKategorie() << ", "
                        << adr->getBemerkung() << endl;
            }
        }
        ui->label_erfolgreich->setText("erfolgreich gespeichert");

        isSpeichern = false;
    } else if (isLaden) {
        string line;
        bool isAdresse = true;
        string fileName = ui->lineEdit_fileName->text().toStdString();

        ifstream inFile;
        inFile.open(fileName.c_str(), ios::in);

        //if(!Infile)

        while(getline(inFile, line)) {
            stringstream ss(line);

            if(line == "Adresse:") {
                isAdresse = true;
                continue;
            }
            if(line == "Poi:") {
                isAdresse = false;
                continue;
            }

            if(isAdresse) {
                string laengengrad, breitengrad, genauigkeit, gemeinde, hausnummer, plz, strasse;
                getline(ss, laengengrad, ',');
                const double doubleLaengengrad = stod(laengengrad);

                getline(ss, breitengrad, ',');
                const double doubleBreitengrad = stod(breitengrad);

                getline(ss, genauigkeit, ',');
                double doubleGenauigkeit = stod(genauigkeit);

                getline(ss, strasse, ',');

                getline(ss, hausnummer, ',');
                int intHausnummer = stoi(hausnummer);

                getline(ss, plz, ',');
                int intPlz = stod(plz);

                getline(ss, gemeinde, ',');

                int id = ortVector->size() + 1;

                ortVector->push_back(new Adresse(id, doubleLaengengrad, doubleBreitengrad, doubleGenauigkeit, strasse, intHausnummer, intPlz, gemeinde));
                adressFirstInVector = true;
                adressCount++;

            } else if(!isAdresse) {
                //PointOfInterest::PointOfInterest(double laengengrad, double breitengrad, double genauigkeit, string kategorie, string bemerkung)
                string laengengrad, breitengrad, genauigkeit, kategorie, bemerkung;

                getline(ss, laengengrad, ',');
                double doubleLaengengrad = stod(laengengrad);

                getline(ss, breitengrad, ',');
                double doubleBreitengrad = stod(breitengrad);

                getline(ss, genauigkeit, ',');
                double doubleGenauigkeit = stod(genauigkeit);

                getline(ss, kategorie, ',');

                getline(ss, bemerkung, ',');

                int id = ortVector->size() + 1;


                ortVector->push_back(new PointOfInterest(id, doubleLaengengrad, doubleBreitengrad, doubleGenauigkeit, kategorie, bemerkung));
                poiCount++;
            }
        }
        ui->label_erfolgreich->setText("erfolgreich gespeichert");
        inFile.close();
    }
}
