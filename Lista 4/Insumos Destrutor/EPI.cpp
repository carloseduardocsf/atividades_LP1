#include "EPI.h"

EPI::EPI() : Insumo(){ }

EPI::EPI(std::string nome, int quantidade, int valorUnitario, std::string dtVencimento,
    std::string nomeFabricante, int tipoInsumo, int tipo, std::string descricao) 
    : Insumo(nome, quantidade, valorUnitario, dtVencimento, nomeFabricante, tipoInsumo){
        this->tipo = tipo;
        this->descricao = descricao;
}
EPI::~EPI(){
    std::cout << "Deletando EPI" << std::endl;
}

int EPI::get_tipo(){ return tipo; }
std::string EPI::get_descricao(){ return descricao; }

void EPI::set_tipo(int tipo){ this->tipo = tipo; }
void EPI::set_descricao(std::string descricao){ this->descricao = descricao; }