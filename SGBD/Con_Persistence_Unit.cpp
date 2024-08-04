#include "Con_Persistence_Unit.h"

// Atributo estático.
std::list<ElementoResultado> ComandoSQL::listaResultado;

// Implementações de métodos da classe ErroPersistencia.
EErroPersistencia::EErroPersistencia(std::string mensagem) {
        this->mensagem = mensagem;
}

std::string EErroPersistencia::what() {
        return mensagem;
}

// Implementações de métodos da classe ElementoResultado.
void ElementoResultado::setNomeColuna(std::string& nomeColuna) {
        this->nomeColuna = nomeColuna;
}

void ElementoResultado::setValorColuna(std::string& valorColuna){
        this->valorColuna = valorColuna;
}

// Implementações de métodos da classe ComandoSQL.
void ComandoSQL::conectar() {
        rc = sqlite3_open(nomeBancoDados, &bd);
        if(rc != SQLITE_OK)
                throw EErroPersistencia("Erro na conexao ao banco de dados");
}

void ComandoSQL::desconectar() {
        rc = sqlite3_close(bd);
        if(rc != SQLITE_OK)
                throw EErroPersistencia("Erro na desconexao ao banco de dados");
}

void ComandoSQL::executar() {
        conectar();
        rc = sqlite3_exec(bd, comandoSQL.c_str(), callback, 0, &mensagem);
        if(rc != SQLITE_OK){
                sqlite3_free(mensagem);
                desconectar();
                throw EErroPersistencia("Erro na execucao do comando SQL");
        }
        desconectar();
}

int ComandoSQL::callback(void *NotUsed, int argc, char **valorColuna, char **nomeColuna){
        NotUsed = 0;
        ElementoResultado elemento;
        for(int i = 0; i < argc; i++) {
                elemento.setNomeColuna(nomeColuna[i]);
                elemento.setValorColuna(valorColuna[i] ? valorColuna[i] : "NULL");
                listaResultado.push_front(elemento);
        }
        return 0;
}

std::list<ElementoResultado>& ComandoSQL::getListaResultado() {
        return listaResultado;
}

void ComandoSQL::clearListaResultado() {
        listaResultado.clear();
}

//--------------------------------------------------------------------------



Comando_Criar_Conta::Comando_Criar_Conta(CPF& cpf, Senha& senha, Name& nome) {
        comandoSQL = "INSERT INTO Conta (cpf, senha, nome) VALUES ('" + cpf.getCPF() + "', '" + senha.getSenha() + "', '" + nome.getName() + "');";
}

Comando_Ler_Conta::Comando_Ler_Conta(CPF& cpf) {
    comandoSQL = "SELECT * FROM Conta WHERE cpf = '" + cpf.getCPF() + "';";
}

Conta Comando_Ler_Conta::getResultado() {
        ElementoResultado resultado = ComandoSQL::getListaResultado().back();
        ComandoSQL::getListaResultado().pop_back();
        CPF cpf(resultado.getValorColuna());
        Senha senha(resultado.getValorColuna());
        Name nome(resultado.getValorColuna());
        //return Conta(cpf, senha, nome);
}


Comando_Atualizar_Conta::Comando_Atualizar_Conta(CPF& cpf, Senha& senha, Name& nome) {
        comandoSQL = "UPDATE Conta SET senha = '" + senha.getSenha() + "', nome = '" + nome.getName() + "' WHERE cpf = '" + cpf.getCPF() + "';";
}


Comando_Excluir_Conta::Comando_Excluir_Conta(CPF& cpf) {
        comandoSQL = "DELETE FROM Conta WHERE cpf = '" + cpf.getCPF() + "';";
}







