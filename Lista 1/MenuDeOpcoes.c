#include <stdio.h>

void mostrarMenu(){
    printf("1 - Item 1\n");
    printf("2 - Item 2\n");
    printf("3 - Item 3\n");
    printf("4 - Sair\n");
}


int main(){

    int opcao;

    while(1){
        mostrarMenu();
        scanf("%d", &opcao);
        if(opcao == 1){
            printf("Item 1\n");
        }else if(opcao == 2){
            printf("Item 2\n");
        }else if(opcao == 3){
            printf("Item 3\n");
        }else if(opcao == 4){
            printf("Sair\n");
            break;
        }else if(opcao != 1 && opcao != 2 && opcao != 3 && opcao != 4){
            printf("Opcao %d Invalida\n", opcao);
        }
    }

    return 0;
}
