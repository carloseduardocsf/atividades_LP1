#ifndef IMOBILIARIA
#define IMOBILIARIA

#include "Imovel.h"
#include <vector>

class Imobiliaria{
    std::vector<Imovel*> imoveis;
public:
    Imobiliaria();
    virtual ~Imobiliaria();

    void addImovel(Imovel* imovel);
    void buscaImovel(std::string busca);
};

#endif