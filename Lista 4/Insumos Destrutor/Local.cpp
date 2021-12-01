#include "Local.h"

Local::Local(){
    nome = "";
    tipo = 0;
}
Local::Local(std::string nome, int tipo){
    this->nome = nome;
    this->tipo = tipo;
}
Local::~Local(){
    std::cout << "Deletando Local" << std::endl;

    for (int i = 0; i < 3; i++)
    {
        delete InsumorArr[i];
    }

    for (auto&& it : InsumosVec)
    {
        delete it;
    }
}

void Local::addInsumoArr(Insumo *in, int index){
    InsumorArr[index] = in;
}
void Local::addInsumoVec(Insumo *in){
    this->InsumosVec.push_back(in);
}

std::string Local::get_nome(){ return nome; }
int Local::get_tipo(){ return tipo; }

void Local::set_nome(std::string nome){ this->nome = nome; }
void Local::set_tipo(int tipo){ this->tipo = tipo; }