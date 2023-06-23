#include <iostream>
#include <fstream>
#include "../Shared/Data/BundlePack.h"
#include <string>
#include "../Shared/Data/Joc.h"
using namespace std;

int main()
{
    ifstream f("../Shared/Files/stoc.txt");
    ofstream g("../Shared/Files/stoc_out.txt");

    ifstream f1("../Shared/Files/stoc_bundle_packs.txt");
    ofstream g1("../Shared/Files/stoc_bundle_packs_out.txt");

    Joc j;
    j.set_cod_de_bare("1");
    j.set_denumire("a");
    j.set_pret(1.00);
    j.set_memorie(2);
    j.set_instalat(1);
    j.set_cumpara(1);
    j.set_categorie("cat");
    vector<Joc> jjj;
    jjj.push_back(j);
    BundlePack bp;
    bp.set_jocuri_incluse(jjj);
    bp.set_pret(2.00);
    bp.set_cod_de_bare_pack("00");
    bp.set_denumire_pack("b");

    return 0;
}
