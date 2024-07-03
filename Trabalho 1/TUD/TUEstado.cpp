#include "TUEstado.h"
#include <stdexcept>

void TUEstado::setUp(){
    codigo = new Estado("Previsto");
    estado = SUCESSO;
}

void TUEstado::tearDown(){
    delete codigo;
}

void TUEstado::testarCenariovalido(){
    try{
        codigo->setEstado(VALOR_VALIDO);
        if (codigo->getEstado() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(std::invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUEstado::testarCenarioinvalido(){
    try{
        codigo->setEstado(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument &excecao){
        if (codigo->getEstado() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUEstado::run(){
    setUp();
    testarCenariovalido();
    testarCenarioinvalido();
    tearDown();
    return estado;
}
