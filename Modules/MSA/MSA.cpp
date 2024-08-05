#include "MSA.h"
#include <iostream>

/*
bool AutenticacaoService::autenticar(CPF& cpf, Senha& senha) {
    try {
        Comando_Verificar_Conta cmd(cpf.getCPF(), senha.getSenha());
        bool existe = cmd.contaExiste();
        //ComandoSQL::clearListaResultado();  // Limpar resultados após uso
        return existe;
    } catch (EErroPersistencia& e) {
        std::cerr << "Erro ao autenticar: " << e.what() << std::endl;
        return false;
    }
}
*/




bool AutenticacaoService::autenticar(CPF& cpf, Senha& senha) {
    try {

    TestComandoSQL testAuth("");
    bool authResult = testAuth.autenticar("036.403.621-44", "132465");
    cout << "Authentication result: " << (authResult ? "Success" : "Failure") << endl;
    return authResult;

    } catch (EErroPersistencia& e) {

        std::cerr << "Erro ao autenticar: " << e.what() << std::endl;
        return false;

    }
}