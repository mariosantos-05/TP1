#include "Comandos.h"
// Atributo estático.

std::list<ElementoResultado> ComandoSQL::listaResultado;

//---------------------------------------------------------------------------
// Implementações de métodos da classe ErroPersistencia.

// Implementações de métodos da classe ErroPersistencia.

EErroPersistencia::EErroPersistencia(string mensagem) {
    this->mensagem = mensagem;
}

string EErroPersistencia::what() const {  // Marked as const
    return mensagem;
}


//---------------------------------------------------------------------------
// Implementações de métodos da classe ElementoResultado.

void ElementoResultado::setNomeColuna(const string& nomeColuna) {
        this->nomeColuna = nomeColuna;
}

void ElementoResultado::setValorColuna(const string& valorColuna){
        this->valorColuna = valorColuna;
}

//---------------------------------------------------------------------------
// Implementações de métodos da classe ComandoSQL.

void ComandoSQL::conectar() {
        rc = sqlite3_open(nomeBancoDados, &bd);
        if( rc != SQLITE_OK )
            throw EErroPersistencia("Erro na conexao ao banco de dados");
}

void ComandoSQL::desconectar() {
        rc =  sqlite3_close(bd);
        if( rc != SQLITE_OK )
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
        NotUsed=0;
        ElementoResultado elemento;
        int i;
        for(i=0; i<argc; i++){
            elemento.setNomeColuna(nomeColuna[i]);
            elemento.setValorColuna(valorColuna[i] ? valorColuna[i]: "NULL");
            listaResultado.push_front(elemento);
        }
        return 0;
}