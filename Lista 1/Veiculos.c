#include <stdio.h>

typedef struct Veiculos{
    char modelo_X[20], modelo_Y[20];
    char marca_X[20], marca_Y[20];
    int ano_X, ano_Y;
    float preco_X, preco_Y;
} tVeiculos;


int main(){

    tVeiculos veiculo;

    scanf("%s", veiculo.modelo_X);
    scanf("%s", veiculo.marca_X);
    scanf("%d", &veiculo.ano_X);
    scanf("%f", &veiculo.preco_X);

    scanf("%s", veiculo.modelo_Y);
    scanf("%s", veiculo.marca_Y);
    scanf("%d", &veiculo.ano_Y);
    scanf("%f", &veiculo.preco_Y);

    if(veiculo.ano_X < veiculo.ano_Y){ //se o veiculo "x" for mais antigo
        printf("%s %s", veiculo.marca_X, veiculo.modelo_X);
    }else if(veiculo.ano_Y < veiculo.ano_X){ // se o veiculo "y" for mais antigo
        printf("%s %s", veiculo.marca_Y, veiculo.modelo_Y);
    }else if(veiculo.ano_Y == veiculo.ano_X){ // se ambos os veiculos forem o mesmo preco
        if(veiculo.preco_X < veiculo.preco_Y){ // se o veiculo "x" for mais barato 
            printf("%s %s", veiculo.marca_X, veiculo.modelo_X);
        }else if(veiculo.preco_Y < veiculo.preco_X){ // se o veiculo "y" for mais barato
            printf("%s %s", veiculo.marca_Y, veiculo.modelo_Y);
        }
    }


    return 0;

}