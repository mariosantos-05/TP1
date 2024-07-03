#ifndef TESTE_CODIGOTITULO
#define TESTE_CODIGOTITULO
#include <string>
#include "../Domains/Headers/CodigoTitulo.h"
#include <stdexcept>

class TUCodigoTitulo {
private:
    const std::string VALOR_VALIDO   = "CDB123456789";   
    const std::string VALOR_INVALIDO = "AAA000000000";   
    CodigoTitulo *codigo;                         
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
