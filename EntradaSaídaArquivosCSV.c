#include <stdio.h>
#include <string.h>

typedef struct Dados{
    int CPF;
    char nome[50];
    char sobrenome[50];
    char endereco[100];
    char telefone[50];
} tDados;


int main(){

    int N, i;
    scanf("%d", &N);
    tDados pessoas[N];

    for(i = 0; i < N; i++){
        scanf("%d", &pessoas[i].CPF);
        getchar();
        fgets(pessoas[i].nome, 50, stdin);
        fgets(pessoas[i].sobrenome, 50, stdin);
        fgets(pessoas[i].endereco, 100, stdin);
        fgets(pessoas[i].telefone, 50, stdin);
        pessoas[i].nome[strlen(pessoas[i].nome) - 1] = '\0';
        pessoas[i].sobrenome[strlen(pessoas[i].sobrenome) - 1] = '\0';
        pessoas[i].endereco[strlen(pessoas[i].endereco) - 1] = '\0';
        pessoas[i].telefone[strlen(pessoas[i].telefone) - 1] = '\0';
    }

    FILE *fp = fopen("dados012345.csv", "w"); //write
    if(fp <= 0){
        printf("Erro abrindo arquivo\n");
        return 1;
    }

    //percorre o vetor e salva em arquivos
     fprintf(fp, "CPF,nome,snome,endereço,telefone\n");
    for(i = 0; i < N; i++){
        fprintf(fp, "%d,%s,%s,%s,%s\n", pessoas[i].CPF, pessoas[i].nome, pessoas[i].sobrenome, 
        pessoas[i].endereco, pessoas[i].telefone);
    }

    fclose(fp);

    FILE *fp1 = fopen("dados012345.csv", "r"); //read
    if(fp1 <= 0){
        printf("Erro abrindo arquivo\n");
        return 1;
    }
    char linha[300];
    for(i = 0; i <= N; i++){
        fgets(linha, 300, fp1);
        printf("%s", linha); 
    }
    fclose(fp1);

    return 0;

}