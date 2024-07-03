#include "TUCPF.h"
#include "../Domains/Headers/CPF.h"
#include <stdexcept>

void TUCPF::setUp(){
    codigo = new CPF("");
    estado = SUCESSO;
}

void TUCPF::tearDown(){
    delete codigo;
}

void TUCPF::testarCenariovalido(){
    try{
        codigo->setCPF(VALOR_VALIDO);
        if (codigo->getCPF() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(std::invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUCPF::testarCenarioinvalido(){
    try{
        codigo->setCPF(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument &excecao){
        if (codigo->getCPF() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUCPF::run(){
    setUp();
    testarCenariovalido();
    testarCenarioinvalido();
    tearDown();
    return estado;
}
