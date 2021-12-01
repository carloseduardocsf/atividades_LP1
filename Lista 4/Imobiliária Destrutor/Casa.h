#ifndef CASA
#define CASA

#include "Imovel.h"

class Casa : public Imovel{
    int pavimentos;
    int quartos;
    double areaTerreno;
    double areaConstruida;
public:
    Casa();
    Casa(std::string nome, double valor, int tipo, std::string disponibilidade,
            int pavimentos, int quartos, double areaTerreno, double areaConstruida);
    virtual ~Casa();

    void exibeAtributos() override;
    void lerAtributos() override;

    int get_pavimentos();
    int get_quartos();
    double get_areaTerreno();
    double get_areaConstruida();

    void set_pavimentos(int pavimentos);
    void set_quartos(int quartos);
    void set_areaTerreno(double areaTerreno);
    void set_areaConstruida(double areaConstruida);
};

#endif