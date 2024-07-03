#ifndef TESTE_Data
#define TESTE_Data
#include "../Domains/Headers/Data.h"
#include <string>
#include <stdexcept>

class TUData {
private:
    const std::string VALOR_VALIDO   = "30-06-2003";   
    const std::string VALOR_INVALIDO = "33-13-1912";   
    Data *codigo;                         
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
