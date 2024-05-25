#ifndef TESTE_CODIGOPAGAMENTO
#define TESTE_CODIGOPAGAMENTO
#include <string>
#include "../Domains/Headers/CodigoPagamento.h"
#include <stdexcept>

class TUCodigoPagamento {
private:
    const std::string VALOR_VALIDO   = "123456789 1";   
    const std::string VALOR_INVALIDO = "00000012 9";   
    CodigoPagamento *codigo;                         
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
