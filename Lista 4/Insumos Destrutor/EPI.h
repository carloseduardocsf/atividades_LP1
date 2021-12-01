#ifndef EPI_h
#define EPI_h

#include "Insumo.h"

class EPI : public Insumo{
    int tipo;
    std::string descricao;
public: 
    EPI();
    EPI(std::string nome, int quantidade, int valorUnitario, std::string dtVencimento,
        std::string nomeFabricante, int tipoInsumo, int tipo, std::string descricao);
    virtual ~EPI();

    int get_tipo();
    std::string get_descricao();

    void set_tipo(int tipo);
    void set_descricao(std::string descricao);
};

#endif