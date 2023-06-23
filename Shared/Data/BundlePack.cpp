#include "BundlePack.h"
#include<vector>

using namespace std;

void BundlePack::set_jocuri_incluse(vector<Joc> jocuri_incluse_nou){
    jocuri_incluse=jocuri_incluse_nou;
}
vector<Joc> BundlePack::get_jocuri_incluse(){
    return jocuri_incluse;
}
void BundlePack::set_pret(double pret_nou){
    pret_pack=pret_nou;
}
double BundlePack::get_pret(){
    return pret_pack;
}
void BundlePack::set_cod_de_bare_pack(string cod_de_bare_pack_nou){
    cod_de_bare_pack=cod_de_bare_pack_nou;
}
string BundlePack::get_cod_de_bare_pack(){
    return cod_de_bare_pack;
}
void BundlePack::set_denumire_pack(string denumire_pack_nou){
    denumire_pack=denumire_pack_nou;
}
string BundlePack::get_denumire_pack(){
    return denumire_pack;
}

