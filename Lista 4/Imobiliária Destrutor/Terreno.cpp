#include "Terreno.h"

Terreno::Terreno(){
    area = 0;
}
Terreno::Terreno(std::string nome, double valor, int tipo, std::string disponibilidade, 
                    double area) 
                    : Imovel(nome, valor, tipo, disponibilidade){
    this->area = area;
}

Terreno::~Terreno(){
    std::cout << "Deletando Terreno" << std::endl;
}

void Terreno::exibeAtributos(){
    //Terreno para aluguel. 250m2 de área de terreno. R$ 1200.
    std::cout << "Terreno para " << get_disponibilidade();
    std::cout << ". " << get_area();
    std::cout << "m2 de área de terreno. R$ " << get_valor();
    std::cout << "." << std::endl;
}
void Terreno::lerAtributos(){
    double valor_terreno;
    std::string disponibilidade_terreno;
    double area_terreno;

    std::cin >> valor_terreno;
    std::cin.ignore();
    std::getline(std::cin, disponibilidade_terreno);
    std::cin >> area_terreno;

    set_nome("Terreno");
    set_valor(valor_terreno);
    set_tipo(3);
    set_disponibilidade(disponibilidade_terreno);
    set_area(area_terreno);
}

double Terreno::get_area(){ return area; }

void Terreno::set_area(double area){ this->area = area; }