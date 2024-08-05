#include "../Modules/MSC/MSC.h"

#include <stdexcept>
#include <iostream>
#include <cstdlib>

using namespace std;




bool ContaService::criar(CPF cpf, Senha senha, Name nome) {
    try {
        Comando_Criar_Conta cmd(cpf, senha, nome);
        cmd.executar();
        return true;
    } catch (EErroPersistencia& e) {
        std::cerr << "Erro ao criar conta: " << e.what() << std::endl;
        return false;
    }
}

Conta ContaService::ler(CPF cpf) {
    try {
        Comando_Ler_Conta cmd(cpf);
        cmd.executar();
        Conta resultado = cmd.getResultado();
        //ComandoSQL::clearListaResultado();  // Limpa os resultados após o uso
        return resultado;
    } catch (EErroPersistencia& e) {
        std::cerr << "Erro ao ler conta: " << e.what() << std::endl;
        throw; // Lança a exceção novamente após o log
    }
}

void ContaService::atualizar(CPF cpf, Senha senha, Name nome) {
    try {
        Comando_Atualizar_Conta cmd(cpf, senha, nome);
        cmd.executar();
    } catch (EErroPersistencia& e) {
        std::cerr << "Erro ao atualizar conta: " << e.what() << std::endl;
    }
}

void ContaService::deletar(CPF* cpf) {
    try {
        Comando_Excluir_Conta cmd(*cpf);
        cmd.executar();
    } catch (EErroPersistencia& e) {
        std::cerr << "Erro ao excluir conta: " << e.what() << std::endl;
    }
}

