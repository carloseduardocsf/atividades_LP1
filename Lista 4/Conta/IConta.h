#ifndef ICONTA
#define ICONTA

#include <iostream>
#include <string>

class IConta{
public:
    virtual void sacar(double valor);
    virtual void depositar(double valor);
    virtual float saldoTotalDisponivel();
};

#endif