#ifndef TESTE_Dinheiro
#define TESTE_Dinheiro
#include "../Domains/Headers/Dinheiro.h"
#include <string>
#include <stdexcept>

class TUDinheiro {
private:
    const float VALOR_VALIDO   = 4321.0;   
    const float VALOR_INVALIDO = 78945623425365364561233.0;   
    Valor *codigo;                         
    int estado;                          
    void setUp();                       
    void tearDown();                        
    void testarCenarioValido();            
    void testarCenarioInvalido();              
public:
    const static int SUCESSO =  0;         
    const static int FALHA   = -1;          
    int run();                              
};

#endif
