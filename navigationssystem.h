#ifndef NAVIGATIONSSYSTEM_H
#define NAVIGATIONSSYSTEM_H
#include <vector>
#include "adresse.h"
#include "pointofinterest.h"

using namespace std;

class NavigationsSystem
{
public:
    NavigationsSystem();
    void createMeinOrt();

    void printNaviDaten();


    void anlegen();
    void anzeigen();
    void speichernLaden();

    double entfernungBerechnung();
    void isAddress(Ort ort);
protected:

    vector<Ort*> ortVector;

    int adressCount = 0;
    int poiCount = 0;
    bool adressFirstInVector = true;
};

#endif // NAVIGATIONSSYSTEM_H
