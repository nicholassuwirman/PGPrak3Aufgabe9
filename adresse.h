#ifndef ADRESSE_H
#define ADRESSE_H
#include "ort.h"
#include "string"
using namespace std;

class Adresse : public Ort
{
public:
    Adresse(int id = 0, double laengengrad = 0, double breitengrad = 0, double genauigkeit = 0, string strasse = "default", int hausNummer = 0, int plz = 0, string gemeinde = "default");
    string getStrasse() const override;

    string getGemeinde() const override;

    int getHausNummer() const override;

    int getPlz() const override;

    string getKategorie() const override;
    string getBemerkung() const override;

    //double entfernung(double laengengrad1, double breitengrad1, double laengengrad2, double breitengrad2) const ;

private:
    string strasse, gemeinde;
    int hausNummer, plz;
};

#endif // ADRESSE_H
