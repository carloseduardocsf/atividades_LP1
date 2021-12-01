#include "Imobiliaria.h"

Imobiliaria::Imobiliaria(){ }
Imobiliaria::~Imobiliaria(){
    std::cout << "Deletando Imobiliária" << std::endl;

    for (auto&& it : imoveis)
    {
        delete it;
    }
}

void Imobiliaria::addImovel(Imovel* imovel){
    this->imoveis.push_back(imovel);
}
void Imobiliaria::buscaImovel(std::string busca){
    for(int i = 0; i < imoveis.size(); i++){
        if(imoveis[i]->get_nome() == busca || imoveis[i]->get_disponibilidade() == busca){
            imoveis[i]->exibeAtributos();
        }
    }
}