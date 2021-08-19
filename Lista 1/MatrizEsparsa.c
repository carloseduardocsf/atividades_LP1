#include <stdio.h>

void lerMatriz(int matriz[10][10], int m, int n){
    int i, j;
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            scanf("%d", &matriz[i][j]);
        } 
    }           
}

void ehEsparsa(int a[10][10], int m, int n){
    int i, j;
    int quant_elementos, cont = 0;
    float porcentagem; 
    quant_elementos = m * n;

    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            if(a[i][j] == 0){
                cont++; 
            }
        } 
    } 
    
    porcentagem = (cont * 1.0) / (quant_elementos * 1.0); 

    if(porcentagem > 0.7){
        printf("A matriz é esparsa");
    }else{
        printf("A matriz não é esparsa");
    }

}


int main(){
    int m, n, m1[10][10];

    scanf("%d", &m);
    scanf("%d", &n);

    lerMatriz(m1, m, n);

    ehEsparsa(m1, m, n);
    


    return 0;
}