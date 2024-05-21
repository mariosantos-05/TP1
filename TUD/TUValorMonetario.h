#ifndef TESTE_ValorMonetario
#define TESTE_ValorMonetario
#include "../Domains/Headers/ValorMonetario.h"
#include <string>
#include <stdexcept>

class TUValorMonetario {
private:
    const float VALOR_VALIDO   = 4321.0;   
    const float VALOR_INVALIDO = 78945623425365364561233.0;   
    ValorMonetario *codigo;                         
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
