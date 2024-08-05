#ifndef TEST_COMANDO_SQL_H
#define TEST_COMANDO_SQL_H

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
