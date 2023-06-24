#include <iostream>
#include <fstream>
#include "../Shared/Data/BundlePack.cpp"
#include <string>
#include <string.h>
#include "../Shared/Data/Joc.cpp"
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;

vector<Joc> jocuri_disponibile;
vector<BundlePack> bundle_disponibile;

void adaugare_joc(char *arg2, char* arg3,  char* arg4, char* arg5, char* arg6){
    string str(arg2);
    string str1(arg3);
    string str2(arg6);
    int memorie=atoi(arg5);
    double n=strtod(arg4,nullptr);
    Joc j;
    j.set_cod_de_bare(str);
    j.set_denumire(str1);
    j.set_pret(n);
    j.set_memorie(memorie);
    j.set_instalat(0);
    j.set_cumpara(0);
    j.set_categorie(str2);
    jocuri_disponibile.push_back(j);
}

void sterge_joc(char *arg){
    string str(arg);
    string s;
    auto it = find_if(jocuri_disponibile.begin(), jocuri_disponibile.end(), [&str](Joc obj) {
        return obj.get_cod_de_bare() == str;
    });

    if (it != jocuri_disponibile.end()) {
        jocuri_disponibile.erase(it);
    } else {
        cout << "Jocul nu a fost gasit!" << endl;
    }
}

void adaugare_bundle_pack(char *arg2, char* arg3,  char* arg4, char* arg5){
    string str(arg2);
    vector <string> rezultat;
    size_t start=0;
    size_t sfarsit=str.find(";");
    while(sfarsit!=-1)
    {
        rezultat.push_back(str.substr(start,sfarsit-start));
        start=sfarsit+1;
        sfarsit=str.find(";",start);
    }
    rezultat.push_back(str.substr(start));
    vector<Joc> jocuri;
   for (int i = 0; i < rezultat.size(); i++) {
    auto it = find_if(jocuri_disponibile.begin(), jocuri_disponibile.end(), [rezultat_i = rezultat[i]](Joc obj) {
        return obj.get_cod_de_bare() == rezultat_i;
    });
    if (it != jocuri_disponibile.end()) {
        jocuri.push_back(*it);
    }
}

    string str1(arg5);
    string str2(arg4);
    double n=strtod(arg3,nullptr);
    BundlePack b;
    b.set_jocuri_incluse(jocuri);
    b.set_pret(n);
    b.set_cod_de_bare_pack(str2);
    b.set_denumire_pack(str1);
    bundle_disponibile.push_back(b);
}

void stergere_bundle_pack(char *arg){
    string str=(arg);
    auto it = find_if(bundle_disponibile.begin(), bundle_disponibile.end(), [&str](BundlePack obj) {
        return obj.get_cod_de_bare_pack() == str;
    });

    if (it != bundle_disponibile.end()) {
        bundle_disponibile.erase(it);
    } else {
        cout << "Bundle Pack-ul nu a fost gasit!" << endl;
    }
}

void  vizualizare_jocuri_cumparate()
{
    for (int i = 0; i < jocuri_disponibile.size(); i++) {
        if(jocuri_disponibile[i].get_cumpara()==1)
            cout<<jocuri_disponibile[i];
}

}
int main(int nrArg, char **arguments)
{
    ifstream f("../Shared/Files/stoc.txt");
    ofstream g("../Shared/Files/stoc_out.txt");

    ifstream f1("../Shared/Files/stoc_bundle_packs.txt");
    ofstream g1("../Shared/Files/stoc_bundle_packs_out.txt");

   /* Joc j;
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
    bp.afisare();*/
   /* if(nrArg == 1){
        cout << "Comenzi posibile: \n"
                "adaugare_joc <cod_de_bare><denumire><pret><memorie><categorie> \n"
                "stergere_joc <cod_de_bare> \n"
                "adaugare_bundle_pack <jocuri_incluse><pret_pack><cod_de_bare_pack><denumire_pack> \n"
                "stergere_bundle_pack <cod_de_bare_pack> \n"
                "vizualizare_jocuri_cumparate \n";
        return 0;
    }*/

    if(strcmp(arguments[1], "adaugare_joc") == 0){
        if(nrArg != 7){
            cout << "Sintaxa gresita\n";
        }else{
           adaugare_joc(arguments[2],arguments[3],arguments[4],arguments[5],arguments[6]);
        }
        return 0;
    }

    if(strcmp(arguments[1], "stergere_joc") == 0){
        if(nrArg != 3){
            cout << "Sintaxa gresita \n";
        }else{
            sterge_joc(arguments[2]);
        }
        return 0;
    }

    if(strcmp(arguments[1], "adaugare_bundle_pack") == 0){
        if(nrArg != 6){
            cout << "Sintaxa gresita\n";
        }else{
            adaugare_bundle_pack(arguments[2],arguments[3],arguments[4],arguments[5]); //consider ca in momentul adaugarii unui joc, acesta nu e cumparat sau instalat
        }
        return 0;
    }

    if(strcmp(arguments[1], "stergere_bundle_pack") == 0){
        if(nrArg != 3){
            cout << "Sintaxa gresita \n";
        }else{
            stergere_bundle_pack(arguments[2]);
        }
        return 0;
    }

    if(strcmp(arguments[1], "vizualizare_jocuri_cumparate") == 0){
        if(nrArg != 2){
            cout << "Sintaxa gresita\n";
        }else{
            vizualizare_jocuri_cumparate();
        }
        return 0;
    }
    cout << "Comanda invalida";
    return 0;
}
