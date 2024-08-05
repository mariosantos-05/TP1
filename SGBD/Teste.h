#ifndef TEST_COMANDO_SQL_H
#define TEST_COMANDO_SQL_H

#include "Comandos.h"

//bora fi du bill

class TestComandoSQL : public ComandoSQL {
public:
    TestComandoSQL(const string& sqlCommand) {
        comandoSQL = sqlCommand;
    }
    void runTest();
};

#endif
