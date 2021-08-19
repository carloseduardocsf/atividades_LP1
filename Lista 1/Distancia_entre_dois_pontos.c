#include <stdio.h>
#include <math.h>

typedef struct Ponto{
    int x;
    int y;
} tPonto;


int main(){

    tPonto p1, p2;
    float distancia;

    scanf("%d", &p1.x);
    scanf("%d", &p1.y);
    scanf("%d", &p2.x);
    scanf("%d", &p2.y);

    distancia = sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));

    printf("%.f\n", distancia * distancia);

    return 0;

}