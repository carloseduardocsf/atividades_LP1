#include <stdio.h>

typedef struct Jogadores{
    char nome_j1[51], nome_j2[51];
    int idade_j1, idade_j2;
    float chutes_j1, chutes_j2;
    float gols_j1, gols_j2;
} tJogadores;


int main(){

    tJogadores jogador;
    float aproveitamento_j1;
    float aproveitamento_j2; 

    scanf("%[^\n]", jogador.nome_j1);
    scanf("%d", &jogador.idade_j1);
    scanf("%f", &jogador.chutes_j1);
    scanf("%f%*c", &jogador.gols_j1);

    scanf("%[^\n]", jogador.nome_j2);
    scanf("%d", &jogador.idade_j2);
    scanf("%f", &jogador.chutes_j2);
    scanf("%f", &jogador.gols_j2);

    aproveitamento_j1 = jogador.gols_j1 / jogador.chutes_j1;
    aproveitamento_j2 = jogador.gols_j2 / jogador.chutes_j2;

    if(aproveitamento_j1 > aproveitamento_j2){ // se o jogador 1 tiver melhor aproveitamento
        printf("%s (%d)\n", jogador.nome_j1, jogador.idade_j1);
    }else if(aproveitamento_j2 > aproveitamento_j1){ // se o jogador 2 tiver melhor aproveitamento
        printf("%s (%d)\n", jogador.nome_j2, jogador.idade_j2);
    }
    

    return 0;

}