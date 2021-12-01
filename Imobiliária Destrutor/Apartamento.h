#ifndef APARTAMENTO
#define APARTAMENTO

#include "Imovel.h"

class Apartamento : public Imovel{
    double area;
    int quartos;
    int andar;
    double valorCondominio;
    int vagasGaragem;
public:
    Apartamento();
    Apartamento(std::string nome, double valor, int tipo, std::string disponibilidade,
                    double area, int quartos, int andar, double valorCondominio, int vagasGaragem);
    virtual ~Apartamento();

    void exibeAtributos() override;
    void lerAtributos() override;

    double get_area();
    int get_quartos();
    int get_andar();
    double get_valorCondominio();
    int get_vagasGaragem();

    void set_area(double area);
    void set_quartos(int quartos);
    void set_andar(int andar);
    void set_valorCondominio(double valorCondominio);
    void set_vagasGaragem(int vagasGaragem);
};

#endif