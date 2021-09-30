#include <iostream>
#include <string>

using namespace std;

class Despesa{
    private:
        string nome;
        float valor;
        bool tipoDeGasto; 
    public:
        Despesa();
        Despesa(float valor){
            this -> valor = 0;
        }

        void setNome(string nome);
        void setValor(float valor);
        void setTipoDeGasto(bool tipoDeGasto);

        string getNome();
        float getValor();
        bool getTipoDeGasto();

};



class ControleDeGastos{
        private:
            string despesas; // vetor de objetos do tipo Despesa, com 100 elementos.

            void setDespesa(Despesa d, int pos){ // Esse método, vai receber uma despesa e uma posição, e adicionar a despesa ao vetor na posição indicada.

            } 

            Despesa getDespesa(int pos){ // Esse método vai receber o índice de uma despesa e retornar a Despesa do vetor de despesas.

            } 

            float calculaTotalDeDespesas(){ // Esse método não recebe parâmetros e deve retornar o valor total das despesas do sistema.

            }

            float calculaTotalDeDespesas(string tipo){ // Esse método recebe o tipo como parâmetro e deve retornar o valor total das despesas do tipo especificado.​

            }

            bool existeDespesaDoTipo(string tipo){ //Esse método verifica se dentre as despesas guardadas no ControleDeGastos há alguma delas que é do tipo passado, retornando true neste caso e false, caso contrario.
                
            }
        public:

};

int main(){




    return 0;
}