#include <iostream>
#include "Geo.cpp"
using namespace std;

int main() {
    cout << endl << "0 = UNDEF   1 = ROT   2 = GRUEN   3 = GELB   4 = BLAU" << endl << endl;

    Rechteck myRechteck;
    myRechteck.setValues(10, 15);
    myRechteck.setFlaeche(myRechteck.getLaenge(), myRechteck.getBreite());
    myRechteck.setUmfang(myRechteck.getLaenge(), myRechteck.getBreite());
    cout << "Rechteck" << endl << "Laenge: " << myRechteck.getLaenge() << "  Breite: " << myRechteck.getBreite() << "   Flaeche: " << myRechteck.getFlaeche() << "   Umfang: " << myRechteck.getUmfang() << "   Farbe: " << myRechteck.getColour() << endl << endl;

    Kreis myKreis;
    myKreis.setRadius(5);
    myKreis.setFlaeche(myKreis.getRadius());
    myKreis.setUmfang(myKreis.getRadius());
    cout << "Kreis" << endl << "Radius: " << myKreis.getRadius() << "   Flaeche: " << myKreis.getFlaeche() << "   Umfang: " << myKreis.getUmfang() << "   Farbe: " << myKreis.getColour() << endl << endl;

    Dreieck myDreieck;
    myDreieck.setValues(12 ,6 ,16);
    myDreieck.setFlaeche(myDreieck.getAnkathete(), myDreieck.getGegenkathete(), myDreieck.getHypothenuse());
    myDreieck.setUmfang(myDreieck.getAnkathete(), myDreieck.getGegenkathete(), myDreieck.getHypothenuse());
    cout << "Dreieck" << endl << "Ankathete: " << myDreieck.getAnkathete() << " Gegenkathete: " << myDreieck.getGegenkathete() << "   Hypothenuse: " << myDreieck.getHypothenuse() << "   Flaeche: " << myDreieck.getFlaeche() << "   Umfang: " << myDreieck.getUmfang() << "   Farbe: " << myDreieck.getColour() << endl << endl;

    Quadrat myQuadrat;
    myQuadrat.setFlaeche(myRechteck.getLaenge());
    myQuadrat.setUmfang(myRechteck.getLaenge());
    myQuadrat.setDiagonale(myRechteck.getLaenge());
    cout << "Quadrat" << endl << "Laenge: " << myRechteck.getLaenge() << "   Flaeche: " << myQuadrat.getFlaeche() << "   Umfang: " << myQuadrat.getUmfang() << "  Diagonale: " << myQuadrat.getDiagonale() << "   Farbe: " << myQuadrat.getColour() << endl << endl;
}
