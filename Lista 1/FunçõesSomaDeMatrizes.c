#include <stdio.h>
#define LIMITE 10
    
void lerMatriz(int matriz[LIMITE][LIMITE], int m, int n){
        int i, j;
        for (i = 0; i < m; i++){
            for (j = 0; j < n; j++){
                scanf("%d", &matriz[i][j]);
            } 
        }
            
}
   
void somarMatrizes(int a[LIMITE][LIMITE], int b[LIMITE][LIMITE], int c[LIMITE][LIMITE], int m, int n){
       int i, j;
       for (i = 0; i < m; i++){
           for (j = 0; j < n; j++){
               c[i][j] = a[i][j] + b[i][j];
           } 
       }  
   }
   
void escreverMatriz(int matriz[LIMITE][LIMITE], int m, int n){
    int i, j;
    for (i = 0; i < m; i++){
           for (j = 0; j < n; j++){
               printf("%d ", matriz[i][j]);
           } 
            printf("\n");
       }
   }
   
int main(){
    int m, n, m1[LIMITE][LIMITE], m2[LIMITE][LIMITE], m3[LIMITE][LIMITE];
    scanf("%d", &m);
    scanf("%d", &n);
    
    lerMatriz(m1, m, n);
    lerMatriz(m2, m, n);
    
    somarMatrizes(m1, m2, m3, m, n);
    escreverMatriz(m3, m, n);

       return 0;
   }