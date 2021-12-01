#ifndef MEDICAMENTO
#define MEDICAMENTO

#include "Insumo.h"

class Medicamento : public Insumo{
    std::string dosagem;
    std::string administracao;
    std::string disponibilizacao;
public:
    Medicamento();
    Medicamento(std::string nome, int quantidade, int valorUnitario, std::string dtVencimento,
        std::string nomeFabricante, int tipoInsumo, std::string dosagem, std::string administracao, std::string disponibilizacao);
    virtual ~Medicamento();
    
    std::string get_dosagem();
    std::string get_administracao();
    std::string get_disponibilizacao();

    void set_dosagem(std::string dosagem);
    void set_administracao(std::string administracao);
    void set_disponibilizacao(std::string disponibilizacao);
};

#endif