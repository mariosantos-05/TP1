#ifndef TUCONTA_H
#define TUCONTA_H
#include "../Entities/Headers/Conta.h"
#include <string>
#include <stdexcept>

class TUConta {
private:
    const std::string NOME_VALIDO = "Nome Valido";
    const std::string SENHA_VALIDA = "Senha@123";
    const std::string CPF_VALIDO = "12345678900";

    Conta *conta;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioValido();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

#endif // TUCONTA_H
