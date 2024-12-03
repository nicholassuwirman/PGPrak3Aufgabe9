#include "entfernungwindow.h"
#include "ui_entfernungwindow.h"

entfernungWindow::entfernungWindow(QWidget *parent, std::vector<Ort*> *vector)
    : QDialog(parent)
    , ui(new Ui::entfernungWindow)
    ,ortVector(vector)
{
    ui->setupUi(this);
}

entfernungWindow::~entfernungWindow()
{
    delete ui;
}

// Helper function to trim spaces and convert to lowercase
string trimAndLowerCase(const string& input) {
    string result = input;

    // Trim leading and trailing spaces
    result.erase(result.begin(), find_if(result.begin(), result.end(), [](unsigned char ch) { return !isspace(ch); }));
    result.erase(find_if(result.rbegin(), result.rend(), [](unsigned char ch) { return !isspace(ch); }).base(), result.end());

    // Convert to lowercase for case-insensitive comparison
    transform(result.begin(), result.end(), result.begin(), ::tolower);

    return result;
}

void entfernungWindow::on_pushButton_clicked()
{
    Ort* ort1 = nullptr;
    Ort* ort2 = nullptr;
    string input1 = ui->lineEdit_input1->text().toStdString();
    string input2 = ui->lineEdit_input2->text().toStdString();

    input1 = trimAndLowerCase(input1);
    input2 = trimAndLowerCase(input2);

    // Search for the specified locations in ortVector
    for (auto* ort : *ortVector) {
        if (auto* adr = dynamic_cast<Adresse*>(ort)) {
            // Match Adresse by street name (strasse), case-insensitive
            if (trimAndLowerCase(adr->getStrasse()) == input1) {
                ort1 = ort;
            }
            if (trimAndLowerCase(adr->getStrasse()) == input2) {
                ort2 = ort;
            }
        } else if (auto* poi = dynamic_cast<PointOfInterest*>(ort)) {
            // Match POI by category (kategorie), case-insensitive
            if (trimAndLowerCase(poi->getKategorie()) == input1) {
                ort1 = ort;
            }
            if (trimAndLowerCase(poi->getKategorie()) == input2) {
                ort2 = ort;
            }
        }
    }

    // Check if both locations were found
    if (!ort1 || !ort2) {
        ui->label_outputFirstLoc->setText("not found");  // Return -1 to indicate an error
        ui->label_outputSecondLoc->setText("not found");
    }

    // Now, we have the actual objects ort1 and ort2, so we can directly access their coordinates
    double laengenGrad1 = ort1->getLaengengrad();
    double breitenGrad1 = ort1->getBreitengrad();
    double laengenGrad2 = ort2->getLaengengrad();
    double breitenGrad2 = ort2->getBreitengrad();

    // Assuming entfernung is a method that calculates distance based on coordinates
    double distance = ort1->entfernung(laengenGrad1, breitenGrad1, laengenGrad2, breitenGrad2);
    ui->label_outputFirstLoc->setText(QString::fromStdString(input1));
    ui->label_outputSecondLoc->setText(QString::fromStdString(input2));

    ui->label_result->setText(QString::number(distance));
}

