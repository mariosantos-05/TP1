#ifndef INT_MAC_INCLUDE
#define INT_MAC_INCLUDE

#include "../Entities/Headers/Conta.h"
#include "../Entities/Headers/Pagamento.h"
#include "../Domains/Headers/Nome.h"
#include "../Domains/Headers/Senha.h"
#include <stdexcept>

using namespace std;

class ISConta;

/**
 * @class Int_MAC
 * @brief Interface para gerenciamento de conta.
 * 
 * Esta classe fornece uma interface abstrata para requisitar operações CRUD para uma conta.
 */
class Int_MAC {
public:

    /**
     * @brief Apresenta a tela inicial.
     */
    virtual void criar_tela_inicial() = 0;

    /**
     * @brief Cria uma nova conta.
     * @param CPF O CPF da conta a ser criada.
     * @param Senha A senha da conta a ser criada.
     * @param Nome O nome da conta a ser criada.
     * @return Booleano que informa sucesso ou falha na criacao.
     */
    //virtual bool criar_conta() = 0;

    /**
     * @brief Acessa os atributos de uma conta.
     * @param CPF O CPF da conta a ser acessada.
     * @return A entidade conta, que contem as informaçoes da mesma.
     */
    //virtual Conta acessar() = 0;

    //virtual void Acess() = 0;

    /**
     * @brief Atualiza algum dado (senha ou nome) da conta.
     * @param CPF O CPF da conta a ser acessada.
     */
    //virtual void atualizar_conta() = 0;

    /**
     * @brief Exclui uma conta.
     * @param CPF O CPF da conta a ser acessada.
     */
    //virtual void deletar_conta() = 0;
    /**
     * @brief Liga o MAC ao MSC.
     * @param CPF O CPF da conta a ser acessada.
     */
    virtual void setCntrISConta(ISConta*) = 0;

    /**
     * @brief Destrutor virtual.
     */
    virtual ~Int_MAC() {}
};

#endif
