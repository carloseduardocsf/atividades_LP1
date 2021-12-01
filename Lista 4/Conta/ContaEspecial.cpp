#include "ContaEspecial.h"

ContaEspecial::ContaEspecial(){
    saldo = 0;
}

ContaEspecial::ContaEspecial(std::string nomeCliente, int numeroConta, float salarioMensal){
    this->nomeCliente = nomeCliente;
    this->numeroConta = numeroConta;
    this->salarioMensal = salarioMensal;
    definirLimite();
}

void ContaEspecial::definirLimite(){
    this->limite = 3*salarioMensal;
}

void ContaEspecial::sacar(double valor){
    this->saldo = saldo - valor;
}

void ContaEspecial::depositar(double valor){
    this->saldo = saldo + valor;
}

float ContaEspecial::saldoTotalDisponivel(){
    return saldo+limite;
}