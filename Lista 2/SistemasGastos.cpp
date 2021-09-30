#ifndef DESPESA_H
#define DESPESA_H

#include <string>
#include <iostream>

using namespace std;

class Despesa
{
private:
    string nome;
    float valor;
    string tipo;
public:
    Despesa();

    string getNome();
    float getValor();
    string getTipo();
    void setNome(string n);
    void setValor(float v);
    void setTipo(string t);
};

#endif //DESPESA_H

Despesa::Despesa()
{
    valor = 0;
}

string Despesa::getNome(){
    return nome;
}
float Despesa::getValor(){
    return valor;
}
string Despesa::getTipo(){
    return tipo;
}
void Despesa::setNome(string n){
    nome = n;
}
void Despesa::setValor(float v){
    valor = v;
}
void Despesa::setTipo(string t){
    tipo = t;
}

#ifndef CONTROLE_H
#define CONTROLE_H

class Controle
{
private:
    Despesa *despesas = new Despesa[100];
public:
    void setDespesa(Despesa d, int pos);
    Despesa getDespesa(int pos);
    float calculaTotalDeDespesas();
    float calculaTotalDeDespesas(string tipo);
    bool existeDespesaDoTipo(string tipo);
};

#endif //CONTROLE_H

void Controle::setDespesa(Despesa d, int pos){
    despesas[pos] = d;
}

Despesa Controle::getDespesa(int pos){
    return despesas[pos];
}

float Controle::calculaTotalDeDespesas(){
    float total = 0;
    for(int i = 0; i < 100; i++){
        total += despesas[i].getValor();
    }
    return total;
}

float Controle::calculaTotalDeDespesas(string tipo){
    float total = 0;
    for(int i = 0; i < 100; i++){
        if(despesas[i].getTipo() == tipo){
            total += despesas[i].getValor();
        }
    }
    return total;
}

bool Controle::existeDespesaDoTipo(string tipo){
    for(int i = 0;i < 100; i++){
        if(despesas[i].getTipo() == tipo){
            return true;
        }
    }
    return false;
}

int main(){
    string pesquisa, nome, tipo;
    int n;
    float valor;
    Despesa d;
    Controle c;

    cin >> n;
    cin.ignore();

    for(int i = 0; i < n; i++){
        getline(cin, nome);
        cin >> valor;
        cin.ignore();
        getline(cin, tipo);

        d.setNome(nome);
        d.setValor(valor);
        d.setTipo(tipo);

        c.setDespesa(d, i);
    }

    getline(cin, pesquisa);
    if(c.existeDespesaDoTipo(pesquisa)){
        for(int i = 0; i < n; i++){
            if(c.getDespesa(i).getTipo() == pesquisa){
                cout << c.getDespesa(i).getNome() << ", R$ " << c.getDespesa(i).getValor() << endl;
            }
        }
    }else{
        cout << "Nenhuma despesa do tipo especificado" << endl;
    }

            cout << "Total: " << c.calculaTotalDeDespesas(pesquisa) << "/" << c.calculaTotalDeDespesas() << endl;


    return 0;
}