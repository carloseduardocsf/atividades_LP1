#include <iostream>
#include <string>

using namespace std;


class Pagamento{
    public:
        Pagamento();

        //setters
        void setvalorPagamento(float valorPagamento);
        void setnomeDoFuncionario(string nomeDoFuncionario);
        //getters
        float getvalorPagamento();
        string getnomeDoFuncionario();

    private:
        float valorPagamento;
        string nomeDoFuncionario;
};

Pagamento::Pagamento(){
    valorPagamento = 0;
}

void Pagamento::setvalorPagamento(float valorPagamento){
    this -> valorPagamento = valorPagamento;
}
void Pagamento::setnomeDoFuncionario(string nomeDoFuncionario){
    this -> nomeDoFuncionario = nomeDoFuncionario;
}
float Pagamento::getvalorPagamento(){
    return valorPagamento;
}
string Pagamento::getnomeDoFuncionario(){
    return nomeDoFuncionario;
}

class ControleDePagamentos{
    public:
        ControleDePagamentos();

        void setPagamento(Pagamento p, int index);
        Pagamento getPagamento(int pos);
        float calculaTotalDePagamentos();
        int getIndexFuncionario(string nomeFuncionario);

    private:
        Pagamento pagamentos[100];
};

ControleDePagamentos::ControleDePagamentos(){

}
void ControleDePagamentos::setPagamento(Pagamento p, int index){
    pagamentos[index] = p;
}
Pagamento ControleDePagamentos::getPagamento(int pos){
    return pagamentos[pos];
}
float ControleDePagamentos::calculaTotalDePagamentos(){
    float total = 0;
    for(int i = 0; i < 100; i++){
        total += getPagamento(i).getvalorPagamento();
    }
    return total;
}
int ControleDePagamentos::getIndexFuncionario(string nomeFuncionario){
    for(int i = 0; i < 100; i++){
        if(pagamentos[i].getnomeDoFuncionario().find(nomeFuncionario) != string::npos){
            return i;
        }
    }
    return -1;
}


int main(){

    int n, i,valor;
    string nome;

    ControleDePagamentos cp;

    cin >> n;

    Pagamento p;

    for(i = 0; i < n; i++){
        cin >> valor;
        getchar();
        getline(cin, nome);
        p.setvalorPagamento(valor);
        p.setnomeDoFuncionario(nome);
        cp.setPagamento(p, i);
    }

    getline(cin, nome);
    i = cp.getIndexFuncionario(nome);
    if(i != -1){
        cout << cp.getPagamento(i).getnomeDoFuncionario() << ": R$ " << cp.getPagamento(i).getvalorPagamento() << endl;
        cout << "Total: R$ " << cp.calculaTotalDePagamentos() << endl;
    }else{
        cout << nome << " não encontrado(a)." << endl;
        cout << "Total: R$ " << cp.calculaTotalDePagamentos() << endl;
    }


    return 0;

}
