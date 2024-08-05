#ifndef INT_MAC_INCLUDE
#define INT_MAC_INCLUDE

#include "../Entities/Headers/Conta.h"
#include "../Entities/Headers/Pagamento.h"
#include "../Domains/Headers/Nome.h"
#include "../Domains/Headers/Senha.h"
#include <stdexcept>

using namespace std;

class ContaService;

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
    virtual void criar_tela_inicial(CPF& cpf, bool isAuthenticated) = 0;
    /**
     * @brief Liga o MAC ao MSC.
     * @param CPF O CPF da conta a ser acessada.
     */
    virtual void setCntrISConta(ContaService*) = 0;

    /**
     * @brief Destrutor virtual.
     */
    virtual ~Int_MAC() {}
};

#endif
