#ifndef POINTOFINTEREST_H
#define POINTOFINTEREST_H
#include "ort.h"
#include "string"
using namespace std;

class PointOfInterest : public Ort
{
public:
    PointOfInterest(int id, double laengengrad = 0, double breitengrad = 0, double genauigkeit = 0, string kategorie = "default", string bemerkung = "default");
    double entfernung(double laengengrad1, double breitengrad1, double laengengrad2, double breitengrad2) const ;

    string getStrasse() const override;
    int getHausNummer() const override;
    string getGemeinde() const override;
    int getPlz() const override;

    string getKategorie() const override;

    string getBemerkung() const override;

private:
    double laengengrad, breitengrad, genauigkeit;
    string kategorie, bemerkung;
};

#endif // POINTOFINTEREST_H
