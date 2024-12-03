#include "pointofinterest.h"


PointOfInterest::PointOfInterest(int id, double laengengrad, double breitengrad, double genauigkeit, string kategorie, string bemerkung)
    : Ort(id, laengengrad, breitengrad, genauigkeit), kategorie(kategorie), bemerkung(bemerkung)
{

}

double PointOfInterest::entfernung(double laengengrad1, double breitengrad1, double laengengrad2, double breitengrad2) const
{
    double earthRadius = 6371.0;  // Earth's radius in kilometers

    // Convert degrees to radians
    laengengrad1 = laengengrad1 * M_PI / 180.0;
    breitengrad1 = breitengrad1 * M_PI / 180.0;
    laengengrad2 = laengengrad2 * M_PI / 180.0;
    breitengrad2 = breitengrad2 * M_PI / 180.0;

    // Haversine formula
    double dLat = breitengrad2 - breitengrad1;
    double dLon = laengengrad2 - laengengrad1;

    double innerAsin = std::sin(dLat / 2) * std::sin(dLat / 2) +
                       std::cos(breitengrad1) * std::cos(breitengrad2) *
                           std::sin(dLon / 2) * std::sin(dLon / 2);

    double answer = 2 * earthRadius * std::asin(std::sqrt(innerAsin));
    return answer;
}



string PointOfInterest::getStrasse() const { return "override"; }

int PointOfInterest::getHausNummer() const { return 0; }

string PointOfInterest::getGemeinde() const { return "override"; }

int PointOfInterest::getPlz() const { return 0; }

string PointOfInterest::getKategorie() const
{
    return kategorie;
}

string PointOfInterest::getBemerkung() const
{
    return bemerkung;
}
