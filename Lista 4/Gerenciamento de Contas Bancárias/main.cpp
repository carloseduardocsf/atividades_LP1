#include <iostream>
#include <string>
#include "Conta.h"

using namespace std;

int main(){
    ContaCorrente daCaixa;
    ContaEspecial doPicpay;
    Poupanca doTesouro;

    string nomeCliente;
    int numeroDaConta;
    double salario;
    double saque, deposito;

    getline(cin, nomeCliente);
    cin >> numeroDaConta >> salario >> deposito >> saque;
    cin.ignore();
    daCaixa = ContaCorrente(nomeCliente, numeroDaConta, salario);
    cout << daCaixa.getNomeCliente() << ", cc: " << daCaixa.getNumeroDaConta() << ", salário " << daCaixa.getSalario() << ", " ;
    daCaixa.depositar(deposito);
    daCaixa.sacar(saque);
    cout << "saldo total disponível: R$ " << daCaixa.saldoTotalDisponivel() << endl;

    getline(cin, nomeCliente);
    cin >>  numeroDaConta >> salario >> deposito >> saque;
    cin.ignore();
    doPicpay = ContaEspecial(nomeCliente, numeroDaConta, salario);
    cout << doPicpay.getNomeCliente() << ", cc: " << doPicpay.getNumeroDaConta() << ", salário " << doPicpay.getSalario() << ", ";
    doPicpay.depositar(deposito);
    doPicpay.sacar(saque);
    cout << "saldo total disponível: R$ " << doPicpay.saldoTotalDisponivel() << endl;

    getline(cin, nomeCliente);
    cin >>  numeroDaConta >> deposito >> saque;
    doTesouro = Poupanca(nomeCliente, numeroDaConta, 0, 0, 0.006);
    doTesouro.depositar(deposito);
    doTesouro.sacar(saque);
    cout << doTesouro.getNomeCliente() << ", cc: " << doTesouro.getNumeroDaConta() << ", saldo total disponível: R$ " << doTesouro.saldoTotalDisponivel() << endl; 



    return 0;
}