#include "Comissionado.h"

Comissionado::Comissionado() : Funcionario() { vendasMensais = percentualComissao = 0; }

Comissionado::Comissionado(std::string nome, int matricula, double vendasSemanais, double percentualComissao)
        : Funcionario(nome, matricula){
    this->vendasMensais = vendasSemanais;
    this->percentualComissao = percentualComissao;
}

double Comissionado::calcularSalario(){ return vendasMensais*percentualComissao; }

double Comissionado::get_vendasMensais(){ return vendasMensais; }
double Comissionado::get_percentualComissao(){ return percentualComissao; }

void Comissionado::set_vendasMensais(double vendasMensais){ this->vendasMensais = vendasMensais; }
void Comissionado::set_percentualComissao(double percentualComissao){ 
    this->percentualComissao = percentualComissao; 
}