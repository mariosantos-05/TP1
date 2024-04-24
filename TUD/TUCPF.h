#ifndef TESTE_CPF
#define TESTE_CPF

#include <string>
#include "CPF.h"
#include <stdexcept>

class TUCPF {
private:
    const std::string VALOR_VALIDO   = "038.397.831-94";   
    const std::string VALOR_INVALIDO = "03839783194";   
    CPF *codigo;                         
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
