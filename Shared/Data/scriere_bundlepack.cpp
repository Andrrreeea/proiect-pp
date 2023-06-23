#include<iostream>
#include <vector>
#include <fstream>
#include "BundlePack.h"
using namespace std;

static BundlePack citesteBundlePackDinFisier(ifstream& fisier) {
        vector<Joc> jocuri_incluse;
        double pret_pack;
        string cod_de_bare_pack, denumire_pack;

        int numar_jocuri;
        fisier >> numar_jocuri;
        for (int i = 0; i < numar_jocuri; i++) {
            jocuri_incluse.push_back(Joc::citesteJocDinFisier(fisier));
        }
        fisier >> pret_pack >> cod_de_bare_pack >> denumire_pack;

        return BundlePack(jocuri_incluse, pret_pack, cod_de_bare_pack, denumire_pack);
    }
