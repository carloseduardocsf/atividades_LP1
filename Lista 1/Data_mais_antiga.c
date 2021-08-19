#include <stdio.h>


typedef struct Data{
    int dia_d1, dia_d2;
    int mes_d1, mes_d2;
    int ano_d1, ano_d2;
} tData;

int mais_velha(tData data){

    if(data.ano_d1 < data.ano_d2){ // d1 eh mais velha
        return 1;
    }else if(data.ano_d2 < data.ano_d1){ // d2 eh mais velha
        return -1;
    }else if(data.ano_d1 == data.ano_d2){
        if(data.mes_d1 < data.mes_d2){ // d1 eh mais velha
            return 1;
        }else if(data.mes_d2 < data.mes_d1){ // d2 eh mais velha
            return -1;
        }else if(data.mes_d1 == data.mes_d2){
            if(data.dia_d1 < data.dia_d2){ // d1 eh mais velha
                return 1;
            }else if(data.dia_d2 < data.dia_d1){ // d2 eh mais velha
                return -1;
            }else if(data.dia_d1 == data.dia_d2){ // idades iguais
                return 0;
            }
        }
    }
}

int main(){

    tData data;
    int x;
    int d1, d2;

    scanf("%d", &data.dia_d1);
    scanf("%d", &data.mes_d1);
    scanf("%d", &data.ano_d1);

    scanf("%d", &data.dia_d2);
    scanf("%d", &data.mes_d2); 
    scanf("%d", &data.ano_d2);

    x = mais_velha(data);

    if(x == 1){
        printf("Pessoa 1 é mais velha");
    }else if(x == -1){
        printf("Pessoa 2 é mais velha");
    }else if(x == 0){
        printf("Pessoas são da mesma idade");
    }

    return 0;

}