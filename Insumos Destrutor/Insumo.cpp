#include "Insumo.h"

Insumo::Insumo(){ }

Insumo::Insumo(std::string nome, int quantidade, int valorUnitario, std::string dtVencimento, 
    std::string nomeFabricante, int tipoInsumo){
        this->nome = nome;
        this->quantidade = quantidade;
        this->valorUnitario = valorUnitario;
        this->dtVencimento = dtVencimento;
        this->nomeFabricante = nomeFabricante; 
        this->tipoInsumo = tipoInsumo;   
}

Insumo::~Insumo(){
    std::cout << "Deletando Insumos" << std::endl;
}

std::string Insumo::get_Nome(){ return nome; }
int Insumo::get_Quantidade(){ return quantidade; }
int Insumo::get_valorUnitario(){ return valorUnitario; }
std::string Insumo::get_dtVencimento(){ return dtVencimento; }
std::string Insumo::get_nomeFabricante(){ return nomeFabricante; }
int Insumo::get_tipoInsumo(){ return tipoInsumo; }

void Insumo::set_Nome(std::string nome){ this->nome = nome; }
void Insumo::set_Quantidade(int quantidade){ this->quantidade = quantidade; }
void Insumo::set_valorUnitario(int valorUnitario){ this->valorUnitario = valorUnitario; }
void Insumo::set_dtVencimento(std::string dtVencimento){ this->dtVencimento = dtVencimento; }
void Insumo::set_nomeFabricante(std::string nomeFabricante){ this->nomeFabricante = nomeFabricante; }
void Insumo::set_tipoInsumo(int tipoInsumo){ this->tipoInsumo = tipoInsumo; }