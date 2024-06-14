#include "TUConta.h"
#include "../Entities/Headers/Conta.h"
#include <stdexcept>


const std::string NOME_VALIDO = "Daniel Campos";
const std::string SENHA_VALIDO = "senhateste321";
const std::string CPF_VALIDO = "081.772.431-88";

void TUConta::setUp() {
    conta = new Conta(
        NOME_VALIDO,
        SENHA_VALIDO,
        CPF_VALIDO
    );
    estado = SUCESSO;
}

void TUConta::tearDown() {
    delete conta;
}

void TUConta::testarCenarioValido() {

    conta->setNome(NOME_VALIDO);
    if(conta->getNome() != NOME_VALIDO)
        estado = FALHA;

    conta->setCodigocpf(CPF_VALIDO);
    if(conta->getCodigocpf() != CPF_VALIDO)
        estado = FALHA; 

    conta->setSenha(SENHA_VALIDO);
    if(conta->getSenha() != SENHA_VALIDO)
        estado = FALHA;

}

int TUConta::run() {
    setUp();
    testarCenarioValido();
    tearDown();
    return estado;
}
