#ifndef TERRENO
#define TERRENO

#include "Imovel.h"

class Terreno : public Imovel{
    double area;
public:
    Terreno();
    Terreno(std::string nome, double valor, int tipo, std::string disponibilidade, 
                double area);
    virtual ~Terreno();

    void exibeAtributos() override;
    void lerAtributos() override;

    double get_area();

    void set_area(double area);
};

#endif