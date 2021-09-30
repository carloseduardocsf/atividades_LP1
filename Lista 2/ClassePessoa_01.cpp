#include <iostream>
#include <string>

using namespace std;

class Pessoa{
    public:
        string nome;
        int idade;
        string telefone;
};


int main(){

    Pessoa p1;
    Pessoa p2;

    getline(cin, p1.nome);
    cin >> p1.idade;
    cin.ignore();
    getline(cin, p1.telefone);

    getline(cin, p2.nome);
    cin >> p2.idade;
    cin.ignore();
    getline(cin, p2.telefone);

    cout << p1.nome << ", " << p1.idade << ", " << p1.telefone << "\n";
    cout << p2.nome << ", " << p2.idade << ", " << p2.telefone << "\n";


    return 0;

}