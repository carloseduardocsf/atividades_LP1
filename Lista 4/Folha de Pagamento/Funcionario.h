#ifndef FUNCIONARIO
#define FUNCIONARIO

#include <iostream>
#include <vector>
#include <string>

class Funcionario{
    std::string nome;
    int matricula;
public:
    Funcionario();
    Funcionario(std::string nome, int matricula);

    virtual double calcularSalario() = 0;

    std::string get_nome();
    int get_matricula();

    void set_nome(std::string nome);
    void set_matricula(int matricula);
};

#endif