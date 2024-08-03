#ifndef MAI_INCLUDE
#define MAI_INCLUDE
#include "../Interfaces/Int_MAI.h"
#include <ncurses.h>

class CntrIAInvestimentos : public Int_MAI {
private:
    ISInvestimentos* cntrISInvestimentos;
    CPF cpf_logado;

public:
    void Criar_Titulo() override;
    Titulo Ler_Titulo() override;
    void Atualizar_Titulo() override;
    std::vector<Titulo> Listar_Titulos() override;
    void Excluir_Titulo() override;
    
    void Criar_Pagamento() override;
    Pagamento Ler_Pagamento() override;
    void Atualizar_Pagamento() override;
    std::vector<Pagamento> Listar_Pagamentos() override;
    void Excluir_Pagamento() override;
    void Tela_Titulo();
    void Tela_Pagamento();

    void setCntrISInvestimentos(Int_MSI* msiService) override;

    void criar_tela_investimentos(CPF cpf);
};

#endif
