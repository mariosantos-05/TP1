#ifndef INT_MAA_INCLUDE
#define INT_MAA_INCLUDE

#include "../Entities/Headers/Conta.h"
#include "../Domains/Headers/CPF.h"

class ISAutenticacao;

/**
 * @class IAAutenticacao
 * @brief Interface de autenticação da camada de apresentação.
 * 
 * Esta classe fornece uma interface para o modulo de apresentação de autenticação (MAA), que valida o formato das credenciais 
 * e solicita serviço do módulo de serviço de autenticação (MSA) para verificar se as credenciais estão de acordo com as do banco de dados.
 */
class IAAutenticacao {
public:
    /**
     * @brief Autentica um usuário com base no CPF.
     * @param cpf O CPF do usuário a ser autenticado.
     * @return true se a autenticação for bem-sucedida, false caso contrário.
     */
    virtual bool autenticar(CPF* cpf) = 0;

    /**
     * @brief Liga o MAA ao MSA.
     * @param CPF* Ponteiro para controladora da camada de seriviço (MSA).
     */
    virtual void setCntrISAunteticacao(ISAutenticacao*) = 0;

    /**
     * @brief Destrutor virtual.
     */
    virtual ~IAAutenticacao() {}
};

#endif 
