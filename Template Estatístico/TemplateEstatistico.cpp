#include <iostream>
#include <vector>
#include <string>


#ifndef LIVRO_H
#define LIVRO_H

#include <string>

class Livro
{
    public:
        Livro(std::string t, int paginas);
        int getTotal();
        std::string toString();

    private:
        std::string titulo;
        int totalPaginas;
};

#endif // LIVRO_H

Livro::Livro(std::string t, int paginas)
{
    titulo = t;
    totalPaginas = paginas;
}

int Livro::getTotal(){
    return totalPaginas;
}

std::string Livro::toString(){
    return titulo + ", páginas: " + std::to_string(totalPaginas);
}


#ifndef PEDIDO_H
#define PEDIDO_H

#include <string>

class Pedido
{
    public:
        Pedido(float valor, int quant);
        float getTotal();
        std::string toString();

    private:
        float valorUnitario;
        int qtde;
};

#endif // PEDIDO_H

#include <sstream>

Pedido::Pedido(float valor, int quant)
{
    valorUnitario = valor;
    qtde = quant;
}

float Pedido::getTotal()
{
    return valorUnitario * qtde;
}

std::string Pedido::toString()
{
    std::stringstream sout;

    sout << "R$ " << valorUnitario << ", quant: " << qtde << ", total: R$ " << getTotal();

    return sout.str();
}


#ifndef ESTATISTICA_H
#define ESTATISTICA_H

#include <vector>

template <class T>
class Estatistica
{
    public:
        //Estatistica();
        int indexOfMaior(std::vector<T> vec)
        {
            int maior = 0;
            int index = -1;

            if(vec.size() > 0){
                maior = vec[0].getTotal();
                index = 0;
            }

            for(int i = 0; i < vec.size(); i++){
                if(vec[i].getTotal() > maior){
                    maior = vec[i].getTotal();
                    index = i;
                }
            }
            return index;
        }

        int indexOfMenor(std::vector<T> vec)
        {
            int menor;
            int index = -1;

            if(vec.size() > 0){
                menor = vec[0].getTotal();
                index = 0;
            }

            for(int i = 0; i < vec.size(); i++){
                if(vec[i].getTotal() < menor){
                    menor = vec[i].getTotal();
                    index = i;
                }
            }
            return index;

        }

        float media(std::vector<T> vec)
        {
            float soma = 0;

            for(int i = 0; i < vec.size(); i++){
                soma += vec[i].getTotal();
            }

            return soma / vec.size();
        }
};

#endif // ESTATISTICAS_H

using namespace std;

int main()
{
    int n, quant;
    float preco;
    string titulo;
    Estatistica<Livro> eLiv;
    Estatistica<Pedido> ePed;
    vector<Livro> livros;
    vector<Pedido> pedidos;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> preco;
        cin >> quant;
        pedidos.push_back(Pedido(preco, quant));
    }

    cin >> n;

    for(int i = 0; i < n; i++){
        cin.ignore();
        getline(cin, titulo);
        cin >> quant;
        livros.push_back(Livro(titulo, quant));
    }
    int index = ePed.indexOfMaior(pedidos);
    cout << "Maior: " << pedidos[index].toString() << endl;
    index = ePed.indexOfMenor(pedidos);
    cout << "Menor: " << pedidos[index].toString() << endl;
    cout << "Média: " << ePed.media(pedidos) << endl;

    index = eLiv.indexOfMaior(livros);
    cout << "Maior: " << livros[index].toString() << endl;
    index = eLiv.indexOfMenor(livros);
    cout << "Menor: " << livros[index].toString() << endl;
    cout << "Média: " << eLiv.media(livros) << endl;

    return 0;
}