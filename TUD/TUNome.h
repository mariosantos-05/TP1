#ifndef TESTE_Nome
#define TESTE_Nome

#include <string>
#include "Nome.h"
#include <stdexcept>

class TUName {
private:
    const std::string VALOR_VALIDO   = "Mario Santos";   
    const std::string VALOR_INVALIDO = "Mario augusto";   
    Name *codigo;                         
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
