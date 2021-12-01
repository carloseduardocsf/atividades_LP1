#ifndef LOCAL
#define LOCAL

#include "Insumo.h"

#include <vector>

class Local{
    std::string nome;
    int tipo;
    Insumo *InsumorArr[3];
    std::vector <Insumo*> InsumosVec;
public:
    Local();
    Local(std::string nome, int tipo);
    virtual ~Local();

    void addInsumoArr(Insumo *in, int index);
    void addInsumoVec(Insumo *in);

    std::string get_nome();
    int get_tipo();

    void set_nome(std::string nome);
    void set_tipo(int tipo);
};

#endif