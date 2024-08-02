#ifndef INT_MAI_INCLUDE
#define INT_MAI_INCLUDE

#include "../Entities/Headers/Titulo.h"
#include "../Entities/Headers/Pagamento.h"
#include "../Entities/Headers/Conta.h"
#include "../Interfaces/Int_MSI.h"
#include <vector>

/**
 * @class Int_MAI
 * @brief Interface para apresentação de investimentos e pagamentos.
 * 
 * Esta classe fornece uma interface para o módulo de apresentação de investimentos (MAI), que valida o formato dos dados 
 * e solicita serviços do módulo de serviço de investimentos (MSI) para realizar operações CRUD.
 */
class Int_MAI {
public:
    /**
     * @brief Cria um novo título de investimento.
     * @param titulo O título de investimento a ser criado.
     */
    virtual void Criar_Titulo(const Titulo& titulo) = 0;

    /**
     * @brief Lê um título de investimento existente.
     * @param id O ID do título de investimento a ser lido.
     * @return O título de investimento lido.
     */
    virtual Titulo Ler_Titulo(const CodigoTitulo& codigo) = 0;

    /**
     * @brief Atualiza um título de investimento existente.
     * @param titulo O título de investimento a ser atualizado.
     */
    virtual void Atualizar_Titulo(const Titulo& titulo) = 0;

    /**
     * @brief Lista todos os títulos de investimento.
     * @param conta A conta do usuário.
     * @return Um vetor contendo os títulos de investimento listados.
     */
    virtual std::vector<Titulo> Listar_Titulos(const Conta& conta) = 0;

    /**
     * @brief Exclui um título de investimento existente.
     * @param id O ID do título de investimento a ser excluído.
     */
    virtual void Excluir_Titulo(const CodigoTitulo& codigo) = 0;

    /**
     * @brief Cria um novo pagamento.
     * @param pagamento O pagamento a ser criado.
     */
    virtual void Criar_Pagamento(const Pagamento& pagamento) = 0;

    /**
     * @brief Lê um pagamento existente.
     * @param id O ID do pagamento a ser lido.
     * @return O pagamento lido.
     */
    virtual Pagamento Ler_Pagamento(const CodigoPagamento& codigo) = 0;

    /**
     * @brief Atualiza um pagamento existente.
     * @param pagamento O pagamento a ser atualizado.
     */
    virtual void Atualizar_Pagamento(const Pagamento& pagamento) = 0;

    /**
     * @brief Lista todos os pagamentos.
     * @param titulo O título de investimento associado aos pagamentos.
     * @return Um vetor contendo os pagamentos listados.
     */
    virtual std::vector<Pagamento> Listar_Pagamentos(const Titulo& titulo) = 0;

    /**
     * @brief Exclui um pagamento existente.
     * @param id O ID do pagamento a ser excluído.
     */
    virtual void Excluir_Pagamento(const CodigoPagamento& codigo) = 0;

    /**
     * @brief Liga o MAI ao MSI.
     * @param msiService Ponteiro para a controladora da camada de serviço (MSI).
     */
    virtual void setCntrISInvestimentos(Int_MSI* msiService) = 0;

    /**
     * @brief Destrutor virtual.
     */
    virtual ~Int_MAI() {}
};

#endif
