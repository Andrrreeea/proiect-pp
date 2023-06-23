#include<iostream>
#include "Joc.h"
#include <string>
#include <fstream>
using namespace std;

void scrieJocInFisier(ofstream& fisier) const {
        fisier << cod_de_bare << " " << denumire << " " << pret << " " << memorie << " " << instalat << " "
               << cumparat << " " << categorie << endl;
    }
