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
        ComandoSQL::clearListaResultado();  // Limpa os resultados após o uso
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

void ContaService::setCntrISConta(ISConta* isConta) {
    this->isConta = isConta;
}

class Comando_Criar_Conta : public ComandoSQL {
public:
    Comando_Criar_Conta(const CPF& cpf, const Senha& senha, const Name& nome) {
        comandoSQL = "INSERT INTO Conta (cpf, senha, nome) VALUES ('" + cpf.getValor() + "', '" + senha.getValor() + "', '" + nome.getValor() + "');";
    }
};

class Comando_Ler_Conta : public ComandoSQL {
public:
    Comando_Ler_Conta(const CPF& cpf) {
        comandoSQL = "SELECT * FROM Conta WHERE cpf = '" + cpf.getValor() + "';";
    }

    Conta getResultado() {
        ElementoResultado resultado = ComandoSQL::getListaResultado().back();
        ComandoSQL::getListaResultado().pop_back();
        CPF cpf(resultado.getValorColuna());
        Senha senha(resultado.getValorColuna());
        Name nome(resultado.getValorColuna());
        return Conta(cpf, senha, nome);
    }
};

class Comando_Atualizar_Conta : public ComandoSQL {
public:
    Comando_Atualizar_Conta(const CPF& cpf, const Senha& senha, const Name& nome) {
        comandoSQL = "UPDATE Conta SET senha = '" + senha.getValor() + "', nome = '" + nome.getValor() + "' WHERE cpf = '" + cpf.getValor() + "';";
    }
};

class Comando_Excluir_Conta : public ComandoSQL {
public:
    Comando_Excluir_Conta(const CPF& cpf) {
        comandoSQL = "DELETE FROM Conta WHERE cpf = '" + cpf.getValor() + "';";
    }
};






