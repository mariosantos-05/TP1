#include "../Headers/Dinheiro.h"


void Valor::validateValor(float valor) 
{
    if (valor < 0 || valor > 1000000) 
    {
        throw std::invalid_argument("Argumento inválido. Certifique-se de que valor está no intervalo suportado");   
    }
}

Valor::Valor(float valor) {
    validateValor(valor);
    this->valor = valor;
}

float Valor::getValor() {
    return valor;
}

void Valor::setValor(float valor){
    validateValor(valor);
    this->valor = valor;
}

