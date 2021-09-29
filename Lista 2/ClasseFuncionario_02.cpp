#include <iostream>
#include <string>

using namespace std;


class Funcionario{
    private:
        string nome;
        string sobrenome;
        float salario;
        float percent;
    public:
        Funcionario();
        Funcionario(string nome, string sobrenome, float salario);

        void setNome(string nome);
        void setSobrenome(string sobrenome);
        void setSalario(float salario);
        void aumentaSalario(float percent);

        string getNome();
        string getSobrenome();
        float getSalario();
        float getSalarioAnual();

};

Funcionario::Funcionario(){

}

Funcionario::Funcionario(string nome, string sobrenome, float salario){
    this -> nome = nome;
    this -> sobrenome = sobrenome;
    this -> salario = salario;
}


void Funcionario::setNome(string nome){
    this -> nome = nome;
}
void Funcionario::setSobrenome(string sobrenome){
    this -> sobrenome = sobrenome;
}
void Funcionario::setSalario(float salario){
    if(salario >= 0){
        this -> salario = salario;
    }
}
void Funcionario::aumentaSalario(float percent){
    this -> salario = (salario * 0.1) + salario;
}




string Funcionario::getNome(){
    return this -> nome;
} 
string Funcionario::getSobrenome(){
    return this -> sobrenome;
} 
float Funcionario::getSalario(){
    return this -> salario;
} 
float Funcionario::getSalarioAnual(){
    return this -> salario * 12;
}



int main(){

    int N;
    string nome, sobrenome;
    float salario;
    

    cin >> N;

    Funcionario func[N];
    for(int i = 0; i < N; i++){
        cin >> nome;
        cin >> sobrenome;
        cin >> salario;

        func[i] = Funcionario(nome, sobrenome, salario);
    

    }
    

    for(int i = 0; i < N; i++){
        cout << func[i].getNome() << " " << func[i].getSobrenome() << " - " << func[i].getSalario() << " - " << func[i].getSalarioAnual() << endl; 
        func[i].aumentaSalario(0.1);
        cout << func[i].getSalarioAnual() << endl;
    }


    return 0;

}