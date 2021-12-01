#include "Casa.h"

Casa::Casa(){
    pavimentos = 0;
    quartos = 0;
    areaTerreno = 0;
    areaConstruida = 0;
}
Casa::Casa(std::string nome, double valor, int tipo, std::string disponibilidade,
        int pavimentos, int quartos, double areaTerreno, double areaConstruida) 
        : Imovel(nome, valor, tipo, disponibilidade){
    this->pavimentos = pavimentos;
    this->quartos = quartos;
    this->areaTerreno = areaTerreno;
    this->areaConstruida = areaConstruida;
}
Casa::~Casa(){
    std::cout << "Deletando Casa" << std::endl;
}

void Casa::exibeAtributos(){ 
    //Casa para venda. 2 pavimentos, 4 quartos, 300m2 de área de terreno e 150m2 de área construída. R$ 500000.
    std::cout << "Casa para " << get_disponibilidade();
    std::cout << ". " << get_pavimentos();
    std::cout << " pavimentos, " << get_quartos();
    std::cout << " quartos, " << get_areaTerreno();
    std::cout << "m2 de área de terreno e " << get_areaConstruida();
    std::cout << "m2 de área construída. R$ " << get_valor();
    std::cout << "." << std::endl;    
}
void Casa::lerAtributos(){
    double valor_casa;
    std::string disponibilidade_casa;
    int pavimentos_casa;
    int quartos_casa;
    double areaTerreno_casa;
    double areaConstruida_casa;

    std::cin >> valor_casa;
    std::cin.ignore();
    std::getline(std::cin, disponibilidade_casa);
    std::cin >> pavimentos_casa >> quartos_casa >> areaTerreno_casa >> areaConstruida_casa;

    set_nome("Casa");
    set_valor(valor_casa);
    set_tipo(1);
    set_disponibilidade(disponibilidade_casa);
    set_pavimentos(pavimentos_casa);
    set_quartos(quartos_casa);
    set_areaTerreno(areaTerreno_casa);
    set_areaConstruida(areaConstruida_casa);
}

int Casa::get_pavimentos(){ return pavimentos; }
int Casa::get_quartos(){ return quartos; }
double Casa::get_areaTerreno(){ return areaTerreno; }
double Casa::get_areaConstruida(){ return areaConstruida; }

void Casa::set_pavimentos(int pavimentos){ this->pavimentos = pavimentos; }
void Casa::set_quartos(int quartos){ this->quartos = quartos; }
void Casa::set_areaTerreno(double areaTerreno){ this->areaTerreno = areaTerreno; }
void Casa::set_areaConstruida(double areaConstruida){ this->areaConstruida = areaConstruida; }