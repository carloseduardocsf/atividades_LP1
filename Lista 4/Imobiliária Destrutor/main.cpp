#include "Imovel.h"
#include "Imovel.cpp"
#include "Casa.h"
#include "Casa.cpp"
#include "Apartamento.h"
#include "Apartamento.cpp"
#include "Terreno.h"
#include "Terreno.cpp"
#include "Imobiliaria.h"
#include "Imobiliaria.cpp"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int n_imoveis;
    int tipo_imoveis;
    std::string busca;
    Imovel *imovel;
    //Casa casa;
    //Apartamento apartamnto;
    //Terreno terreno;
    Imobiliaria imobiliaria;

    cin >> n_imoveis;
    while(n_imoveis--){
        cin >> tipo_imoveis;

        switch(tipo_imoveis){
            case 1:
                imovel = new Casa;
                break;
            case 2:
                imovel = new Apartamento;
                break;
            case 3:
                imovel = new Terreno;
                break;
        }

        imovel->lerAtributos();
        imobiliaria.addImovel(imovel);
    }

    std::cin.ignore();
    std::getline(std::cin, busca);
    imobiliaria.buscaImovel(busca);

    return 0;
}