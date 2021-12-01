#include "Vacina.h"

Vacina::Vacina() : Insumo(){ }
Vacina::Vacina(std::string nome, int quantidade, int valorUnitario, std::string dtVencimento,
            std::string nomeFabricante, int tipoInsumo, int tipo, int quantDoses, int intervalo) 
    : Insumo(nome, quantidade, valorUnitario, dtVencimento, nomeFabricante, tipoInsumo){
        this->tipo = tipo;
        this->quantDoses = quantDoses;
        this->intervalo = intervalo;
}
Vacina::~Vacina(){
    std::cout << "Deletando Vacina" << std::endl;
}

int Vacina::get_tipo(){ return tipo; }
int Vacina::get_quantDoses(){ return quantDoses; }
int Vacina::get_intervalo(){ return intervalo; }

void Vacina::set_tipo(int tipo){ this->tipo = tipo; }
void Vacina::set_quantDoses(int quantDoses){ this->quantDoses = quantDoses; }
void Vacina::set_intervalo(int intervalo){ this->intervalo = intervalo; }