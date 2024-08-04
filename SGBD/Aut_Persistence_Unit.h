#ifndef AUT_PERSISTENCE_UNIT_H
#define AUT_PERSISTENCE_UNIT_H

#include <string>
#include "../Entities/Headers/Conta.h"
#include "../Entities/Headers/Titulo.h"
#include "../Entities/Headers/Pagamento.h"
#include <list>
#include <string>
#include <stdio.h>
#include <sqlite3.h>

class EErroPersistencia {
private:
        std::string mensagem;
public:
        EErroPersistencia(std::string);
        std::string what();
};

class ElementoResultado {
private:
        std::string nomeColuna;
        std::string valorColuna;
public:
        void setNomeColuna(const std::string&);
        std::string getNomeColuna() const;
        void setValorColuna(const std::string&);
        std::string getValorColuna() const;
};

class ComandoSQL {
private:
        const char *nomeBancoDados;
        sqlite3 *bd;
        char *mensagem;
        int rc;
        void conectar();
        void desconectar();
        static int callback(void *, int, char **, char **);

protected:
        static std::list<ElementoResultado> listaResultado;
        std::string comandoSQL;
public:
        ComandoSQL() {
            nomeBancoDados = "repository.db";  // Nome do banco de dados.
        }
        void executar();
        static std::list<ElementoResultado>& getListaResultado();  // Add this line
        static void clearListaResultado();  // Add this line
};

// Classe para verificar a existência de uma conta
class Comando_Verificar_Conta : public ComandoSQL {
public:
    Comando_Verificar_Conta(const std::string& cpf, const std::string& senha);
    bool contaExiste();
};

#endif 
