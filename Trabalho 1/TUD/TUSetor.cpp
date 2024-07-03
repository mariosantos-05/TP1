#include "TUSetor.h"
#include <stdexcept>

void TUSetor::setUp(){
    codigo = new Setor("Agricultura");
    estado = SUCESSO;
}

void TUSetor::tearDown(){
    delete codigo;
}

void TUSetor::testarCenariovalido(){
    try{
        codigo->setSetor(VALOR_VALIDO);
        if (codigo->getSetor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(std::invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUSetor::testarCenarioinvalido(){
    try{
        codigo->setSetor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument &excecao){
        if (codigo->getSetor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUSetor::run(){
    setUp();
    testarCenariovalido();
    testarCenarioinvalido();
    tearDown();
    return estado;
}
