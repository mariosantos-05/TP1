/* 
#ifndef AUT_PERSISTENCE_UNIT_H
#define AUT_PERSISTENCE_UNIT_H

#include <string>
#include "Comandos.h"
#include "../Entities/Headers/Conta.h"
#include "../Entities/Headers/Titulo.h"
#include "../Entities/Headers/Pagamento.h"
#include <list>
#include <string>
#include <stdio.h>
#include <sqlite3.h>

// Classe para verificar a existência de uma conta
class Comando_Verificar_Conta : public ComandoSQL {
public:
        Comando_Verificar_Conta(const std::string& cpf, const std::string& senha);
        bool contaExiste();
};

#endif 
*/

#ifndef AUT_PERSISTENCE_UNIT_H
#define AUT_PERSISTENCE_UNIT_H

#include "Comandos.h"

class TestComandoSQL : public ComandoSQL {
public:
    TestComandoSQL(const string& sqlCommand) {
        comandoSQL = sqlCommand;
    }
    void runTest();
    bool autenticar(const string& cpf, const string& senha);
};

#endif
