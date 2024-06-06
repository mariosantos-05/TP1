#ifndef TUPAGAMENTO_H
#define TUPAGAMENTO_H
#include "../Entities/Headers/Pagamento.h"
#include <string>
#include <stdexcept>

class TUPagamento {
private:
    const std::string CODIGO_PAGAMENTO_VALIDO   = "01234567 89";
    const std::string DATA_VALIDA   = "01-01-01";   
    const std::string ESTADO_VALIDO   = "Inadimplente";   
    int PERCENTUAL_VALIDO   = 50;   


    Pagamento *pagamento;
    int estado;                              
    void setUp();                       
    void tearDown();                        
    void testarCenarioValido();            

public:
    const static int SUCESSO =  0;         
    const static int FALHA   = -1;          
    int run();                              
};

#endif // TUPAGAMENTO_H



