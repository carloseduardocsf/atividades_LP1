#include <iostream>
#include <string>

using namespace std; 

class Invoice{
    private:
        int numero_item;
        string descricao_item;
        int quant_item;
        float preco_item;
    public:

        Invoice();
        Invoice(int numero_item, string descricao_item, int quant_item, float preco_item); // construtor 

        void setNumero(int numero_item);
        void setDescricao(char descricao_item);
        void setQuant(int quant_item);
        void setPreco(float preco_item);
        void setInvoiceAmount(int quant_item, float preco_item);

        int getNumero();
        string getDescricao();
        int getQuant();
        float getPreco();
        float getInvoiceAmount();

};

Invoice::Invoice(){
    
}

Invoice::Invoice(int numero_item, string descricao_item, int quant_item, float preco_item){
    this -> numero_item = numero_item;
    this -> descricao_item = descricao_item;
    this -> quant_item = quant_item;
    this -> preco_item = preco_item;
}


void Invoice::setNumero(int numero_item){
    this -> numero_item = numero_item;
}
void Invoice::setDescricao(char descricao_item){
	this -> descricao_item = descricao_item;
}
void Invoice::setQuant(int quant_item){
	this -> quant_item = quant_item;
}
void Invoice::setPreco(float preco_item){
	this -> preco_item = preco_item;
}
void Invoice::setInvoiceAmount(int quant_item, float preco_item){
    this -> quant_item * preco_item;
}

int Invoice::getNumero(){
    return this -> numero_item;
}
string Invoice::getDescricao(){
	return this -> descricao_item;
}
int Invoice::getQuant(){
	return this -> quant_item;
}
float Invoice::getPreco(){
	return this -> preco_item;
}
float Invoice::getInvoiceAmount(){
	return this -> quant_item * preco_item;
}


int main(){

    int numero_item;
    string descricao_item;
    int quant_item;
    float preco_item;

    Invoice fatura1;
    Invoice fatura2;
    Invoice getInvoiceAmount(int quant_item, float preco_item);
    
    
    int N = 2;
    Invoice inv[N];
    for(int i = 0; i < N; i++){
        cin >> numero_item;
        getchar();
        getline(cin, descricao_item);

        cin >> quant_item;
        
        cin >> preco_item;
        getchar();

        inv[i] = Invoice(numero_item, descricao_item, quant_item, preco_item);

        inv[i].setInvoiceAmount(quant_item, preco_item);

    }

    for(int i = 0; i < N; i++){
        if(inv[i].getQuant() < 0){
            cout << inv[i].getNumero() << " - " << inv[i].getDescricao() << " - " << "0" << " - " << inv[i].getPreco() << " - " << "0" << endl;
        }else if(inv[i].getPreco() < 0){
            cout << inv[i].getNumero() << " - " << inv[i].getDescricao() << " - " << inv[i].getQuant() << " - " << "0" << " - " << "0" << endl;
        }else if(inv[i].getQuant() < 0 && inv[i].getPreco() < 0){
            cout << inv[i].getNumero() << " - " << inv[i].getDescricao() << " - " << "0" << " - " << "0" << " - " << "0" << endl;
        }else{
            cout << inv[i].getNumero() << " - " << inv[i].getDescricao() << " - " << inv[i].getQuant() << " - " << inv[i].getPreco() << " - " << inv[i].getInvoiceAmount()  << endl;
        }
    }
    

    return 0;

}