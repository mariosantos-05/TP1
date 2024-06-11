#include "TUDinheiro.h"
#include "../Domains/Headers/Dinheiro.h"
#include <stdexcept>

void TUDinheiro::setUp() {
    codigo = new Dinheiro(0);
    estado = SUCESSO;
}

void TUDinheiro::tearDown() {
    delete codigo;
}

void TUDinheiro::testarCenarioValido() {

    try {
        codigo -> setDinheiro(VALOR_VALIDO);
        if (codigo->getDinheiro() != VALOR_VALIDO) {
            estado = FALHA;
        }
    } catch (std::invalid_argument &excecao) {estado = FALHA;}
}

void TUDinheiro::testarCenarioInvalido() {

    try {
        codigo -> setDinheiro(VALOR_INVALIDO);
        estado = FALHA;
    } catch (std::invalid_argument &excecao) {
        if (codigo->getDinheiro() == VALOR_INVALIDO)
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
