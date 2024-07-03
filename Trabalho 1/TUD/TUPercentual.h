#ifndef TESTE_PERCENTUAL
#define TESTE_PERCENTUAL
#include <string>
#include "../Domains/Headers/Percentual.h"
#include <stdexcept>

class TUPercentual {
private:
    int VALOR_VALIDO   = 100;   
    int VALOR_INVALIDO = 120;   
    Percentual *valor;                         
    int estado;                          
    void setUp();                       
    void tearDown();                        
    void testarCenariovalido();            
    void testarCenarioinvalido();              
public:
    const static int SUCESSO =  0;         
    const static int FALHA   = -1;          
    int run();                              
};

#endif