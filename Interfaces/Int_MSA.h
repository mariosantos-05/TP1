#ifndef INT_MSA_INCLUDE
#define INT_MSA_INCLUDE

#include "../Entities/Headers/Conta.h"
#include "../Domains/Headers/CPF.h"
#include "../Domains/Headers/Senha.h"

/**
 * @class int_MSA
 * @brief Interface de autenticação da camada de serviço.
 * 
 * Esta classe fornece uma interface para o módulo de serviço de autenticação, recebendo solicitações da camada de apresentação.
 * É responsável por verificar se as credenciais estão de acordo com as do banco de dados.
 */
class Int_MSA {
public:
    /**
     * @brief Autentica um usuário com base no CPF e na Senha.
     * @param cpf O CPF do usuário a ser autenticado.
     * @param senha A senha do usuário a ser autenticado.
     * @return true se a autenticação for bem-sucedida, false caso contrário.
     */
    virtual bool autenticar(CPF& cpf, Senha& senha) = 0;

    /**
     * @brief Destrutor virtual.
     */
    virtual ~Int_MSA() {}
};

#endif 