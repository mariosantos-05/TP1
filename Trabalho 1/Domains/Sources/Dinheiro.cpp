#include "../Headers/Dinheiro.h"


void Dinheiro::validateDinheiro(float valor) 
{
    if (valor < 0 || valor > 1000000) 
    {
        throw std::invalid_argument("Argumento inválido. Certifique-se de que valor está no intervalo suportado");   
    }
}

Dinheiro::Dinheiro(float valor) {
    validateDinheiro(valor);
    this->valor = valor;
}

float Dinheiro::getDinheiro() {
    return valor;
}

void Dinheiro::setDinheiro(float valor){
    validateDinheiro(valor);
    this->valor = valor;
}

