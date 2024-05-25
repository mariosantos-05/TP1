#include "TUValorMonetario.h"
#include "../Domains/Headers/ValorMonetario.h"
#include <iostream>
#include <stdexcept>

void TUValorMonetario::setUp() {
    codigo = new ValorMonetario(0);
    estado = SUCESSO;
}

void TUValorMonetario::tearDown() {
    delete codigo;
}

void TUValorMonetario::testarCenarioValido() {

    try {
        codigo -> setValorMonetario(VALOR_VALIDO);
        if (codigo->getValorMonetario() != VALOR_VALIDO) {
            estado = FALHA;
        }
    } catch (std::invalid_argument &excecao) {estado = FALHA;}
}

void TUValorMonetario::testarCenarioInvalido() {

    try {
        codigo -> setValorMonetario(VALOR_INVALIDO);
        estado = FALHA;
    } catch (std::invalid_argument &excecao) {
        if (codigo->getValorMonetario() == VALOR_INVALIDO)
        estado = FALHA;
    }
}

int TUValorMonetario::run() {
    setUp();
    testarCenarioValido();
    testarCenarioInvalido();
    tearDown();
    return estado;
}
