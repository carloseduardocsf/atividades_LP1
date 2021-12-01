#include "Insumo.h"
#include "Insumo.cpp"
#include "Vacina.h"
#include "Vacina.cpp"
#include "Medicamento.h"
#include "Medicamento.cpp"
#include "EPI.h"
#include "EPI.cpp"
#include "Local.h"
#include "Local.cpp"

#include <iostream>
#include <string>

using namespace std;

int main(){
    string nome;
    int quantidade;
    int valorUnitario;
    string dtVencimento;
    string nomeFabricante;
    int tipoInsumo;

    int tipo;
    int quantDoses;
    int intervalo;

    string dosagem;
    string administracao;
    string disponibilizacao;

    //int tipo;
    string descricao;

    Local local;

    getline(cin, nome);
    cin >> quantidade >> valorUnitario;
    cin.ignore();
    getline(cin, dtVencimento);
    getline(cin, nomeFabricante);
    getline(cin, nome);
    getline(cin, nome);
    cin >> quantDoses >> intervalo;
    cin.ignore();
    local.addInsumoArr( new Vacina(nome, quantidade, valorUnitario, dtVencimento,
                           nomeFabricante, tipoInsumo, tipo, quantDoses, intervalo), 0);
    local.addInsumoVec( new Vacina(nome, quantidade, valorUnitario, dtVencimento,
                           nomeFabricante, tipoInsumo, tipo, quantDoses, intervalo));


    getline(cin, nome);
    cin >> quantidade >> valorUnitario;
    cin.ignore();
    getline(cin, dtVencimento);
    getline(cin, nomeFabricante);
    getline(cin, nome);
    getline(cin, dosagem);
    getline(cin, administracao);
    getline(cin, disponibilizacao);
    local.addInsumoArr( new Medicamento(nome, quantidade, valorUnitario, dtVencimento,
                           nomeFabricante, tipoInsumo, dosagem, administracao, disponibilizacao), 1);
    local.addInsumoVec( new Medicamento(nome, quantidade, valorUnitario, dtVencimento,
                           nomeFabricante, tipoInsumo, dosagem, administracao, disponibilizacao));


    getline(cin, nome);
    cin >> quantidade >> valorUnitario;
    cin.ignore();
    getline(cin, dtVencimento);
    getline(cin, nomeFabricante);
    getline(cin, nome);
    getline(cin, descricao);
    local.addInsumoArr( new EPI(nome, quantidade, valorUnitario, dtVencimento,
                           nomeFabricante, tipoInsumo, tipo, descricao), 2);
    local.addInsumoVec( new EPI(nome, quantidade, valorUnitario, dtVencimento,
                           nomeFabricante, tipoInsumo, tipo, descricao));

    return 0;
}