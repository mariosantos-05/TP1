#include "TUSenha.h"
#include "../Domains/Headers/Senha.h" 
#include <stdexcept>

void TUSenha::setUp(){
    codigo = new Senha("132476");
    estado = SUCESSO;
}

void TUSenha::tearDown(){
    delete codigo;
}

void TUSenha::testarCenariovalido(){
    try{
        codigo->setSenha(VALOR_VALIDO);
        if (codigo->getSenha() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(std::invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUSenha::testarCenarioinvalido(){
    try{
        codigo->setSenha(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument &excecao){
        if (codigo->getSenha() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUSenha::run(){
    setUp();
    testarCenariovalido();
    testarCenarioinvalido();
    tearDown();
    return estado;
}
