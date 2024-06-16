#include "TUConta.h"
#include "../Entities/Headers/Conta.h"
#include <string>
#include <stdexcept>

void TUConta::setUp() {
    conta = new Conta("Mario Santos", "039.347.231-84", "241357");
    estado = SUCESSO;
}

void TUConta::tearDown() {
    delete conta;
}

void TUConta::testarCenarioValido() {
    conta->setNome(NOME_VALIDO);
    if (conta->getNome() != NOME_VALIDO) {
        estado = FALHA;
    }

    conta->setCodigocpf(CPF_VALIDO);
    if (conta->getCodigocpf() != CPF_VALIDO) {
        estado = FALHA;
    }

    conta->setSenha(SENHA_VALIDA);
    if (conta->getSenha() != SENHA_VALIDA) {
        estado = FALHA;
    }
}

int TUConta::run() {
    setUp();
    testarCenarioValido();
    tearDown();
    return estado;
}
