#ifndef ASSALARIADO
#define ASSALARIADO

#include "Funcionario.h"

class Assalariado : public Funcionario{
protected:
    double salario;
public:
    Assalariado();
    Assalariado(std::string nome, int matricula, double salario);

    virtual double calcularSalario() override;

    double get_salario();
    void set_salario(double salario);
};

#endif