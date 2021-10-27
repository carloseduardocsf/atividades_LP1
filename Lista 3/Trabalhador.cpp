#include <iostream>
#include <string>

using namespace std;

class Trabalhador{
    protected:
        string nome;
        float salario;
    public:
        Trabalhador();

        void setNome(string nome);
        void setSalario(float salario);
        string getNome();
        float getSalario();
};

Trabalhador::Trabalhador(){
    salario = 0;
}

void Trabalhador::setNome(string nome){
    this -> nome = nome;
}
void Trabalhador::setSalario(float salario){
    this -> salario = salario;
}
string Trabalhador::getNome(){
    return nome;
}
float Trabalhador::getSalario(){
    return salario;
}

class TrabalhadorPorHora : public Trabalhador{
    private:
        string nome;
        int valorDaHora;
        int horasSemanais;

    public:
        TrabalhadorPorHora();
        TrabalhadorPorHora(string nome, int valorDaHora, int horasSemanais);


        float calcularPagamentoSemanal(int horasSemanais);
};

TrabalhadorPorHora::TrabalhadorPorHora(){
    
}

TrabalhadorPorHora::TrabalhadorPorHora(string nome, int valorDaHora, int horasSemanais){
    this -> nome = nome;
    this -> valorDaHora = valorDaHora;
    this -> horasSemanais = horasSemanais;
}


float TrabalhadorPorHora::calcularPagamentoSemanal(int horasSemanais){
    if(horasSemanais > 40){
        return (valorDaHora * 40) + ((horasSemanais - 40) * (valorDaHora * 1.5));
    }else{
        return valorDaHora * horasSemanais;
    }
    

}



class TrabalhadorAssalariado : public Trabalhador{
    private:
        string nome;
        float salario;
    public:
        TrabalhadorAssalariado();
        TrabalhadorAssalariado(string nome, float salario);
        float calcularPagamentoSemanal();
};

TrabalhadorAssalariado::TrabalhadorAssalariado(){

}

TrabalhadorAssalariado::TrabalhadorAssalariado(string nome, float salario){
    this -> nome = nome;
    this -> salario = salario;
    
}

float TrabalhadorAssalariado::calcularPagamentoSemanal(){
    return (salario / 4);
}


int main(){

    int N, tipo_trabalhador, horasSemanais, valorDaHora;
    float salario;
    string nome;

    TrabalhadorAssalariado trab_assalariado;
    TrabalhadorPorHora trab_hora;


    cin >> N;
    getchar();

    for(int i = 0; i < N; i++){
        cin >> tipo_trabalhador;
        getchar();
        if(tipo_trabalhador == 1){ // 1 - TrabalhadorAssalariado(nome e salario)
            getline(cin, nome);
            cin >> salario;

            trab_assalariado = TrabalhadorAssalariado(nome, salario);

            cout << nome << " - Semanal: R$ " << trab_assalariado.calcularPagamentoSemanal() << " - Mensal: R$ " << salario << endl;

        }else if(tipo_trabalhador == 2){ // 2 - TrabalhadorPorHora(nome, valorDaHora, horasSemanais)
            getline(cin, nome);
            cin >> valorDaHora;
            cin >> horasSemanais;

            trab_hora = TrabalhadorPorHora(nome, valorDaHora, horasSemanais);

            cout << nome << " - Semanal: R$ " << trab_hora.calcularPagamentoSemanal(horasSemanais) << " - Mensal: R$ " << trab_hora.calcularPagamentoSemanal(horasSemanais) * 4 << endl;

        } 
    }


    return 0;

}