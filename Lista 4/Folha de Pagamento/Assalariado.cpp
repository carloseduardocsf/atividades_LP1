#include "Assalariado.h"

Assalariado::Assalariado() : Funcionario() { salario = 0; }

Assalariado::Assalariado(std::string nome, int matricula, double salario)
        : Funcionario(nome, matricula){ 
            this->salario = salario;
}

double Assalariado::calcularSalario(){ return salario; }

double Assalariado::get_salario(){ return salario; }
void Assalariado::set_salario(double salario){ this->salario = salario; }