#include <iostream>
#include <string>

using namespace std;

class Pessoa{
    private:
        string nome;
        int idade;
        string telefone;
    public:
        Pessoa();
        Pessoa(string nome); //construtor que só recebe o nome
        Pessoa(string nome, int idade, string telefone); //construtor que recebe o nome, a idade e o telefone
        void setNome(string nome){
            this -> nome = nome;
        }
        void setIdade(int idade){
            this -> idade = idade;
        }
        void setTelefone(string telefone){
            this -> telefone = telefone;
        }

        string getNome(){
            return this -> nome;
        }   
        int getIdade(){
            return this -> idade;
        }
        string getTelefone(){
            return this -> telefone;
        } 
};

Pessoa::Pessoa(){
    //cout << "Pessoa()" << endl;
}

Pessoa::Pessoa(string nome){
    //cout << "Pessoa(string nome)" << endl;
    this -> nome = nome;
}

Pessoa::Pessoa(string nome, int idade, string telefone){
    //cout << "Pessoa(string nome, int idade, string telefone)" << endl;
    this -> nome = nome;
    this -> idade = idade;
    this -> telefone = telefone;
}


int main(){

    int N;
    string nome, telefone, pesquisa;
    int idade;
    bool encontrou = false;

    cin >> N;
    cin.ignore();

    Pessoa pess[N]; //instanciando um vetor de N Pessoas
    
    // ler os dados do teclado e armazena num vetor de objetos
    for(int i = 0; i < N; i++){
        getline(cin, nome);
        cin >> idade;
        cin.ignore();
        getline(cin, telefone);

        pess[i] = Pessoa(nome, idade, telefone);
    }

    getline(cin, pesquisa);
    for(int i = 0; i < N; i++){
        if(pess[i].getNome().find(pesquisa) != string::npos){
            encontrou = true;
            cout << pess[i].getNome() << ", " << pess[i].getIdade() << ", " << pess[i].getTelefone() << endl;
        }
    }

    if(!encontrou){
        cout << "Pessoa não encontrada" << endl;
    }


    return 0;

}