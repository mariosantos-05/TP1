#include "Con_Persistence_Unit.h"

// Implementation for Comando_Criar_Conta
Comando_Criar_Conta::Comando_Criar_Conta(CPF& cpf, Senha& senha, Name& nome) {
        comandoSQL = "INSERT INTO Conta (cpf, senha, nome) VALUES ('" + cpf.getCPF() + "', '" + senha.getSenha() + "', '" + nome.getName() + "');";
}

// Implementation for Comando_Ler_Conta
Comando_Ler_Conta::Comando_Ler_Conta(CPF& cpf) {
        comandoSQL = "SELECT cpf, senha, nome FROM Conta WHERE cpf = '" + cpf.getCPF() + "';";
}

Conta Comando_Ler_Conta::getResultado() {
        ElementoResultado resultado = listaResultado.back();
        listaResultado.pop_back();
        std::string cpf = resultado.getValorColuna();
        std::string senha = resultado.getValorColuna();
        std::string nome = resultado.getValorColuna();
        return Conta(nome, cpf, senha);
}

// Implementation for Comando_Atualizar_Conta
Comando_Atualizar_Conta::Comando_Atualizar_Conta(CPF& cpf, Senha& senha, Name& nome) {
        comandoSQL = "UPDATE Conta SET senha = '" + senha.getSenha() + "', nome = '" + nome.getName() + "' WHERE cpf = '" + cpf.getCPF() + "';";
}

// Implementation for Comando_Excluir_Conta
Comando_Excluir_Conta::Comando_Excluir_Conta(CPF& cpf) {
        comandoSQL = "DELETE FROM Conta WHERE cpf = '" + cpf.getCPF() + "';";
}
