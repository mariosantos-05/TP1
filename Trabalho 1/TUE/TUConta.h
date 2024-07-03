#ifndef TESTE_CONTA_H
#define TESTE_CONTA_H

#include "../Entities/Headers/Conta.h"
#include <string>
#include <stdexcept>

class TUConta {
private:
    const std::string NOME_VALIDO = "Daniel Campos";
    const std::string SENHA_VALIDA = "241357";
    const std::string CPF_VALIDO = "081.772.431-88";

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

#endif // TESTE_CONTA_H
