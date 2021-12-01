#ifndef SISTEMA
#define SISTEMA

#include "Funcionario.h"

#include <iostream>
#include <vector>
#include <string>

class SistemaGerenciaFolha{
    std::vector <Funcionario*> funcionarios;
    double orcamento_maximo;
public:
    SistemaGerenciaFolha();
    SistemaGerenciaFolha(double orcamento_maximo);

    double calcularValorTotalFolha();

    double consultaSalarioFuncionario(std::string nome);
    
    void set_funcionarios(Funcionario *funcionarios);

    double get_orcamento_maximo();
};

#endif