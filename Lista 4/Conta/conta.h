#ifndef CONTA
#define CONTA

#include "IConta.h"

class Conta : public IConta{
protected:
    std::string nomeCliente;
    int numeroConta;
    float salarioMensal;
    float saldo;
    float limite;

public:
    Conta();
    Conta(std::string nomeCliente, int numeroConta, float salarioMensal);
    void definirLimite();

    virtual void sacar(double valor) override;
    virtual void depositar(double valor) override;
    virtual float saldoTotalDisponivel() override;
    
    std::string get_nomeCliente();
    int get_numeroConta();
    float get_salarioMensal();
    float get_saldo();
    float get_limite();

    void set_nomeCliente(std::string nomeCliente);
    void set_numeroConta(int numeroConta);
    void set_salarioMensal(float salarioMensal);
    void set_saldo(float saldo);
    void set_limite(float limite);
};

#endif