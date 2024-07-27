#ifndef INT_MSI_INCLUDE
#define INT_MSI_INCLUDE

#include "../Entities/Headers/Conta.h"
#include "../Entities/Headers/Titulo.h"
#include "../Entities/Headers/Pagamento.h"
#include <vector>

/**
 * @class Int_MSI
 * @brief Interface para gerenciamento de investimentos e pagamentos.
 * 
 * Esta classe fornece uma interface abstrata para realizar operações CRUD em títulos de investimento (Titulo)
 * e pagamentos (Pagamento).
 */
class Int_MSI {
public:
    /**
     * @brief Cria um novo título de investimento.
     * @param titulo O título de investimento a ser criado.
     */
    virtual void Criar_Titulo(const Titulo& titulo) = 0;

    /**
     * @brief Lê um título de investimento existente.
     * @param titulo O título de investimento a ser lido.
     * @return O título de investimento lido.
     */
    virtual Titulo Ler_Titulo(const Titulo& titulo) = 0;

    /**
     * @brief Atualiza um título de investimento existente.
     * @param titulo O título de investimento a ser atualizado.
     */
    virtual void Atualizar_Titulo(const Titulo& titulo) = 0;

    /**
     * @brief Lista todos os títulos de investimento.
     * @param titulo O critério para listar títulos de investimento.
     * @return Um vetor contendo os títulos de investimento listados.
     */
    virtual std::vector<Titulo> Listar_Titulos(const Conta) = 0;

    /**
     * @brief Exclui um título de investimento existente.
     * @param titulo O título de investimento a ser excluído.
     */
    virtual void Excluir_Titulo(const Titulo& titulo) = 0;

    /**
     * @brief Cria um novo pagamento.
     * @param pagamento O pagamento a ser criado.
     */
    virtual void Criar_Pagamento(const Pagamento& pagamento) = 0;

    /**
     * @brief Lê um pagamento existente.
     * @param pagamento O pagamento a ser lido.
     * @return O pagamento lido.
     */
    virtual Pagamento Ler_Pagamento(const Pagamento& pagamento) = 0;

    /**
     * @brief Atualiza um pagamento existente.
     * @param pagamento O pagamento a ser atualizado.
     */
    virtual void Atualizar_Pagamento(const Pagamento& pagamento) = 0;

    /**
     * @brief Lista todos os pagamentos.
     * @param pagamento O critério para listar os pagamentos.
     * @return Um vetor contendo os pagamentos listados.
     */
    virtual std::vector<Pagamento> Listar_Pagamentos(const Titulo) = 0;

    /**
     * @brief Exclui um pagamento existente.
     * @param pagamento O pagamento a ser excluído.
     */
    virtual void Excluir_Pagamento(const Pagamento& pagamento) = 0;
    
    /**
     * @brief Destrutor virtual.
     */
    virtual ~Int_MSI() {}
};

#endif 
