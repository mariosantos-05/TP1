#include "TUData.h"
#include "../Domains/Headers/Data.h"
#include <iostream>
#include <stdexcept>

void TUData::setUp() {
    codigo = new Data("01-01-2000");
    estado = SUCESSO;
}

void TUData::tearDown() {
    delete codigo;
}

void TUData::testarCenarioValido() {

    try {
        codigo -> setData(VALOR_VALIDO);
        if (codigo->getData() != VALOR_VALIDO) {
            estado = FALHA;
        }
    } catch (std::invalid_argument &excecao) {estado = FALHA;}
}

void TUData::testarCenarioInvalido() {

    try {
        codigo -> setData(VALOR_INVALIDO);
        estado = FALHA;
    } catch (std::invalid_argument &excecao) {
        if (codigo->getData() == VALOR_INVALIDO)
        estado = FALHA;
    }
}

int TUData::run() {
    setUp();
    testarCenarioValido();
    testarCenarioInvalido();
    tearDown();
    return estado;
}
