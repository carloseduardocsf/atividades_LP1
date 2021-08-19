#include <stdio.h>
#include <math.h>

typedef struct Ponto {
    int x;
    int y;
} tPonto;

float Distancia(tPonto p1, tPonto p2){
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

int main(){
    tPonto p1;
    int N, d, menorIndice, menorDist = 99999;

    scanf("%d", &p1.x);
    scanf("%d", &p1.y);

    scanf("%d", &N);

    tPonto vet[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &vet[i].x);
        scanf("%d", &vet[i].y);

        d = Distancia(p1, vet[i]);

        if(d < menorDist){
            menorDist = d;
            menorIndice = i;
        }
    }

    printf("Ponto mais perto é (%d, %d)\n", vet[menorIndice].x, vet[menorIndice].y);

    return 0;
}