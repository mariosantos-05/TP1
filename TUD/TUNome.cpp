#include "TUNome.h"
#include "Nome.h"
#include <stdexcept>
#include <iostream>

void TUName::setUp(){
    codigo = new Name("");
    estado = SUCESSO;
}

void TUName::tearDown(){
    delete codigo;
}

void TUName::testarCenariovalido(){
    try{
        codigo->setName(VALOR_VALIDO);
        if (codigo->getName() != VALOR_VALIDO){
            estado = FALHA;
        }
    }
    catch(std::invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUName::testarCenarioinvalido(){
    try{
        codigo->setName(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument &excecao){
        if (codigo->getName() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUName::run(){
    setUp();
    testarCenariovalido();
    testarCenarioinvalido();
    tearDown();
    return estado;
}
