#include "TUCodigoPagamento.h"
#include "../Domains/Headers/CodigoPagamento.h"
#include <stdexcept>

void TUCodigoPagamento::setUp(){
    codigo = new CodigoPagamento("");
    estado = SUCESSO;
}

void TUCodigoPagamento::tearDown(){
    delete codigo;
}

void TUCodigoPagamento::testarCenariovalido(){
    try{
        codigo->setPaymentcode(VALOR_VALIDO);
        if (codigo->getPaycode() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(std::invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUCodigoPagamento::testarCenarioinvalido(){
    try{
        codigo->setPaymentcode(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument &excecao){
        if (codigo->getPaycode() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUCodigoPagamento::run(){
    setUp();
    testarCenariovalido();
    testarCenarioinvalido();
    tearDown();
    return estado;
}
