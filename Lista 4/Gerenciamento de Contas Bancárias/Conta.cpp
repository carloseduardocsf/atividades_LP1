#include "Conta.h"

Conta::Conta(){
    saldoAtual = 0;
    numeroDaConta = 0;
    nomeCliente = "-";
}

Conta::Conta(std::string nomeCliente, int numeroDaConta, double saldoAtual){
    this->nomeCliente = nomeCliente;
    this->numeroDaConta = numeroDaConta;
    this->saldoAtual = saldoAtual;
}

std::string Conta::getNomeCliente(){
    return nomeCliente;
}

int Conta::getNumeroDaConta(){
    return numeroDaConta;
}

double Conta::getSaldoAtual(){
    return saldoAtual;
}

void Conta::setNomeCliente(std::string nomeCliente){
    this->nomeCliente = nomeCliente;
}

void Conta::setNumeroDaConta(int numeroDaConta){
    this->numeroDaConta = numeroDaConta;
}

void Conta::setSaldoAtual(double saldoAtual){
    this->saldoAtual = saldoAtual;
}

void Conta::sacar(double valor){
    if (valor < saldoAtual){
        this->saldoAtual -= valor;
    }else{
        std::cout << "\nsaldo insuficiente" << std::endl;
    }
}

void Conta::depositar(double valor){
    saldoAtual += valor;
}

double Conta::saldoTotalDisponivel(){
    return saldoAtual;
}

ContaCorrente::ContaCorrente(){
    saldoAtual = 0;
}

ContaCorrente::ContaCorrente(std::string nomeCliente, int numeroDaConta, double salario)
             : Conta(nomeCliente, numeroDaConta, saldoAtual)
{
    this->salario = salario;
    definirLimite();
}

double ContaCorrente::getSalario(){
    return salario;
}

void ContaCorrente::setSalario(double salario){
    this->salario = salario;
}

double ContaCorrente::getLimiteDisponivel(){
    return limiteDisponivel;
}

void ContaCorrente::setLimiteDisponivel(double limiteDisponivel){
    this->limiteDisponivel = limiteDisponivel;
}

void ContaCorrente::depositar(double valorDepositado){
    saldoAtual = saldoAtual + valorDepositado;
}

void ContaCorrente::definirLimite(){
    this->limiteDisponivel = salario * 2;
}

double ContaCorrente::saldoTotalDisponivel(){
    return saldoAtual + limiteDisponivel;
}

ContaEspecial::ContaEspecial()
             : ContaCorrente()
{
    
}

ContaEspecial::ContaEspecial(std::string nomeCliente, int numeroDaConta, double salario)
             : ContaCorrente(nomeCliente, numeroDaConta, salario)
{
    definirLimite();
}

void ContaEspecial::definirLimite(){
    this->limiteDisponivel = salario * 4;
}


Poupanca::Poupanca()
        : Conta()
{
    variacao = 0;
    taxaDeRendimento = 0.006;
}

Poupanca::Poupanca(std::string nomeCliente, int numeroDaConta, double saldoAtual, int variacao, double taxaDeRendimento)
        : Conta(nomeCliente, numeroDaConta, saldoAtual)
{   
    this->variacao = variacao;
    this->taxaDeRendimento = taxaDeRendimento;
   
}

int Poupanca::getVariacao(){
    return variacao;
}

double Poupanca::getTaxaDeRendimento(){
    return taxaDeRendimento;
}

void Poupanca::setVariacao(int variacao){
    this->variacao = variacao;
}

void Poupanca::setTaxaDeRendimento(double TaxaDeRendimento){
    this->taxaDeRendimento = taxaDeRendimento;
}

double Poupanca::render(){
    return saldoAtual * taxaDeRendimento;
}

double Poupanca::saldoTotalDisponivel(){
    return saldoAtual + render();
}