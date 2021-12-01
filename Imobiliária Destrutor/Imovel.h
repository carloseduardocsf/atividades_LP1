#ifndef IMOVEL
#define IMOVEL

#include <iostream>
#include <string>

class Imovel{
    std::string nome;
    double valor;
    int tipo;
    std::string disponibilidade;
public:
    Imovel();
    Imovel(std::string nome, double valor, int tipo, std::string disponibilidade);
    virtual ~Imovel();

    virtual void exibeAtributos();
    virtual void lerAtributos();

    std::string get_nome();
    double get_valor();
    int get_tipo();
    std::string get_disponibilidade();

    void set_nome(std::string nome);
    void set_valor(double valor);
    void set_tipo(int tipo);
    void set_disponibilidade(std::string disponibilidade);
};

#endif