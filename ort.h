#ifndef ORT_H
#define ORT_H
#include "math.h"
#include <string>
using namespace std;

class Ort
{
public:
    Ort(int id = 0, double laengengrad = 0, double breitengrad = 0, double genauigkeit = 0);
    double entfernung(double laengengrad1, double breitengrad1, double laengengrad2, double breitengrad2);
    void anlegen();
    double getLaengengrad() const;

    double getBreitengrad() const;

    double getGenauigkeit() const;

    virtual string getStrasse() const = 0;
    virtual int getHausNummer() const = 0;
    virtual string getGemeinde() const = 0;
    virtual int getPlz() const = 0;

    virtual string getKategorie() const = 0;
    virtual string getBemerkung() const = 0;

    virtual int getId() const;

private:
    double laengengrad, breitengrad, genauigkeit;
    int id;
};

#endif // ORT_H
