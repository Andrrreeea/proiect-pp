#include "Joc.h"

void Joc::set_cod_de_bare(string cod_bare_nou)
{
    cod_de_bare = cod_bare_nou;
}
string Joc::get_cod_de_bare() {
    return cod_de_bare;
};
void Joc::set_denumire(string denumire_nou)
{
    denumire = denumire_nou;
}
string Joc::get_denumire() {
    return denumire;
};
void Joc::set_pret(double pret_nou)
{
    pret = pret_nou;
};
double Joc::get_pret()
{
    return pret;
};
void Joc::set_memorie(int memorie_nou)
{
    memorie = memorie_nou;
};
int Joc::get_memorie()
{
    return memorie;
};
void Joc::set_instalat(bool instalat_nou)
{
    instalat = instalat_nou;
};
bool Joc::get_instalat()
{
    return instalat;
};
void Joc::set_cumpara(bool cumpara_nou)
{
    cumpara = cumpara_nou;
};
bool Joc::get_cumpara()
{
    return cumpara;
};
void Joc::set_categorie(string categorie_nou)
{
    categorie = categorie_nou;
};
string Joc::get_categorie()
{
    return categorie;
};
ostream& operator<<(ostream& os) {
    os << obj.get_cod_de_bare() <<" " << obj.get_denumire() << " " << obj.get_pret()<< " " << obj.get_memorie() << " " <<obj.get_instalat() << " " <<obj.get_cumpara() << " " <<obj.get_categorie();
    return os;
}
