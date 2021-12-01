#ifndef VACINA
#define VACINA

#include "Insumo.h"

class Vacina : public Insumo{
    int tipo;
    int quantDoses;
    int intervalo;
public: 
    Vacina();
    Vacina(std::string nome, int quantidade, int valorUnitario, std::string dtVencimento, 
            std::string nomeFabricante, int tipoInsumo, int tipo, int quantDoses, int intervalo);
    virtual ~Vacina();

    int get_tipo();
    int get_quantDoses();
    int get_intervalo();

    void set_tipo(int tipo);
    void set_quantDoses(int quantDoses);
    void set_intervalo(int intervalo);    
};

#endif