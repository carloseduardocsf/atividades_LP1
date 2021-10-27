#ifndef IMOVEL_H
#define IMOVEL_H

#include <string>

using namespace std;

class Imovel{
    public:
        Imovel();

        // GETS E SETS
        void setNome(string nome);
        void setValor(float valor);
        void setTipo(int tipo);
        void setDisponibilidade(string disponibilidade);

        string getNome();
        float getValor();
        int getTipo();
        string getDisponibilidade();

        // METODOS
        virtual void exibeAtributos() = 0;
        virtual void lerAtributos() = 0;
        
        protected:
            string nome;
            float valor;
            int tipo; 
            string disponibilidade;
    };

#endif // IMOVEL_H

#ifndef CASA_H
#define CASA_H


#include <string>
using namespace std;

class Casa : public Imovel{
    public:
        Casa();

        // GETS E SETS
        void setNum_pavimentos(int num_pavimentos);
        void setNum_quartos(int num_quartos);
        void setArea_terreno(float area_terreno);
        void setArea_construida(float area_construida);

        int getNum_pavimentos();
        int getNum_quartos();
        float getArea_terreno();
        float getArea_construida();

        // METODOS
        void exibeAtributos();
        void lerAtributos();
    protected:
        int num_pavimentos; 
        int num_quartos;
        float area_terreno;
        float area_construida;
};

#endif // CASA_H

#ifndef APARTAMENTO_H
#define APARTAMENTO_H


#include <string>
using namespace std;

class Apartamento : public Imovel{
    public:
        Apartamento();

        // GETS E SETS
        void setArea(float area);
        void setNum_quartos(int num_quartos);
        void setAndar(int andar);
        void setValor_condominio(float valor_condominio);
        void setVagas_garagem(int vagas_garagem);

        float getArea();
        int getNum_quarto(); 
        int getAndar();
        float getValor_condominio();
        int getVagas_garagem();

        // METODOS
        void exibeAtributos();
        void lerAtributos();


    protected:
        float area;
        int num_quartos; 
        int andar;
        float valor_condominio;
        int vagas_garagem;
};

#endif // APARTAMENTO_H

#ifndef TERRENO_H
#define TERRENO_H

#include <string>
using namespace std;

class Terreno : public Imovel{
    public:
        Terreno();

        // GETS E SETS
        void setArea(float area);

        float getArea();

        // METODOS
        void exibeAtributos();
        void lerAtributos();
    protected:
        float area;
};

#endif // TERRENO_H


#include <iostream>

//Construtores e Destrutores
Imovel::Imovel(){

}
        
//Gets e Sets

void Imovel::setNome(string nome){
    this -> nome = nome;
}
void Imovel::setValor(float valor){
    this -> valor = valor;
}
void Imovel::setTipo(int tipo){
    this -> tipo = tipo;
}
void Imovel::setDisponibilidade(string disponibilidade){
    this -> disponibilidade = disponibilidade;
}

string Imovel::getNome(){
    return nome;
}
float Imovel::getValor(){
    return valor;
}
int Imovel::getTipo(){
    return tipo;
}
string Imovel::getDisponibilidade(){
    return disponibilidade;
}

//Metodos
void Imovel::exibeAtributos(){
    cout << nome << " para " << disponibilidade << ". ";
}
void Imovel::lerAtributos(){
    cin >> valor;
    getchar();
    getline(cin, disponibilidade);
}

#include <iostream>

//Construtores e Destrutores
Casa::Casa() : Imovel(){
    nome = "Casa";
    tipo = 1;
}
              

//Gets e Sets

void Casa::setNum_pavimentos(int num_pavimentos){
    this -> num_pavimentos = num_pavimentos;
}
void Casa::setNum_quartos(int num_quartos){
    this -> num_quartos = num_quartos;
}
void Casa::setArea_terreno(float area_terreno){
    this -> area_terreno = area_terreno;
}
void Casa::setArea_construida(float area_construida){
    this -> area_construida = area_construida;
}

int Casa::getNum_pavimentos(){
    return num_pavimentos;
}
int Casa::getNum_quartos(){
    return num_quartos;
}
float Casa::getArea_terreno(){
    return area_terreno;
}
float Casa::getArea_construida(){
    return area_construida;
}

//Metodos
void Casa::exibeAtributos(){
    Imovel::exibeAtributos();
    cout << num_pavimentos << " pavimentos, " << num_quartos << " quartos, " << area_terreno << "m2 de área de terreno e " << area_construida << "m2 de área construída. R$ " << valor << "." << endl;
}
void Casa::lerAtributos(){
    Imovel::lerAtributos();
    cin >> num_pavimentos;
    cin >> num_quartos;
    cin >> area_terreno;
    cin >> area_construida;
}

#include <iostream>

//Construtores e Destrutores
Apartamento::Apartamento() : Imovel(){
    nome = "Apartamento";
    tipo = 2;
}
        
//Gets e Sets
void Apartamento::setArea(float area){
    this -> area = area;
}
void Apartamento::setNum_quartos(int num_quartos){
    this -> num_quartos = num_quartos;
}
void Apartamento::setAndar(int andar){
    this -> andar = andar;
}
void Apartamento::setValor_condominio(float valor_condominio){
    this -> valor_condominio = valor_condominio;
}
void Apartamento::setVagas_garagem(int vagas_garagem){
    this -> vagas_garagem = vagas_garagem;
}

float Apartamento::getArea(){
    return area;
}
int Apartamento::getNum_quarto(){
    return num_quartos;
}
int Apartamento::getAndar(){
    return andar;
}
float Apartamento::getValor_condominio(){
    return valor_condominio;
}
int Apartamento::getVagas_garagem(){
    return vagas_garagem;
}
//Metodos
void Apartamento::exibeAtributos(){
    Imovel::exibeAtributos();
    cout << area << "m2 de área, " << num_quartos << " quartos, " << andar << " andar(es), " << valor_condominio << " de condomínio, " << vagas_garagem << " vaga(s) de garagem. R$ " << valor << "." << endl;
}
void Apartamento::lerAtributos(){
    Imovel::lerAtributos();
    cin >> area;
    cin >> num_quartos;
    cin >> andar;
    cin >> valor_condominio;
    cin >> vagas_garagem;
}

#include <iostream>

//Construtores e Destrutores
Terreno::Terreno() : Imovel(){
    nome = "Terreno";
    tipo = 3;
}  

//Gets e Sets

void Terreno::setArea(float area){
    this -> area = area;
}

float Terreno::getArea(){
    return area;
}

//Metodos
void Terreno::exibeAtributos(){
    Imovel::exibeAtributos();
    cout << area <<"m2 de área de terreno. R$ " << valor << "." << endl;
}
void Terreno::lerAtributos(){
    Imovel::lerAtributos();
    cin >> area;
}

#include <iostream>
#include <string>

using namespace std;


int main(){

    int N, tipo;

    Casa ksa;
    Apartamento ap;
    Terreno ter;

    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> tipo;
        switch(tipo){
            case 1:
                ksa.lerAtributos();
                ksa.exibeAtributos();
                break;
            case 2:
                ap.lerAtributos();
                ap.exibeAtributos();
                break;
            case 3:
                ter.lerAtributos();
                ter.exibeAtributos();
                break;
        }
            
    }


    return 0;

}