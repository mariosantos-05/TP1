#include "../Headers/ValorMonetario.h"


void ValorMonetario::validateValorMonetario(float valor) 
{
    if (valor < 0 || valor > 1000000) 
    {
        throw std::invalid_argument("Argumento inválido. Certifique-se de que valor está no intervalo suportado");   
    }
}

ValorMonetario::ValorMonetario(float valor) {
    validateValorMonetario(valor);
    this->valor = valor;
}

float ValorMonetario::getValorMonetario() {
    return valor;
}

void ValorMonetario::setValorMonetario(float valor){
    validateValorMonetario(valor);
    this->valor = valor;
}

