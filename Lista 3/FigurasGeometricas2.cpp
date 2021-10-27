#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

#include <string>

class FiguraGeometrica
{
    public:
        FiguraGeometrica(int tipo);

        virtual float calcularArea() = 0;
        virtual void lerAtributosArea() = 0;
        std::string getNome();

    protected:
        std::string nome;
        int tipo;

    private:
};

#endif //FIGURAGEOMETRICA_H

FiguraGeometrica::FiguraGeometrica(int tipo){
    this->tipo = tipo;
    nome = "FiguraGeometrica";
}

float FiguraGeometrica::calcularArea(){
    return 0;
}

void FiguraGeometrica::lerAtributosArea(){

}

std::string FiguraGeometrica::getNome(){
    return nome;
}

#ifndef CIRCULO_H
#define CIRCULO_H

class Circulo : public FiguraGeometrica
{
    public:
        Circulo();

        float calcularArea();
        void lerAtributosArea();

    private:
        float raio;
};

#endif //CIRCULO_H

#include <iostream>

Circulo::Circulo()
    : FiguraGeometrica(4)
{
    nome = "Círculo";
}

float Circulo::calcularArea(){
    return raio * raio * 3.14;
}

void Circulo::lerAtributosArea(){
    std::cin >> raio;
}

#ifndef QUADRADO_H
#define QUADRADO_H

class Quadrado : public FiguraGeometrica
{
    public:
        Quadrado();

        float calcularArea();
        void lerAtributosArea();

    private:
        float lado;
};

#endif //QUADRADO_H

#include <iostream>

Quadrado::Quadrado()
    : FiguraGeometrica(1)
{
    nome = "Quadrado";
}

float Quadrado::calcularArea(){
    return lado * lado;
}

void Quadrado::lerAtributosArea(){
    std::cin >> lado;
}

#ifndef RETANGULO_H
#define RETANGULO_H

class Retangulo : public FiguraGeometrica
{
    public:
        Retangulo();

        float calcularArea();
        void lerAtributosArea();

    private:
        float lado1, lado2;
};

#endif //RETANGULO_H

#include <iostream>

Retangulo::Retangulo()
    : FiguraGeometrica(2)
{
    nome = "Retângulo";
}

float Retangulo::calcularArea(){
    return lado1 * lado2;
}

void Retangulo::lerAtributosArea(){
    std::cin >> lado1;
    std::cin >> lado2;
}

#ifndef TRIANGULO_H
#define TRIANGULO_H

class Triangulo : public FiguraGeometrica
{
    public:
        Triangulo();

        float calcularArea();
        void lerAtributosArea();

    private:
        float altura;
        float base;
};

#endif //TRIANGULO_H


Triangulo::Triangulo()
    : FiguraGeometrica(3)
{
    nome = "Triângulo";
}

float Triangulo::calcularArea(){
    return base * altura / 2;
}

void Triangulo::lerAtributosArea(){
    std::cin >> base;
    std::cin >> altura;
}

using namespace std;

int main(){
    FiguraGeometrica *fig;
    int n = 1;

    while (n>0) {
        cin >> n;
        switch (n){
            case 1:
                fig = new Quadrado();
                break;
            case 2:
                fig = new Retangulo();
                break;
            case 3:
                fig = new Triangulo();
                break;
            case 4:
                fig = new Circulo();
                break;

        }
        
        if (n == 1 || n == 2 || n == 3 || n == 4) {
            fig->lerAtributosArea();
            cout << fig->getNome() << " polimórfico de área " << fig->calcularArea() << endl;
        }
    }

    return 0;
}