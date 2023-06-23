#include<iostream>
#include "BundlePack.h"
#include <string>
#include <fstream>
using namespace std;

void scrieBundlePackInFisier(ofstream& fisier) const {
        fisier << jocuri_incluse.size() << endl;
        for (const Joc& joc : jocuri_incluse) {
            joc.scrieJocInFisier(fisier);
        }
        fisier << pret_pack << " " << cod_de_bare_pack << " " << denumire_pack << endl;
    }
