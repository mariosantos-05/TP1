#include "TUConta.h"

void TUConta::setUp() {
    conta = new Conta(NOME_VALIDO, CPF_VALIDO, SENHA_VALIDA);
    estado = SUCESSO;
}

void TUConta::tearDown() {
    delete conta;
}

void TUConta::testarCenarioValido() {
    if (conta->getNome() != NOME_VALIDO) {
        estado = FALHA;
    }
    if (conta->getSenha() != SENHA_VALIDA) {
        estado = FALHA;
    }
    if (conta->getCodigocpf() != CPF_VALIDO) {
        estado = FALHA;
    }

    // Testar setters
    conta->setNome("Novo Nome");
    if (conta->getNome() != "Novo Nome") {
        estado = FALHA;
    }

    conta->setSenha("NovaSenha@123");
    if (conta->getSenha() != "NovaSenha@123") {
        estado = FALHA;
    }

    conta->setCodigocpf("09876543211");
    if (conta->getCodigocpf() != "09876543211") {
        estado = FALHA;
    }
}

int TUConta::run() {
    setUp();
    testarCenarioValido();
    tearDown();
    return estado;
}
