#ifndef INV_PERSISTENCE_UNIT_H
#define INV_PERSISTENCE_UNIT_H

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
            nomeBancoDados = "Repository.db";  // Nome do banco de dados.
        }
        void executar();
        static std::list<ElementoResultado>& getListaResultado();  // Add this line
        static void clearListaResultado();  // Add this line
};

// Command classes for Title
class Comando_Criar_Titulo: public ComandoSQL {
public:
        Comando_Criar_Titulo(const Titulo);
};

class Comando_Ler_Titulo: public ComandoSQL {
public:
        Comando_Ler_Titulo(const Titulo);
        Titulo getResultado();
};      

class Comando_Atualizar_Titulo: public ComandoSQL {
public:
        Comando_Atualizar_Titulo(const Titulo);
};

class Comando_Listar_Titulos: public ComandoSQL {
public:
        Comando_Listar_Titulos(const Conta);
};

class Comando_Excluir_Titulo: public ComandoSQL {
public:
        Comando_Excluir_Titulo(const Titulo);
};

// Command classes for Payment
class Comando_Criar_Pagamento: public ComandoSQL {
public:
        Comando_Criar_Pagamento(const Pagamento);
};

class Comando_Ler_Pagamento: public ComandoSQL {
public:
        Comando_Ler_Pagamento(const Pagamento);
        Pagamento getResultado();
};

class Comando_Atualizar_Pagamento: public ComandoSQL {
public:
        Comando_Atualizar_Pagamento(const Pagamento);
};

class Comando_Listar_Pagamentos: public ComandoSQL {
public:
        Comando_Listar_Pagamentos(const Titulo);
};

class Comando_Excluir_Pagamento: public ComandoSQL {
public:
        Comando_Excluir_Pagamento(const Pagamento);
};

#endif // INV_PERSISTENCE_UNIT_H
