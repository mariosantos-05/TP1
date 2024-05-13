#ifndef TESTE_CPF
#define TESTE_CPF
#include <string>
#include "../Domains/Headers/CPF.h"
#include <stdexcept>

class TUCPF {
private:
    const std::string VALOR_VALIDO   = "039.347.231-84";   
    const std::string VALOR_INVALIDO = "03233681194";   
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
