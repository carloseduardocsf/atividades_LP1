#include <string>

class Endereco {
    private:
        std::string rua;
        std::string numero;
        std::string bairro;
        std::string cidade;
        std::string estado;
        std::string cep;
    
    public:
        Endereco();
        Endereco(std::string rua, std::string numero, std::string bairro, std::string cidade, std::string estado, std::string cep);
        std::string toString();
};

#include <iostream>

Endereco::Endereco() {
    
}

Endereco::Endereco(std::string rua, std::string numero, std::string bairro, std::string cidade, std::string estado, std::string cep) {
    this->rua = rua;
    this->numero = numero;
    this->bairro = bairro;
    this->cidade = cidade;
    this->estado = estado;
    this->cep = cep;
}

std::string Endereco::toString() {

    return rua + ", " + numero + ", " + bairro + ". " + cidade + " - " + estado + ". CEP: " + cep;
}

class Pessoa {
    private:
        std::string nome;
        Endereco endereco;
        std::string telefone;
    
    public:
        Pessoa();
        Pessoa(std::string nome);
        Pessoa(std::string nome, Endereco endereco, std::string telefone);
        std::string toString();

        void setNome(std::string nome);
        void setEndereco(Endereco endereco);
        void setTelefone(std::string telefone);

        std::string getNome();
        Endereco getEndereco();
        std::string getTelefone();

};

Pessoa::Pessoa() {
    
}

Pessoa::Pessoa(std::string nome) {
    this->nome = nome;
}

Pessoa::Pessoa(std::string nome, Endereco endereco, std::string telefone) {
    this->nome = nome;
    this->endereco = endereco;
    this->telefone = telefone;
}

void Pessoa::setNome(std::string nome) {
    this->nome = nome;
} 

void Pessoa::setEndereco(Endereco endereco) {
    this->endereco = endereco;
}

void Pessoa::setTelefone(std::string telefone) {
    this->telefone = telefone;
}

std::string Pessoa::getNome() {
    return nome;
}

Endereco Pessoa::getEndereco() {
    return endereco;
}
        
std::string Pessoa::getTelefone() {
    return telefone;
}

std::string Pessoa::toString() {
    return nome + ", " + telefone + "\n" + endereco.toString();
}

using namespace std;

int main () {
    std::string rua;
    std::string numero;
    std::string bairro;
    std::string cidade;
    std::string estado;
    std::string cep;
    std::string nome;
    std::string telefone;
    int n;
    Endereco endereco;
    Pessoa pessoa;
    
    cin >> n;
    getchar();
    
    while(n--) {

        getline(cin, nome);
        getline(cin, telefone);
        getline(cin, rua);
        getline(cin, numero);
        getline(cin, bairro);
        getline(cin, cidade);
        getline(cin, estado);
        getline(cin, cep);

        endereco = Endereco(rua, numero, bairro, cidade, estado, cep);
        pessoa = Pessoa(nome, endereco, telefone);

        cout << pessoa.toString() << endl << endl;

    }

    return 0;
}