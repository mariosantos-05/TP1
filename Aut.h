#ifndef AUTHENTICATION_H
#define AUTHENTICATION_H

#include <string>
#include <list>
#include <iostream>
#include <sqlite3.h>

using namespace std;

class EErroPersistencia {
private:
    string mensagem;
public:
    EErroPersistencia(string mensagem) : mensagem(mensagem) {}
    string what() const { return mensagem ; }
};

class ElementoResultado {
private:
    string nomeColuna;
    string valorColuna;
public:
    void setNomeColuna(const string& nomeColuna) { this->nomeColuna = nomeColuna; }
    string getNomeColuna() const { return nomeColuna; }
    void setValorColuna(const string& valorColuna) { this->valorColuna = valorColuna; }
    string getValorColuna() const { return valorColuna; }
};

class ComandoSQL {
private:
    const char *nomeBancoDados;
    sqlite3 *bd;
    char *mensagem;
    int rc;
    void conectar() {
        rc = sqlite3_open(nomeBancoDados, &bd);
        if (rc != SQLITE_OK) throw EErroPersistencia("Erro na conexao ao banco de dados");
    }
    void desconectar() {
        rc = sqlite3_close(bd);
        if (rc != SQLITE_OK) throw EErroPersistencia("Erro na desconexao ao banco de dados");
    }
    static int callback(void *, int, char **, char **);

protected:
    static list<ElementoResultado> listaResultado;
    string comandoSQL;

public:
    ComandoSQL() : nomeBancoDados("Repository.db") {}
    void executar() {
        conectar();
        listaResultado.clear();
        rc = sqlite3_exec(bd, comandoSQL.c_str(), callback, 0, &mensagem);
        if (rc != SQLITE_OK) {
            sqlite3_free(mensagem);
            desconectar();
            throw EErroPersistencia("Erro na execucao do comando SQL");
        }
        desconectar();
    }
};

class TestComandoSQL : public ComandoSQL {
public:
    TestComandoSQL(const string& sqlCommand) { comandoSQL = sqlCommand; }
    bool autenticar(const string& cpf, const string& senha) {
        comandoSQL = "SELECT COUNT(*) FROM Conta WHERE cpf = '" + cpf + "' AND senha = '" + senha + "';";
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
};

class CPF {
private:
    string valor;
public:
    CPF(string valor) : valor(valor) {}
    string getValor() const { return valor; }
};

class Senha {
private:
    string valor;
public:
    Senha(string valor) : valor(valor) {}
    string getValor() const { return valor; }
};

class AutenticacaoService {
public:
    bool autenticar(CPF& cpf, Senha& senha) {
        TestComandoSQL comando("");
        return comando.autenticar(cpf.getValor(), senha.getValor());
    }
};

#endif
