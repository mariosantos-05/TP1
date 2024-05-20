#include "TUDinheiro.h"
#include "../Domains/Headers/Dinheiro.h"
#include <iostream>
#include <stdexcept>

void TUDinheiro::setUp() {
    codigo = new Valor(0);
    estado = SUCESSO;
}

void TUDinheiro::tearDown() {
    delete codigo;
}

void TUDinheiro::testarCenarioValido() {

    try {
        codigo -> setValor(VALOR_VALIDO);
        if (codigo->getValor() != VALOR_VALIDO) {
            estado = FALHA;
        }
    } catch (std::invalid_argument &excecao) {estado = FALHA;}
}

void TUDinheiro::testarCenarioInvalido() {

    try {
        codigo -> setValor(VALOR_INVALIDO);
        estado = FALHA;
    } catch (std::invalid_argument &excecao) {
        if (codigo->getValor() == VALOR_INVALIDO)
        estado = FALHA;
    }
}

int TUDinheiro::run() {
    setUp();
    testarCenarioValido();
    testarCenarioInvalido();
    tearDown();
    return estado;
}
