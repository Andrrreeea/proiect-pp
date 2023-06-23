#include <iostream>
#include <fstream>
#include "../Shared/Data/BundlePack.cpp"
#include <string>
#include <string.h>
#include "../Shared/Data/Joc.cpp"
using namespace std;

void adaugare_joc(char *arg2, char* arg3,  char* arg4, char* arg5){
    string str(arg2);
    
    
}

void sterge_joc(char *arg){

}

void adaugare_bundle_pack(char *arg2, char* arg3,  char* arg4, char* arg5, char* arg6){

}

void stergere_bundle_pack(char *arg){

}

void  vizualizare_jocuri_cumparate()
{

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
                "adaugare_joc <cod_de_bare><denumire><pret><memorie> \n"
                "stergere_joc <cod_de_bare> \n"
                "adaugare_bundle_pack <jocuri_incluse><pret_pack><cod_de_bare_pack><denumire_pack> \n"
                "stergere_bundle_pack <cod_de_bare_pack> \n"
                "vizualizare_jocuri_cumparate \n";
        return 0;
    }*/

    if(strcmp(arguments[1], "adaugare_joc") == 0){
        if(nrArg != 6){
            cout << "Sintaxa gresita\n";
        }else{
           adaugare_joc(arguments[2],arguments[3],arguments[4],arguments[5]);
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
        if(nrArg != 7){
            cout << "Sintaxa gresita\n";
        }else{
            adaugare_bundle_pack(arguments[2],arguments[3],arguments[4],arguments[5],arguments[6]); //consider ca in momentul adaugarii unui joc, acesta nu e cumparat sau instalat
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
