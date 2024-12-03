#include "ortanzeigenwindow.h"
#include "ui_ortanzeigenwindow.h"
using namespace std;

ortAnzeigenWindow::ortAnzeigenWindow(QWidget *parent, std::vector<Ort*> *vector)
    : QDialog(parent)
    , ui(new Ui::ortAnzeigenWindow)
    , ortVector(vector)  // Set ortVector
{
    ui->setupUi(this);
}
ortAnzeigenWindow::~ortAnzeigenWindow()
{
    delete ui;
}

void ortAnzeigenWindow::on_pushButton_clicked()
{
    string input = ui->lineEdit_anzeigenInput->text().toStdString();

    if(input == "adresse") {
        //cout << "Laengengrad | Breitengrad | Genauigkeit | Strasse | Hausnummer | Postleitzahl | Gemeinde" << endl;
        QString output = "Laengengrad | Breitengrad | Genauigkeit | Strasse | Hausnummer | Postleitzahl | Gemeinde\n";
        for (auto* ort : *ortVector) {
            if (auto* adr = dynamic_cast<Adresse*>(ort)) {
                output += QString::fromStdString(
                    std::to_string(adr->getLaengengrad()) + " | " +
                    std::to_string(adr->getBreitengrad()) + " | " +
                    std::to_string(adr->getGenauigkeit()) + " | " +
                    adr->getStrasse() + " | " +
                    std::to_string(adr->getHausNummer()) + " | " +
                    std::to_string(adr->getPlz()) + " | " +
                    adr->getGemeinde() + "|" "\n"
                    );
            }
        }
        ui->textEdit_description->setText(output);

    } else if (input == "poi") {
        ortVector->push_back(new Adresse(1, 1, 1, 1, "strasse", 12, 123123, "gemeinde"));

        //cout << "Laengengrad | Breitengrad | Genauigkeit | Kategorie | Bemerkung |;
        QString output = "Laengengrad | Breitengrad | Genauigkeit | Kategorie | Bemerkung |\n";
        for (auto* ort : *ortVector) {
            if (auto* adr = dynamic_cast<PointOfInterest*>(ort)) {
                output += QString::fromStdString(
                    std::to_string(adr->getLaengengrad()) + " | " +
                    std::to_string(adr->getBreitengrad()) + " | " +
                    std::to_string(adr->getGenauigkeit()) + " | " +
                    adr->getKategorie() + " | " +
                    adr->getBemerkung() + " | " + "\n"
                    );
            }
        }
        ui->textEdit_description->setText(output);
    }
}

