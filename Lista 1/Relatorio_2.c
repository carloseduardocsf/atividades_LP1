#include <stdio.h>
#include <string.h>

typedef struct Movel{
    char descricao[50];
    float peso;
    char tipo;
} tMovel;

int main(){
    tMovel movel;
    int N, i;
    int x = 0, y = 0, mais_pesado = 0;
    char nome_mais_pesado;
    int tam_string;
    
    scanf("%d", &N);

    tMovel vet[N];
    for(i = 0; i < N; i++){
        getchar();
        scanf("%[^\n]", vet[i].descricao);
        getchar();
        scanf("%f", &vet[i].peso);
        getchar();
        scanf("%c", &vet[i].tipo);

        if(vet[i].tipo == 's' && vet[i].peso > 10){
            x++;
        }

        tam_string = strlen(vet[i].descricao);
        if (strstr(vet[i].descricao, "Real") == &vet[i].descricao[strlen(vet[i].descricao) - 4]){
            y++;
        }
        
        if(vet[i].peso > mais_pesado){
            mais_pesado = vet[i].peso;
            nome_mais_pesado = i;
        }
    }

    printf("Tipo 's' acima de 10Kg: %d\n", x);
    printf("Termina em \"Real\": %d\n", y);
    printf("Mais pesado: \"%s\"\n", vet[nome_mais_pesado].descricao);

    return 0;

}
