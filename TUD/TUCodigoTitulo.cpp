#include "TUCodigoTitulo.h"
#include "../Domains/Headers/CodigoTitulo.h"
#include <stdexcept>

void TUCodigoTitulo::setUp(){
    codigo = new CodigoTitulo("");
    estado = SUCESSO;
}

void TUCodigoTitulo::tearDown(){
    delete codigo;
}

void TUCodigoTitulo::testarCenariovalido(){
    try{
        codigo->setTitlecode(VALOR_VALIDO);
        if (codigo->getTitlecode() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(std::invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUCodigoTitulo::testarCenarioinvalido(){
    try{
        codigo->setTitlecode(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument &excecao){
        if (codigo->getTitlecode() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUCodigoTitulo::run(){
    setUp();
    testarCenariovalido();
    testarCenarioinvalido();
    tearDown();
    return estado;
}
