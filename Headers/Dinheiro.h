#ifndef DINHEIRO_H
#define DINHEIRO_H
#include <string>
#include <iostream>

class Valor
{
    private:
        float valor;
        bool validateValor( float valor);

    public:
        Valor(float valor);
        float getValor();
        void setValor(float valor);
};

#endif