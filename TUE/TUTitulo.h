#ifndef TESTE_Titulo
#define TESTE_Titulo
#include "../Entities/Headers/Titulo.h"
#include <string>
#include <stdexcept>

class TUTitulo {
private:

    const std::string CODIGO_TITULO_VALIDO = "CDB123456789";
    const std::string EMISSOR_VALIDO = "Lucas Adeodato";
    const std::string SETOR_VALIDO = "Energia";
    const std::string EMISSAO_VALIDA = "30-06-2003";
    const std::string VENCIMENTO_VALIDO = "30-06-2003";
    float VALOR_VALIDO = 15.99;


    Titulo *titulo;                         
    int estado;                          
    void setUp();                       
    void tearDown();                        
    void testarCenarioValido();

public:
    const static int SUCESSO =  0;         
    const static int FALHA   = -1;          
    int run();                              
};

#endif