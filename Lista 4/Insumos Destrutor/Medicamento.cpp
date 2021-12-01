#include "Medicamento.h"

Medicamento::Medicamento() : Insumo(){ }

Medicamento::Medicamento(std::string nome, int quantidade, int valorUnitario, std::string dtVencimento,
    std::string nomeFabricante, int tipoInsumo, std::string dosagem, std::string administracao, std::string disponibilizacao) 
    : Insumo(nome, quantidade, valorUnitario, dtVencimento, nomeFabricante, tipoInsumo){
        this->dosagem = dosagem;
        this->administracao = administracao;
        this->disponibilizacao = disponibilizacao;
}
Medicamento::~Medicamento(){
    std::cout << "Deletando Medicamento" << std::endl;
}

std::string Medicamento::get_dosagem(){ return dosagem; }
std::string Medicamento::get_administracao(){ return administracao; }
std::string Medicamento::get_disponibilizacao(){ return disponibilizacao; }

void Medicamento::set_dosagem(std::string dosagem){ this->dosagem = dosagem; }
void Medicamento::set_administracao(std::string administracao){ this->administracao = administracao; }
void Medicamento::set_disponibilizacao(std::string disponibilizacao){ this->disponibilizacao = disponibilizacao; }