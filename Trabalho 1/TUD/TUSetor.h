#ifndef TESTE_Setor
#define TESTE_Setor
#include <string>
#include "../Domains/Headers/Setor.h" 
#include <stdexcept>

class TUSetor {
private:
    const std::string VALOR_VALIDO   = "Agricultura";   
    const std::string VALOR_INVALIDO = "Programação";   
    Setor *codigo;                         
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
