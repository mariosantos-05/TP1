#include "MSA.h"
#include <iostream>

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
