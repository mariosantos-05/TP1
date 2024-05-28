#ifndef TESTE_ESTADO
#define TESTE_ESTADO
#include <string>
#include "../Domains/Headers/Estado.h" 
#include <stdexcept>

class TUEstado {
private:
    const std::string VALOR_VALIDO   = "Previsto";   
    const std::string VALOR_INVALIDO = "Outro";   
    Estado *codigo;                         
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
