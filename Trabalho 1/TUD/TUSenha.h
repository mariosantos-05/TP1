#ifndef TESTE_SENHA
#define TESTE_SENHA
#include <string>
#include "../Domains/Headers/Senha.h" 
#include <stdexcept>

class TUSenha {
private:
    const std::string VALOR_VALIDO   = "241357";   
    const std::string VALOR_INVALIDO = "123456789";   
    Senha *codigo;                         
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
