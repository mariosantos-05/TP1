#include "../Headers/Dinheiro.h"


bool Valor::validateValor(float valor)
{
    if (valor < 0 && valor > 1000000) {return false;}
    return true;
}

Valor::Valor(float valor) {
    this->valor = valor;
}

float Valor::getValor() {
    return valor;
}

void Valor::setValor(float valor){
    if(validateValor(valor)){
        this->valor = valor;
    }
    else{ std::cout << "Valor Inválido" << std::endl;}
}

