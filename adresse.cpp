#include "adresse.h"

Adresse::Adresse(int id, double laengengrad, double breitengrad, double genauigkeit, string strasse, int hausNummer, int plz, string gemeinde)
    : Ort(id, laengengrad, breitengrad, genauigkeit), strasse(strasse), hausNummer(hausNummer), plz(plz), gemeinde(gemeinde)
{

}

string Adresse::getStrasse() const
{
    return strasse;
}

string Adresse::getGemeinde() const
{
    return gemeinde;
}

int Adresse::getHausNummer() const
{
    return hausNummer;
}

int Adresse::getPlz() const
{
    return plz;
}

string Adresse::getKategorie() const {return "override";}

string Adresse::getBemerkung() const {return "override";}

// double Adresse::entfernung(double laengengrad1, double breitengrad1, double laengengrad2, double breitengrad2) const
// {
//     double earthRadius = 6371.0;  // Earth's radius in kilometers

//     // Convert degrees to radians
//     laengengrad1 = laengengrad1 * M_PI / 180.0;
//     breitengrad1 = breitengrad1 * M_PI / 180.0;
//     laengengrad2 = laengengrad2 * M_PI / 180.0;
//     breitengrad2 = breitengrad2 * M_PI / 180.0;

//     // Haversine formula
//     double dLat = breitengrad2 - breitengrad1;
//     double dLon = laengengrad2 - laengengrad1;

//     double innerAsin = std::sin(dLat / 2) * std::sin(dLat / 2) +
//                        std::cos(breitengrad1) * std::cos(breitengrad2) *
//                            std::sin(dLon / 2) * std::sin(dLon / 2);

//     double answer = 2 * earthRadius * std::asin(std::sqrt(innerAsin));
//     return answer;
// }
