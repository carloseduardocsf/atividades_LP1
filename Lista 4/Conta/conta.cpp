#include "Conta.h"

Conta::Conta(){
    saldo = 0;
}

Conta::Conta(std::string nomeCliente, int numeroConta, float salarioMensal){
    this->nomeCliente = nomeCliente;
    this->numeroConta = numeroConta;
    this->salarioMensal = salarioMensal;
    definirLimite();
}

void Conta::definirLimite(){
    this->limite = 2*salarioMensal;
}

void Conta::sacar(double valor){
    this->saldo = saldo - valor;
}

void Conta::depositar(double valor){
    this->saldo = saldo + valor;
}

float Conta::saldoTotalDisponivel(){
    return saldo+limite;
}

std::string Conta::get_nomeCliente(){
    return nomeCliente;
}
int Conta::get_numeroConta(){
    return numeroConta;
}
float Conta::get_salarioMensal(){
    return salarioMensal;
}
float Conta::get_saldo(){
    return saldo;
}
float Conta::get_limite(){
    return limite;
}

void Conta::set_nomeCliente(std::string nomeCliente){
    this->nomeCliente = nomeCliente;
}
void Conta::set_numeroConta(int numeroConta){
    this->numeroConta = numeroConta;
}
void Conta::set_salarioMensal(float salarioMensal){
    this->salarioMensal = salarioMensal;
}
void Conta::set_saldo(float saldo){
    this->saldo = saldo;
}
void Conta::set_limite(float limite){
    this->limite = limite;
}