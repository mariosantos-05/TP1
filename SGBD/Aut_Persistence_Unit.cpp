/*
#include "Aut_Persistence_Unit.h"

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
void ElementoResultado::setNomeColuna(const std::string& nomeColuna) {
        this->nomeColuna = nomeColuna;
}

void ElementoResultado::setValorColuna(const std::string& valorColuna){
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

Comando_Verificar_Conta::Comando_Verificar_Conta(const std::string& cpf, const std::string& senha) {
    comandoSQL = "SELECT * FROM Conta WHERE cpf = '" + cpf + "' AND senha = '" + senha + "'";
    std::cout << comandoSQL << "\n"; 
}

bool Comando_Verificar_Conta::contaExiste() {
    //clearListaResultado(); 
    executar();
    return !listaResultado.empty();
}
*/

#include "Aut_Persistence_Unit.h"

void TestComandoSQL::runTest() {
    try {
        executar();
        for (const auto& resultado : listaResultado) {
            cout << "Coluna: " << resultado.getNomeColuna() 
                 << ", Valor: " << resultado.getValorColuna() << endl;
        }
    } catch (const EErroPersistencia& e) {
        cerr << "Erro: " << e.what() << endl;
    }
}

bool TestComandoSQL::autenticar(const string& cpf, const string& senha) {
    //comandoSQL = "SELECT COUNT(*) FROM Conta WHERE cpf = '" + cpf + "' AND senha = '" + senha + "';";
    comandoSQL = "SELECT COUNT(*) FROM Conta WHERE cpf = '036.403.621-44' AND senha = '132465';";
    try {
        executar();
        if (!listaResultado.empty()) {
            const auto& resultado = listaResultado.front();
            return resultado.getValorColuna() == "1";
        }
    } catch (const EErroPersistencia& e) {
        cerr << "Erro: " << e.what() << endl;
    }
    return false;
}
