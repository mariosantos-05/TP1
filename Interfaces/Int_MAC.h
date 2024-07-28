#ifndef INT_MAC_INCLUDE
#define INT_MAC_INCLUDE

#include "../Entities/Headers/Conta.h"
#include "../Entities/Headers/Pagamento.h"
#include <stdexcept>

using namespace std;

/**
 * @class Int_MSI
 * @brief Interface para gerenciamento de conta.
 * 
 * Esta classe fornece uma interface abstrata para realizar operações CRUD em uma conta.
 */

class ISConta;

class IAConta {
public:

    /**
     * @brief Acessa os atributos de uma conta.
     * @param CPF* O CPF da conta a ser acessada.
     * @return A entidade conta, que contem as informaçoes da mesma.
     */

    virtual Conta ler(CPF*) = 0;           

    /**
     * @brief Atualiza algum dado (senha ou nome) da conta.
     * @param CPF* O CPF da conta a ser acessada.
     */

    virtual void atualizar(CPF*) = 0;

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
  
    virtual ~IAConta(){}                                     
};




#endif