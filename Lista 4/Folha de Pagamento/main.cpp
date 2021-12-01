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


Funcionario::Funcionario(){
    nome = "";
    matricula = 0;
}
Funcionario::Funcionario(std::string nome, int matricula){
    this->nome = nome;
    this->matricula = matricula;
}

double Funcionario::calcularSalario(){
    return 0;
}

std::string Funcionario::get_nome(){ return nome; }
int Funcionario::get_matricula(){ return matricula; }

void Funcionario::set_nome(std::string nome){ this->nome = nome; }
void Funcionario::set_matricula(int matricula){ this->matricula = matricula; }

#ifndef ASSALARIADO
#define ASSALARIADO


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


Assalariado::Assalariado() : Funcionario() { salario = 0; }

Assalariado::Assalariado(std::string nome, int matricula, double salario)
        : Funcionario(nome, matricula){ 
            this->salario = salario;
}

double Assalariado::calcularSalario(){ return salario; }

double Assalariado::get_salario(){ return salario; }
void Assalariado::set_salario(double salario){ this->salario = salario; }


#ifndef HORISTA
#define HORISTA


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

#ifndef COMISSIONADO
#define COMISSIONADO


class Comissionado : public Funcionario{
protected:
    double vendasMensais;
    double percentualComissao;
public:
    Comissionado();
    Comissionado(std::string nome, int matricula, double vendasSemanais, double percentualComissao);

    virtual double calcularSalario() override;
    
    double get_vendasMensais();
    double get_percentualComissao();

    void set_vendasMensais(double vendasMensais);
    void set_percentualComissao(double percentualComissao);
};

#endif


Comissionado::Comissionado() : Funcionario() { vendasMensais = percentualComissao = 0; }

Comissionado::Comissionado(std::string nome, int matricula, double vendasSemanais, double percentualComissao)
        : Funcionario(nome, matricula){
    this->vendasMensais = vendasSemanais;
    this->percentualComissao = percentualComissao;
}

double Comissionado::calcularSalario(){ return vendasMensais*percentualComissao; }

double Comissionado::get_vendasMensais(){ return vendasMensais; }
double Comissionado::get_percentualComissao(){ return percentualComissao; }

void Comissionado::set_vendasMensais(double vendasMensais){ this->vendasMensais = vendasMensais; }
void Comissionado::set_percentualComissao(double percentualComissao){ 
    this->percentualComissao = percentualComissao; 
}

#ifndef SISTEMA
#define SISTEMA

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


SistemaGerenciaFolha::SistemaGerenciaFolha(){

}
SistemaGerenciaFolha::SistemaGerenciaFolha(double orcamento_maximo){
    this->orcamento_maximo = orcamento_maximo;
}


double SistemaGerenciaFolha::calcularValorTotalFolha(){
    double total = 0;

    for(auto& it : funcionarios){
        total += it->calcularSalario();
    }

    return total;   
}

double SistemaGerenciaFolha::consultaSalarioFuncionario(std::string nome){
    for(auto& it : funcionarios){
        if(it->get_nome() == nome){
            return it->calcularSalario();
        }
    }

    return 0;
}

void SistemaGerenciaFolha::set_funcionarios(Funcionario *funcionarios){
    this->funcionarios.push_back(funcionarios);
}

double SistemaGerenciaFolha::get_orcamento_maximo(){ return orcamento_maximo; }


#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    string nome;
    int matricula;

    double salario; // ASSALARIADO
    double salarioPorHora, horasTrabalhadas; // HORISTA
    double vendasMensais, percentualComissao; // COMISSIONADO
    double orcamento_maximo; // SISTEMA

    SistemaGerenciaFolha sistema;
    Funcionario *funcionario;

    cin >> orcamento_maximo;
    cin.ignore();
    sistema = SistemaGerenciaFolha(orcamento_maximo);

    getline(cin, nome);
    cin >> matricula >> salario;
    cin.ignore();
    funcionario = new Assalariado(nome, matricula, salario);
    sistema.set_funcionarios(funcionario);

    getline(cin, nome);
    cin >> matricula >> salarioPorHora >> horasTrabalhadas;
    cin.ignore();
    funcionario = new Horista(nome, matricula, salarioPorHora, horasTrabalhadas);
    sistema.set_funcionarios(funcionario);

    getline(cin, nome);
    cin >> matricula >> vendasMensais >> percentualComissao;
    cin.ignore();
    funcionario = new Comissionado(nome, matricula, vendasMensais, percentualComissao);
    sistema.set_funcionarios(funcionario);

    for(int i = 0; i < 3; i++){
        getline(cin, nome);
        if(sistema.consultaSalarioFuncionario(nome) != 0){
            cout << sistema.consultaSalarioFuncionario(nome) << endl;
        } else {
            cout << "FuncionarioNaoExisteException " << nome << endl;
        }
    }

    if(sistema.calcularValorTotalFolha() <= sistema.get_orcamento_maximo()){
        cout << sistema.calcularValorTotalFolha() << endl;
    } else {
        cout << "OrcamentoEstouradoException " << sistema.calcularValorTotalFolha() << endl;
    }
    
    return 0;
}