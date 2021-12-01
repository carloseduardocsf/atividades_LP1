#include "Apartamento.h"

Apartamento::Apartamento(){
    area = 0;
    quartos = 0;
    andar = 0;
    valorCondominio = 0;
    vagasGaragem = 0;
}
Apartamento::Apartamento(std::string nome, double valor, int tipo, std::string disponibilidade,
                            double area, int quartos, int andar, double valorCondominio, int vagasGaragem) 
                            : Imovel(nome, valor, tipo, disponibilidade){
    this->area = area;
    this->quartos = quartos;
    this->andar = andar;
    this->valorCondominio = valorCondominio;
    this->vagasGaragem = vagasGaragem;
}
Apartamento::~Apartamento(){
    std::cout << "Deletando Apartamento" << std::endl;
}

void Apartamento::exibeAtributos(){
    //Apartamento para aluguel. 150m2 de área, 3 quartos, 12 andar(es), 300 de condomínio, 1 vaga(s) de garagem. R$ 1500.
    std::cout << "Apartamento para " << get_disponibilidade();
    std::cout << ". " << get_area();
    std::cout << "m2 de área, " << get_quartos();
    std::cout << " quartos, " << get_andar();
    std::cout << " andar(es), " << get_valorCondominio();
    std::cout << " de condomínio, " << get_vagasGaragem();
    std::cout << " vaga(s) de garagem. R$ " << get_valor();
    std::cout << "." << std::endl;
}
void Apartamento::lerAtributos(){
    double valor_ap;
    std::string disponibilidade_ap;
    double area_ap;
    int quartos_ap;
    int andar_ap;
    double valorCondominio_ap;
    int vagasGaragem_ap;

    std::cin >> valor_ap;
    std::cin.ignore();
    std::getline(std::cin, disponibilidade_ap);
    std::cin >> area_ap >> quartos_ap >> andar_ap >> valorCondominio_ap >> vagasGaragem_ap;

    set_nome("Apartamento");
    set_valor(valor_ap);
    set_tipo(2);
    set_disponibilidade(disponibilidade_ap);
    set_area(area_ap);
    set_quartos(quartos_ap);
    set_andar(andar_ap);
    set_valorCondominio(valorCondominio_ap);
    set_vagasGaragem(vagasGaragem_ap);
}

double Apartamento::get_area(){ return area; }
int Apartamento::get_quartos(){ return quartos; }
int Apartamento::get_andar(){ return andar; }
double Apartamento::get_valorCondominio(){ return valorCondominio; }
int Apartamento::get_vagasGaragem(){ return vagasGaragem; }

void Apartamento::set_area(double area){ this->area = area; }
void Apartamento::set_quartos(int quartos){ this->quartos = quartos; }
void Apartamento::set_andar(int andar){ this->andar = andar; }
void Apartamento::set_valorCondominio(double valorCondominio){ this->valorCondominio = valorCondominio; }
void Apartamento::set_vagasGaragem(int vagasGaragem){ this->vagasGaragem = vagasGaragem; }