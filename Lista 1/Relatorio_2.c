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





/*strcpy(str1, "Real");
        strcpy(str2, vet[i].descricao);
        result = strncmp(str1, str2, 6);
        if(result == 0) {
            y++;
        }*/


        /*tam_string = strlen(vet[i].descricao);
        if(strcmp(vet[i].descricao, "R") == 0){
            y++;
        }*/

        /*res = strstr(vet[i].descricao, "Real");	
        if(strcmp(res, "Real") >= 0){		
	        y++;		
        }*/


        /*char str[] = "%s", ;
        char search[] = "Real";
        char *ptr = strstr(str, search);
        if (ptr != NULL){ 
            printf("'%s' contém'%s'\n", str, search);
        }*/



        /*char* p;
        p = strstr(m[i].descricao, "Real");
        if (p != NULL) {
            Real++;
        }*/

        /*int Real(Movel m[], int n){
    char *ptr = NULL;
    int cont = 0;
    
    for(int i = 0; i < n; i++){
        ptr = strstr(m[i].descricao, "Real");
        if(ptr != NULL) cont++;
    } 

    return cont;
}*/



/*char *real = strstr(moveis[i].descricao, "Real");
        if(real != NULL && (&moveis[i].descricao[strlen(moveis[i].descricao) - 1] - real == 3) ){
            termina_real++;
        }*/