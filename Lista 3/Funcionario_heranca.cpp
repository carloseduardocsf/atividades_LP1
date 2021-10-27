#include <iostream>
#include <string>

using namespace std;

class Funcionario{
    protected: 
        int matricula;
        string nome;
        float salario;

    public:
        Funcionario(); // contrutor padrao
        // setters
        void setMatricula(int matricula);
        void setNome(string nome);
        void setSalario(float salario);
        // getters
        int getMatricula();
        string getNome();
        float getSalario();
};

Funcionario::Funcionario(){
    
}

void Funcionario::setMatricula(int matricula){
    this -> matricula = matricula;
}
void Funcionario::setNome(string nome){
    this -> nome = nome;
}
void Funcionario::setSalario(float salario){
    this -> salario = salario;
}
int Funcionario::getMatricula(){
    return this -> matricula;
}
string Funcionario::getNome(){
    return this -> nome;
}
float Funcionario::getSalario(){
    return this -> salario;
}



class Consultor : public Funcionario{ // classe consultor herdando a classe funcionario
    public:
        Consultor(); // construtor padrao

        float getSalario(); // Sobrescreve o método, adicionando um percentual de 10% no valor do salário
        float getSalario(float percentual); // Onde o parâmetro percentual, que varia entre 0 e 1, determina o percentual a ser acrescido no salário de Consultor
};

Consultor::Consultor(){
    
}

float Consultor::getSalario(){
    return (salario + (salario * 0.1));
}

float Consultor::getSalario(float percentual){
    return (salario + (salario * percentual));
}


int main(){

    Funcionario func;
    Consultor cons;

    int matricula;
    string nome;
    float salario;

    // Leitura dos valores da func
    cin >> matricula;
    getchar();
    getline(cin, nome);
    cin >> salario;

    func.setMatricula(matricula);
    func.setNome(nome);
    func.setSalario(salario);

    // Leitura dos valores da cons
    cin >> matricula;
    getchar();
    getline(cin, nome);
    cin >> salario;

    cons.setMatricula(matricula);
    cons.setNome(nome);
    cons.setSalario(salario);

    // exibindo valores da func
    cout << func.getMatricula() << " - " << func.getNome() << " - " << "R$ "<< func.getSalario() << endl;

    // exibindo valores da cons
    cout << cons.getMatricula() << " - " << cons.getNome() << " - " << "R$ "<< cons.getSalario() << endl;



    return 0;

}
