#include "Imovel.h"

Imovel::Imovel(){ 
    nome = "";
    valor = 0;
    tipo = 0;
    disponibilidade = "";
}
Imovel::Imovel(std::string nome, double valor, int tipo, std::string disponibilidade){
    this->nome = nome;
    this->valor = valor;
    this->tipo = tipo;
    this->disponibilidade = disponibilidade;
}
Imovel::~Imovel(){
    std::cout << "Deletando Imovel" << std::endl;
}

void Imovel::exibeAtributos(){ }
void Imovel::lerAtributos(){ }

std::string Imovel::get_nome(){ return nome; }
double Imovel::get_valor(){ return valor; }
int Imovel::get_tipo(){ return tipo; }
std::string Imovel::get_disponibilidade(){ return disponibilidade; }

void Imovel::set_nome(std::string nome){ this->nome = nome; }
void Imovel::set_valor(double valor){ this->valor = valor; }
void Imovel::set_tipo(int tipo){ this->tipo = tipo; }
void Imovel::set_disponibilidade(std::string disponibilidade){ this->disponibilidade = disponibilidade; }