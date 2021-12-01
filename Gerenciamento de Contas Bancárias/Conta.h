#ifndef CONTA
#define CONTA

#include <string>
#include <iostream>

class Conta{
    protected:
        std::string nomeCliente;
        int numeroDaConta;
        double saldoAtual;

    public:
        Conta();
        Conta(std::string nomeCliente, int numeroDaConta, double saldoAtual);

        std::string getNomeCliente();
        int getNumeroDaConta();
        double getSaldoAtual();

        void setNomeCliente(std::string nomeCliente);
        void setNumeroDaConta(int numeroDaConta);
        void setSaldoAtual(double saldoAtual);

        void sacar(double valorSacado);
        void depositar(double valorDepositado);
        virtual double saldoTotalDisponivel() ;
};

class ContaCorrente: public Conta{
    protected:
        double salario;
        double limiteDisponivel;
    
    public:
        ContaCorrente();
        ContaCorrente(std::string nomeCliente, int numeroDaConta, double salario);

        double getSalario();
        void setSalario(double salario);

        double getLimiteDisponivel();
        void setLimiteDisponivel(double limiteDisponivel);

        void depositar(double valorDepositado);

        virtual void definirLimite(); //salario * 2
        virtual double saldoTotalDisponivel() override;
};

class ContaEspecial: public ContaCorrente{
    public:
        ContaEspecial();
        ContaEspecial(std::string nomeCliente, int numeroDaConta, double salario);


        virtual void definirLimite() override; //salario * 4;

};

class Poupanca: public Conta{
    protected:
        int variacao;
        double taxaDeRendimento;
    
    public:
        Poupanca();
        Poupanca(std::string nomeCliente, int numeroDaConta, double saldoAtual, int variacao, double rendimento);

        int getVariacao();
        double getTaxaDeRendimento();

        void setVariacao(int variacao);
        void setTaxaDeRendimento(double TaxaDeRendimento);

        double render();
        virtual double saldoTotalDisponivel() override;


};

#endif