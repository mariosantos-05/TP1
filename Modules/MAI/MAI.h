#ifndef MAI_INCLUDE
#define MAI_INCLUDE
#include "../Interfaces/Int_MAI.h"
#include <ncurses.h>

class CntrIAInvestimentos : public Int_MAI {
private:
    ISInvestimentos* cntrISInvestimentos;
    CPF cpf_logado;

public:
    void Criar_Titulo(const Titulo& titulo) override;
    Titulo Ler_Titulo(const CodigoTitulo& codigo) override;
    void Atualizar_Titulo(const Titulo& titulo) override;
    std::vector<Titulo> Listar_Titulos(const Conta& conta) override;
    void Excluir_Titulo(const CodigoTitulo& codigo) override;

    void Criar_Pagamento(const Pagamento& pagamento) override;
    Pagamento Ler_Pagamento(const CodigoPagamento& codigo) override;
    void Atualizar_Pagamento(const Pagamento& pagamento) override;
    std::vector<Pagamento> Listar_Pagamentos(const Titulo& titulo) override;
    void Excluir_Pagamento(const CodigoPagamento& codigo) override;

    void setCntrISInvestimentos(Int_MSI* msiService) override;

    void criar_tela_investimentos(CPF cpf, bool isAuthenticated);
};

#endif
