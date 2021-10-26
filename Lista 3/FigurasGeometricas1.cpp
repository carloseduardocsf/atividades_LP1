#include <iostream>
#include <string>

using namespace std;

class FiguraGeometrica{
    protected:
        string nome;
        int tipo;
    public:
        FiguraGeometrica(); // contrutor padrao
        FiguraGeometrica(int tipo); // Construtor que recebe como parâmetro o tipo e inicia seu atributo
        float calcularArea(); // Calcula a área de acordo com a figura geométrica
        void lerAtributosArea(); // Lê da entrada padrão os atributos relacionados a área.
        string getNome(); // Retorna o nome da figura geométrica.

};

FiguraGeometrica::FiguraGeometrica(){

}

FiguraGeometrica::FiguraGeometrica(int tipo){
    this -> tipo = tipo;
    nome = "FiguraGeometrica";
}

float FiguraGeometrica::calcularArea(){
    return 0;
}
void FiguraGeometrica::lerAtributosArea(){

}
string FiguraGeometrica::getNome(){
    return nome;
}

// classe TRIANGULO

class Triangulo : public FiguraGeometrica{
    public:
        Triangulo(int tipo);
        float calcularArea();
        void lerAtributosArea();
    private:
        float base, altura;
};

Triangulo::Triangulo(int tipo) : FiguraGeometrica(tipo) {
    this -> tipo = tipo;
    nome = "Triângulo";
};
float Triangulo::calcularArea(){
    return (base * altura) / 2;
}
void Triangulo::lerAtributosArea(){
    cin >> base;
    cin >> altura;
}



// classe QUADRADO

class Quadrado : public FiguraGeometrica{
    public:
        Quadrado(int tipo);
        float calcularArea();
        void lerAtributosArea();
    private:
        float lado;
};

Quadrado::Quadrado(int tipo) : FiguraGeometrica(tipo) {
    this -> tipo = tipo;
    nome = "Quadrado";
};
float Quadrado::calcularArea(){
    return lado * lado;
}
void Quadrado::lerAtributosArea(){
    cin >> lado;
}


// classe RETANGULO

class Retangulo : public FiguraGeometrica{
    public:
       Retangulo(int tipo);
       float calcularArea();
       void lerAtributosArea();
    private:
        float base, altura;
};

Retangulo::Retangulo(int tipo) : FiguraGeometrica(tipo) {
    this -> tipo = tipo;
    nome = "Retângulo";
};
float Retangulo::calcularArea(){
    return base * altura;
}
void Retangulo::lerAtributosArea(){
    cin >> base;
    cin >> altura;
}


// classe CIRCULO

class Circulo : public FiguraGeometrica{
    public:
        Circulo(int tipo);
        float calcularArea();
        void lerAtributosArea();
    private:
        float raio;
};

Circulo::Circulo(int tipo) : FiguraGeometrica(tipo) {
    this -> tipo = tipo;
    nome = "Círculo";
};
float Circulo::calcularArea(){
    return 3.14 * raio * raio;
}
void Circulo::lerAtributosArea(){
    cin >> raio;
}



int main(){

    int tipo;

    Quadrado qua = Quadrado(1);
    Retangulo ret = Retangulo(2);
    Triangulo tri = Triangulo(3);
    Circulo cir = Circulo(4);

    do{
        cin >> tipo;
        switch (tipo){
        case 1:
            qua = Quadrado(1);
            qua.lerAtributosArea();
            cout << qua.getNome() << " de área " << qua.calcularArea() << endl;
            break;
        case 2:
            ret = Retangulo(2);
            ret.lerAtributosArea();
            cout << ret.getNome() << " de área " << ret.calcularArea() << endl;
            break;
        case 3:
            tri = Triangulo(3);
            tri.lerAtributosArea();
            cout << tri.getNome() << " de área " << tri.calcularArea() << endl;
            break;
        case 4:
            cir = Circulo(4);
            cir.lerAtributosArea();
            cout << cir.getNome() << " de área " << cir.calcularArea() << endl;
            break;
        }
    } while(tipo != 0);

    

    return 0;
}
