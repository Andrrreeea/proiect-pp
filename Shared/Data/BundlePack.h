#ifndef BUNDLEPACK_H
#define BUNDLEPACK_H

#include<vector>
#include "Joc.h"
#include <string>
using namespace std;

class BundlePack
{
    public:
        void set_jocuri_incluse(vector<Joc> jocuri_incluse_nou);
        vector<Joc> get_jocuri_incluse();
        void set_pret(double pret_nou);
        double get_pret();
        void set_cod_de_bare_pack(string cod_de_bare_pack_nou);
        string get_cod_de_bare_pack();
        void set_denumire_pack(string denumire_pack_nou);
        string get_denumire_pack();
        BundlePack(){};
    private:
        vector<Joc> jocuri_incluse;
        double pret_pack;
        string cod_de_bare_pack;
        string denumire_pack;
};

#endif // BUNDLEPACK_H
