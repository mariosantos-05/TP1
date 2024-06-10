#ifndef TESTE_Titulo
#define TESTE_Titulo
#include "../Entities/Headers/Titulo.h"
#include <string>
#include <stdexcept>

class TUData {
private:

    const std::string CODIGO_TITULO_VALIDO = "CDB123456789";
    const std::string EMISSOR_VALIDO = "Lucas Adeodato";
    const std::string SETOR_VALIDO = "Agricultura";
    const std::string EMISSAO_VALIDA = "30-06-2003";
    const std::string VENCIMENTO_VALIDO = "30-06-2003";
    const std::string VALOR_VALIDO = "15.99";


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
