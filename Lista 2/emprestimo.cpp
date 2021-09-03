#include <iostream>
using namespace std;

int main(){

    int salario, emprestimo, prestacoes ;

    while(1){
        cin >> salario;
        if(salario > 0){
            break;
        }
    }

    while(1){
        cin >> emprestimo;
        if(emprestimo > 0){
            break;
        }
    }

    while(1){
        cin >> prestacoes;
        if(prestacoes > 0){
            break;
        }
    }

    if(emprestimo / (prestacoes * 1.0) <= 0.3 * salario){
        printf("Emprestimo pode ser concedido\n");
    }else{
        printf("Emprestimo nao pode ser concedido\n");
    }


    return 0;

}