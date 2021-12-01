#ifndef HORISTA
#define HORISTA

#include "Funcionario.h"

class Horista : public Funcionario{
protected:
    double salarioPorHora;
    double horasTrabalhadas;
public:
    Horista();
    Horista(std::string nome, int matricula, double salarioPorHora, double horasTrabalhadas);

    virtual double calcularSalario() override;

    double get_salarioPorHora();
    double get_horasTrabalhadas();

    void set_salarioPorHora(double salarioPorHora);
    void set_horasTrabalhadas(double horasTrabalhadas);
};

#endif