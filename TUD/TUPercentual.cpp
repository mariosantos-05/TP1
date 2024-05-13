#include "TUPercentual.h"
#include "../Domains/Headers/Percentual.h"
#include <stdexcept>

void TUPercentual::setUp(){
    valor = new Percentual("");
    estado = SUCESSO;
}

void TUPercentual::tearDown(){
    delete valor;
}

void TUPercentual::testarCenariovalido(){
    try{
        valor->set(VALOR_VALIDO);
        if (valor->get() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(std::invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUPercentual::testarCenarioinvalido(){
    try{
        valor->set(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument &excecao){
        if (valor->get() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUPercentual::run(){
    setUp();
    testarCenariovalido();
    testarCenarioinvalido();
    tearDown();
    return estado;
}

