#include "Horista.h"

Horista::Horista() : Funcionario() { salarioPorHora = horasTrabalhadas = 0; }

Horista::Horista(std::string nome, int matricula, double salarioPorHora, double horasTrabalhadas)
        : Funcionario(nome, matricula){
    this->salarioPorHora = salarioPorHora;
    this->horasTrabalhadas = horasTrabalhadas;
}

double Horista::calcularSalario(){ 
    if(horasTrabalhadas > 40){
        return (((horasTrabalhadas-40)*1.5)+40) * salarioPorHora * 4;
    } else {
        return horasTrabalhadas * salarioPorHora * 4; 
    }
}

double Horista::get_salarioPorHora(){ return salarioPorHora; }
double Horista::get_horasTrabalhadas(){ return horasTrabalhadas; }

void Horista::set_salarioPorHora(double salarioPorHora){ this->salarioPorHora = salarioPorHora; }
void Horista::set_horasTrabalhadas(double horasTrabalhadas){ this->horasTrabalhadas = horasTrabalhadas; }