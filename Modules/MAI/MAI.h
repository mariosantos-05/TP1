#ifndef MAI_INCLUDE
#define MAI_INCLUDE
#include "../Interfaces/Int_MAI2.h"
#include <ncurses.h>
#include "../Domains/Headers/CPF.h"
#include "../Entities/Headers/Titulo.h"
#include "../Entities/Headers/Pagamento.h"

class CntrIAInvestimentos : public Int_MAI2 {
private:
    InvestimentoService* cntrISInvestimentos;
    CPF cpf_logado;

public:
    void setCntrISInvestimentos(InvestimentoService* cntrISInvestimentos) override;



    void Criar_Titulo();
    Titulo Ler_Titulo();
    void Atualizar_Titulo();
    std::vector<Titulo> Listar_Titulos();
    void Excluir_Titulo();
    
    void Criar_Pagamento();
    Pagamento Ler_Pagamento();
    void Atualizar_Pagamento();
    std::vector<Pagamento> Listar_Pagamentos();
    void Excluir_Pagamento();
    void Tela_Titulo();
    void Tela_Pagamento();

};

#endif
