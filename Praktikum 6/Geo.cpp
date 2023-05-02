#include "Geo.h"
#include "iostream"
#include "math.h"
using namespace std;

class Rechteck {
private:

    enum Colour farbe = ROT;

public:
    float Laenge, Breite, umfang, flaeche, Diagonale;

    void setValues(float L, float B){
        Laenge = L;
        Breite = B;
    }

    void setFlaeche(float Laenge, float Breite){
        flaeche = Laenge * Breite;
    }

    void setUmfang(float Laenge, float Breite){
        umfang = 2 * Laenge + 2 * Breite;
    }

    int getLaenge(){return Laenge;}
    int getBreite(){return Breite;}
    int getColour(){return farbe;}
    float getFlaeche(){return flaeche;}
    float getUmfang(){return umfang;}
};

class Kreis {
private:
    float Radius, flaeche, umfang;
    enum Colour farbe = GRUEN;
public:
    void setRadius(float R){
        Radius = R;
    }

    void setFlaeche(float Radius){
        flaeche = 2 * Radius * PI;
    }

    void setUmfang(float Radius){
        umfang = PI * Radius * Radius;
    }

    int getRadius(){return Radius;}
    int getColour(){return farbe;}
    float getFlaeche(){return flaeche;}
    float getUmfang(){return umfang;}
};

class Dreieck {
private:
    float Ankathete, Gegenkathete, Hypothenuse, flaeche, umfang;
    enum Colour farbe = GELB;
public:
    void setValues(float a, float b, float c){
        Ankathete = a;
        Gegenkathete = b;
        Hypothenuse = c;
    }

    void setFlaeche(float Ankathete, float Gegenkathete, float Hypothenuse){
        float s = (Ankathete + Gegenkathete + Hypothenuse)/2;
        flaeche = sqrt(s * (s - Ankathete) * (s - Gegenkathete) * (s - Hypothenuse));
    }

    void setUmfang(float Ankathete, float Gegenkathete, float Hypothenuse){
        umfang = Ankathete + Gegenkathete + Hypothenuse;
    }

    int getAnkathete(){return Ankathete;}
    int getGegenkathete(){return Gegenkathete;}
    int getHypothenuse(){return Hypothenuse;}
    int getColour(){return farbe;}
    float getFlaeche(){return flaeche;}
    float getUmfang(){return umfang;}
};

class Quadrat: public Rechteck {
public:
    void setDiagonale(float Laenge) {
        Diagonale = Laenge * sqrt(2);
    }

    void setFlaeche(float Laenge){
        flaeche = Laenge * Laenge;
    }

    void setUmfang(float Laenge){
        umfang = Laenge * 4;
    }

    float getDiagonale(){return Diagonale;}
    float getFlaeche(){return flaeche;}
    float getUmfang(){return umfang;}
};

