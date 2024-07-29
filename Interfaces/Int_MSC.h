#ifndef INT_MSC_INCLUDE
#define INT_MSC_INCLUDE


#include "../Interfaces/Int_MAC.h"
#include <stdexcept>

using namespace std;

/**
 * @class Int_MSC
 * @brief Interface para prestacao de servicos de conta.
 * 
 * Esta classe fornece uma interface abstrata para realizar operações CRUD em uma conta.
 */


class Int_MSC {
public:

    /**
     * @brief Le os atributos de uma conta.
     * @param CPF* O CPF da conta a ser acessada.
     * @return A entidade conta, que contem as informaçoes da mesma.
     */

    virtual Conta ler(CPF) = 0;           

    /**
     * @brief Atualiza algum dado (senha ou nome) da conta.
     * @param CPF* O CPF da conta a ser acessada.
     */

    virtual void atualizar(CPF) = 0;

    /**
     * @brief Exclui uma conta.
     * @param CPF* O CPF da conta a ser acessada.
     */

    virtual void deletar(CPF*) = 0;    

    /**
     * @brief Liga o MAC ao MSC.
     * @param CPF* O CPF da conta a ser acessada.
     */                    

    virtual void setCntrISConta(ISConta*) = 0;    

    /**
     * @brief Destrutor virtual.
     */
  
    virtual ~Int_MSC(){}                                     
};




#endif