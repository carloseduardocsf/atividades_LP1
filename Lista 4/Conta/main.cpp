#include <iostream>
#include <string>

#include "IConta.h"
#include "IConta.cpp"
#include "Conta.h"
#include "Conta.cpp"
#include "ContaEspecial.h"
#include "ContaEspecial.cpp"

int main(){
    Conta conta;
    ContaEspecial conta_especial;

    std::string nomeCliente;
    int numeroConta;
    float salarioMensal;
    float depositar;
    float sacar;
    
    std::getline(std::cin, nomeCliente);
    std::cin >> numeroConta;
    std::cin >> salarioMensal;

    conta = Conta(nomeCliente, numeroConta, salarioMensal);

    std::cin >> depositar;
    conta.depositar(depositar);
    std::cin >> sacar;
    conta.sacar(sacar);
    std::cin.ignore();

    std::cout << conta.get_nomeCliente();
    std::cout << ", cc: " << conta.get_numeroConta();
    std::cout << ", salário " << conta.get_salarioMensal();
    std::cout << ", saldo total disponível: R$ " << conta.saldoTotalDisponivel() << std::endl;
    
    std::getline(std::cin, nomeCliente);
    std::cin >> numeroConta;
    std::cin >> salarioMensal;
    std::cin.ignore();

    conta_especial = ContaEspecial(nomeCliente, numeroConta, salarioMensal);

    std::cin >> depositar;
    conta_especial.depositar(depositar);
    std::cin >> sacar;
    conta_especial.sacar(sacar);
    std::cin.ignore();

    std::cout << conta_especial.get_nomeCliente();
    std::cout << ", cc: " << conta_especial.get_numeroConta();
    std::cout << ", salário " << conta_especial.get_salarioMensal();
    std::cout << ", saldo total disponível: R$ " << conta_especial.saldoTotalDisponivel() << std::endl;
}