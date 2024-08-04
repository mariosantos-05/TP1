#ifndef CON_PERSISTENCE_UNIT_H
#define CON_PERSISTENCE_UNIT_H

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
        void setNomeColuna( std::string&);
        std::string getNomeColuna() ;
        void setValorColuna( std::string&);
        std::string getValorColuna() ;
};

class ComandoSQL {
private:
         char *nomeBancoDados;
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
            nomeBancoDados = "../SGBD/repository.db";  // Nome do banco de dados.
        }
        void executar();
        static std::list<ElementoResultado>& getListaResultado();  // Add this line
        static void clearListaResultado();  // Add this line
};




class Comando_Criar_Conta : public ComandoSQL {
public:
    Comando_Criar_Conta( CPF& cpf,  Senha& senha,  Name& nome);
};

class Comando_Ler_Conta : public ComandoSQL {
public:
    Comando_Ler_Conta(CPF& cpf);
    Conta getResultado();
};

class Comando_Atualizar_Conta : public ComandoSQL {
public:
    Comando_Atualizar_Conta( CPF& cpf,  Senha& senha,  Name& nome);
};

class Comando_Excluir_Conta : public ComandoSQL {
public:
    Comando_Excluir_Conta( CPF& cpf);
};


#endif