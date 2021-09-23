#include <iostream>
#include <string>

using namespace std;

class Invoice{
    public:
        int numero_item;
        char descricao_item[50];
        int quant_item;
        float preco_item;
        float total;

        float setInvoiceAmount(int quant_item, float preco_item){
            float total;
            this -> total = quant_item * preco_item;
        }

        float getInvoiceAmount(){
            return this -> total;
        }
};


int main(){

    Invoice fatura1;
    Invoice fatura2;
    Invoice getInvoiceAmount(int quant_item, float preco_item);

    
    scanf("%d", &fatura1.numero_item);
    getchar();
    scanf("%[^\n]", fatura1.descricao_item);
    getchar();
    scanf("%d", &fatura1.quant_item);
    getchar();
    scanf("%f", &fatura1.preco_item);
    getchar();

    scanf("%d", &fatura2.numero_item);
    getchar();
    scanf("%[^\n]", fatura2.descricao_item);
    getchar();
    scanf("%d", &fatura2.quant_item);
    getchar();
    scanf("%f", &fatura2.preco_item);

    fatura1.setInvoiceAmount(fatura1.quant_item, fatura1.preco_item);
    fatura2.setInvoiceAmount(fatura2.quant_item, fatura2.preco_item);
    

    if(fatura1.quant_item < 0){
        printf("%d - %s - 0 - %.2f - 0\n", fatura1.numero_item, fatura1.descricao_item, fatura1.preco_item);
    }else if(fatura1.preco_item < 0){
        printf("%d - %s - %d - 0 - 0\n", fatura1.numero_item, fatura1.descricao_item, fatura1.quant_item);
    }else if(fatura1.quant_item < 0 && fatura1.preco_item < 0){
        printf("%d - %s - 0 - 0 - 0\n", fatura1.numero_item, fatura1.descricao_item);
    }else{
        printf("%d - %s - %d - %.1f - %.1f\n", fatura1.numero_item, fatura1.descricao_item, fatura1.quant_item, fatura1.preco_item, fatura1.getInvoiceAmount());
    }
    
 
    if(fatura2.quant_item < 0){
        printf("%d - %s - 0 - %.2f - 0\n", fatura2.numero_item, fatura2.descricao_item, fatura2.preco_item);
    }else if(fatura2.preco_item < 0){
        printf("%d - %s - %d - 0 - 0\n", fatura2.numero_item, fatura2.descricao_item, fatura2.quant_item);
    }else if(fatura2.quant_item < 0 && fatura2.preco_item < 0){
        printf("%d - %s - 0 - 0 - 0\n", fatura2.numero_item, fatura2.descricao_item);
    }else{
        printf("%d - %s - %d - %.2f - %.2f\n", fatura2.numero_item, fatura2.descricao_item, fatura2.quant_item, fatura2.preco_item, fatura2.getInvoiceAmount());
    }


    return 0;

}
