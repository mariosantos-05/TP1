#ifndef TESTE_Conta
#define TESTE_Conta
#include "../Entities/Headers/Conta.h"
#include <string>
#include <stdexcept>

class TUConta {
private:

    const std::string NOME_VALIDO = "Daniel Campos";
    const std::string SENHA_VALIDO = "senhateste321";
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

#endif
