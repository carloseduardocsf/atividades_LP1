#include <stdio.h>

typedef struct Registro{
    char nome[30];
    int numero;
    int quant_votos; 
} tResistro;

int Vencedor(tResistro c[], int len){
    int vencedor = 0, i, ant, porcent;
    int maior = 0;

    for(i = 0; i < len; i++){
        if(c[i].quant_votos > maior){
            vencedor = i;
            maior = c[i].quant_votos;
        }
    }
    return vencedor;
}

int main(){
    int candidados, i, voto;
    int x = 0, totalVotos = 0, nulo = 0, found = 0;
    float percentual_nulo;
    float percentual;

    scanf("%d", &candidados);

    tResistro vet[candidados];
    for(i = 0; i < candidados; i++){
        scanf("%d", &vet[i].numero);
        getchar();
        scanf("%[^\n]", vet[i].nome);
        vet[i].quant_votos = 0; // zerando a quantidade de votos
    }

    do{
        scanf("%d", &voto);
        if(voto > 0){
            found = 0;
            for (i = 0; i < candidados; i++){
                if(voto==vet[i].numero){
                    vet[i].quant_votos++;
                    found = 1;
                    break;
                }
            }
            if(found == 0){
                nulo++;
            }
            totalVotos++;
        }
    } while(voto > 0);

    int Venc = Vencedor( vet, candidados);

    for(i = 0; i < candidados; i++){
        if(i == Venc){
            printf("%.2f - %d - %s VENCEDOR\n", vet[i].quant_votos * 100.0 / totalVotos , vet[i].numero, vet[i].nome);
        }else{
            printf("%.2f - %d - %s\n", vet[i].quant_votos * 100.0 / totalVotos , vet[i].numero, vet[i].nome);
        } 
    }

    printf("%.2f - Nulos\n", nulo * 100.0 / totalVotos);

    return 0;

}


   /*while(1){
        scanf("%d", &voto);
        if(voto <= 0){
            break;
        }
        for (i = 0; i < candidados; i++){
            if(voto == vet[i].numero){
                x++;
            }else if(voto != vet[i].numero){
                nulo++;
            }
        }
       cont++; 
    }

    for(i = 0; i < candidados; i++){
        percentual = x / cont * 1.0;
    }

    for(i = 0; i < candidados; i++){
        printf("%.1f - %d - %s\n", percentual, vet[i].numero, vet[i].nome);
    }
    
    percentual_nulo = nulo / cont * 1.0;
    printf("%.1f - Nulos\n", percentual_nulo);*/