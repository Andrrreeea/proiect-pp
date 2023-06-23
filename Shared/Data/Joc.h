#ifndef JOC_H
#define JOC_H
#include <string>
using namespace std;

class Joc
{
    public:
        void set_cod_de_bare(string cod_bare_nou);
        string get_cod_de_bare();
        void set_denumire(string cod_bare_nou);
        string get_denumire();
        void set_pret(double pret_nou);
        double get_pret();
        void set_memorie(int memorie_nou);
        int get_memorie();
        void set_instalat(bool instalat_nou);
        bool get_instalat();
        void set_cumpara(bool cumpara_nou);
        bool get_cumpara();
        void set_categorie(string cod_bare_nou);
        string get_categorie();
        Joc(){};
    private:
        string cod_de_bare;
        string denumire;
        double pret;
        int memorie;
        bool instalat;
        bool cumpara;
        string categorie;
};

#endif // JOC_H
