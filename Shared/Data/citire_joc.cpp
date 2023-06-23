#include<iostream>
#include "Joc.h"
#include <string>
#include <fstream>
using namespace std;

 static Joc citesteJocDinFisier(ifstream& fisier) {
        string cod_de_bare, denumire, categorie;
        double pret;
        int memorie;
        bool instalat, cumparat;

        fisier >> cod_de_bare >> denumire >> pret >> memorie >> instalat >> cumparat >> categorie;
        return Joc(cod_de_bare, denumire, pret, memorie, instalat, cumparat, categorie);
    }
