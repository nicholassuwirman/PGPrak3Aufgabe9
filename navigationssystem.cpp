#include "navigationssystem.h"
#include "pointofinterest.h"
#include <algorithm>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <vector>



NavigationsSystem::NavigationsSystem() {}

void NavigationsSystem::createMeinOrt()
{
    ortVector.push_back(new PointOfInterest(0, 48.86, 8.63, 0, "h-da", "Hochschule, Bildungseinrichtung"));
}

void NavigationsSystem::printNaviDaten()
{
    // if(userInput == "adresse") {
    //     cout << "Laengengrad | Breitengrad | Genauigkeit | Strasse | Hausnummer | Postleitzahl | Gemeinde" << endl;
    //     cout << "----------------------------------------------------------------------------------------------" << endl;
    //     for (auto* ort : ortVector) {
    //         if (auto* adr = dynamic_cast<Adresse*>(ort)) {
    //             std::cout << std::setw(12) << adr->getLaengengrad() << "|" << std::setw(13) << adr->getBreitengrad() << "|"
    //                       << std::setw(13) << adr->getGenauigkeit() << "|" << std::setw(11) << adr->getStrasse() << "|"
    //                       << std::setw(11) << adr->getHausNummer() << "|" << std::setw(14) << adr->getPlz() << "|"
    //                       << std::setw(12) << adr->getGemeinde() << std::endl;
    //         }
    //     }

    cout << "Navi-Daten" << endl;
    cout << "------------------------------------------------------------------------------------------------------" << endl;
    cout << "ID |  Typ  |  Name                 |  Latitude  |  Longitude  |  Parameters" << endl;
    for(auto* ort : ortVector) {
        if(auto* adr = dynamic_cast<PointOfInterest*>(ort)) {
            cout << setw(3) << ort->getId()+1 << "|  Poi  |" << setw(6) << ort->getKategorie() << setw(18) << "|"
                 << setw(6) <<ort->getBreitengrad() << setw(7) << "|" << setw(7) <<ort->getLaengengrad()
                 << setw(7) << "|" << setw(6) << ort->getBemerkung() << endl;
        }
        else if(auto* adr = dynamic_cast<Adresse*>(ort))
        {
            cout << setw(3) << ort->getId()+1 << "|  Adr  |" << setw(6) << ort->getGemeinde() << setw(18) << "|"
                 << setw(6) <<ort->getBreitengrad() << setw(7) << "|" << setw(7) <<ort->getLaengengrad()
                 << setw(7) << "|" << setw(6) << ort->getStrasse() << ort->getHausNummer() << ", " << ort->getGemeinde() << endl;
        }
    }


}


void NavigationsSystem::anlegen()
{
    string userInput;

    cout << "Adresse oder point of interest einlegen?, bitte Tippen Sie adresse oder poi" << endl;
    cin >> userInput;
    cin.ignore();

    if(userInput == "adresse") {

        double laengengrad, breitengrad, genauigkeit;
        string strasse, gemeinde;
        int hausNummer, plz;

        cout << "Tippen Sie das Laengengrad" << endl;
        cin >> laengengrad;
        cout << "Tippen Sie das breitengrad" << endl;
        cin >> breitengrad;
        cout << "Tippen Sie das genauigkeit" << endl;
        cin >> genauigkeit;
        cin.ignore();

        cout << "Tippen Sie das strasse" << endl;
        getline(cin, strasse);
        cout << "Tippen Sie das gemeinde" << endl;
        getline(cin, gemeinde);
        cout << "Tippen Sie die hausNummer" << endl;
        cin >> hausNummer;
        cout << "Tippen Sie die plz" << endl;
        cin >> plz;
        cin.ignore();

        int id = ortVector.size();
        adressCount++;
        ortVector.push_back(new Adresse(id, laengengrad, breitengrad, genauigkeit, gemeinde, hausNummer, plz, strasse));
    } else if (userInput == "poi") {
        double laengengrad, breitengrad, genauigkeit;
        string kategorie, bemerkung;

        cout << "Tippen Sie das Laengengrad" << endl;
        cin >> laengengrad;
        cout << "Tippen Sie das breitengrad" << endl;
        cin >> breitengrad;
        cout << "Tippen Sie das genauigkeit" << endl;
        cin >> genauigkeit;
        cin.ignore();

        cout << "Tippen Sie die Kategorie" << endl;
        getline(cin, kategorie);
        cout << "Tippen Sie eine Bemerkung" << endl;
        getline(cin, bemerkung);

        int id = ortVector.size();
        poiCount++;
        ortVector.push_back(new PointOfInterest(id, laengengrad, breitengrad, genauigkeit, kategorie, bemerkung));
    } else {
        cout << "invalid input" << endl;
    }
}

void NavigationsSystem::anzeigen()
{
    string userInput;

    cout << "Adresse oder point of interest anzeigen?, bitte Tippen Sie adresse oder poi" << endl;
    getline(cin, userInput);

    if(userInput == "adresse") {
        cout << "Laengengrad | Breitengrad | Genauigkeit | Strasse | Hausnummer | Postleitzahl | Gemeinde" << endl;
        cout << "----------------------------------------------------------------------------------------------" << endl;
        for (auto* ort : ortVector) {
            if (auto* adr = dynamic_cast<Adresse*>(ort)) {
                std::cout << std::setw(12) << adr->getLaengengrad() << "|" << std::setw(13) << adr->getBreitengrad() << "|"
                          << std::setw(13) << adr->getGenauigkeit() << "|" << std::setw(11) << adr->getStrasse() << "|"
                          << std::setw(11) << adr->getHausNummer() << "|" << std::setw(14) << adr->getPlz() << "|"
                          << std::setw(12) << adr->getGemeinde() << std::endl;
            }
        }

    } else if (userInput == "poi") {
        std::cout << "Laengengrad | Breitengrad | Genauigkeit | Kategorie | Bemerkung" << std::endl;
        std::cout << "------------------------------------------------------------------------------" << std::endl;

        for (auto* ort : ortVector) {
            if (auto* poi = dynamic_cast<PointOfInterest*>(ort)) {
                std::cout << std::setw(12) << poi->getLaengengrad() << "|" << std::setw(13) << poi->getBreitengrad() << "|"
                          << std::setw(13) << poi->getGenauigkeit() << "|" << std::setw(11) << poi->getKategorie() << "|"
                          << std::setw(11) << poi->getBemerkung() << std::endl;
            }
        }
    } else{
        cout << "invalid input" << endl;
    }
}

void NavigationsSystem::speichernLaden()
{
    string input;
    cout << "speichern oder laden?" << endl;
    cin >> input;

    if(input == "speichern") {
        string fileTitel;
        cout << "Titel des Files?" << endl;
        cin  >> fileTitel;
        bool PoiTitlePrinted = false;
        bool adressTitlePrinted = false;

        ofstream outFile(fileTitel);

        if(!outFile)
            cerr << "Error opening file" << endl;

        for(auto* ort: ortVector) {
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

        for(auto* ort : ortVector) {
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

        // outFile << "Adresse:" << endl;
        // for(int i = 0; i < adressCount; i++) {
        //     const double laengengrad = ortVector[i]->getLaengengrad();
        //     const double breitengrad = ortVector[i]->getBreitengrad();

        //     outFile << laengengrad << ", " << breitengrad << ", "
        //             << ortVector[i]->getGenauigkeit() << ", " << ortVector[i]->getGemeinde() << ", "
        //             << ortVector[i]->getHausNummer() << ", " << ortVector[i]->getPlz() << ", "
        //             << ortVector[i]->getStrasse() << endl;
        // }

        // outFile << "Poi:" << endl;
        // for(int i = adressCount; i < adressCount + poiCount; i++) {
        //     const double laengengrad = ortVector[i]->getLaengengrad();
        //     const double breitengrad = ortVector[i]->getBreitengrad();

        //     outFile << laengengrad << ", " << breitengrad << ", "
        //             << ortVector[i]->getGenauigkeit() << ", " << ortVector[i]->getKategorie() << ", "
        //             << ortVector[i]->getBemerkung() << endl;
        // }
    } else if(input == "laden") {
        string fileTitel, line;
        bool isAdresse = true;

        cout << "Titel des Files?" << endl;
        cin  >> fileTitel;

        ifstream inFile;
        inFile.open(fileTitel.c_str(), ios::in);

        if(!inFile)
            cerr << "Error opening file" << endl;

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

                int id = ortVector.size() + 1;

                ortVector.push_back(new Adresse(id, doubleLaengengrad, doubleBreitengrad, doubleGenauigkeit, strasse, intHausnummer, intPlz, gemeinde));
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

                int id = ortVector.size() + 1;


                ortVector.push_back(new PointOfInterest(id, doubleLaengengrad, doubleBreitengrad, doubleGenauigkeit, kategorie, bemerkung));
                poiCount++;
            }
        }
        inFile.close();
    }
}

// Helper function to trim spaces and convert to lowercase
string trimAndLowerCaseWindow(const string& input) {
    string result = input;

    // Trim leading and trailing spaces
    result.erase(result.begin(), find_if(result.begin(), result.end(), [](unsigned char ch) { return !isspace(ch); }));
    result.erase(find_if(result.rbegin(), result.rend(), [](unsigned char ch) { return !isspace(ch); }).base(), result.end());

    // Convert to lowercase for case-insensitive comparison
    transform(result.begin(), result.end(), result.begin(), ::tolower);

    return result;
}

#include <algorithm>  // for std::transform
#include <cctype>     // for std::tolower
#include <iostream>
#include <string>

double NavigationsSystem::entfernungBerechnung() {
    string input1, input2;
    cout << "Name of the first location (Adresse or POI)? " << endl;
    cin >> input1;
    cout << "Name of the second location (Adresse or POI)? " << endl;
    cin >> input2;

    // Normalize input by trimming whitespace and converting to lowercase for case-insensitive comparison
    input1 = trimAndLowerCaseWindow(input1);
    input2 = trimAndLowerCaseWindow(input2);

    Ort* ort1 = nullptr;
    Ort* ort2 = nullptr;

    // Search for the specified locations in ortVector
    for (auto* ort : ortVector) {
        if (auto* adr = dynamic_cast<Adresse*>(ort)) {
            // Match Adresse by street name (strasse), case-insensitive
            if (trimAndLowerCaseWindow(adr->getStrasse()) == input1) {
                ort1 = ort;
            }
            if (trimAndLowerCaseWindow(adr->getStrasse()) == input2) {
                ort2 = ort;
            }
        } else if (auto* poi = dynamic_cast<PointOfInterest*>(ort)) {
            // Match POI by category (kategorie), case-insensitive
            if (trimAndLowerCaseWindow(poi->getKategorie()) == input1) {
                ort1 = ort;
            }
            if (trimAndLowerCaseWindow(poi->getKategorie()) == input2) {
                ort2 = ort;
            }
        }
    }

    // Check if both locations were found
    if (!ort1 || !ort2) {
        cout << "One or both locations not found." << endl;
        if (!ort1) cout << "Could not find location matching: " << input1 << endl;
        if (!ort2) cout << "Could not find location matching: " << input2 << endl;
        return -1;  // Return -1 to indicate an error
    }

    // Now, we have the actual objects ort1 and ort2, so we can directly access their coordinates
    double laengenGrad1 = ort1->getLaengengrad();
    double breitenGrad1 = ort1->getBreitengrad();
    double laengenGrad2 = ort2->getLaengengrad();
    double breitenGrad2 = ort2->getBreitengrad();

    // Assuming entfernung is a method that calculates distance based on coordinates
    double distance = ort1->entfernung(laengenGrad1, breitenGrad1, laengenGrad2, breitenGrad2);
    cout << "The distance between " << input1 << " and " << input2 << " is: " << distance << " units." << endl;

    return distance;
}

