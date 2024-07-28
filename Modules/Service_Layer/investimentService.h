#ifndef INVESTIMENTO_SERVICE_H
#define INVESTIMENTO_SERVICE_H

#include "Int_MSI.h"
#include "Inv_Persistence_Unit.h"
#include <vector>
#include <iostream>

class InvestimentoService : public Int_MSI {
public:
    void Criar_Titulo(const Titulo& titulo) override;
    Titulo Ler_Titulo(const Titulo& titulo) override;
    void Atualizar_Titulo(const Titulo& titulo) override;
    std::vector<Titulo> Listar_Titulos(const Conta conta) override;
    void Excluir_Titulo(const Titulo& titulo) override;

    void Criar_Pagamento(const Pagamento& pagamento) override;
    Pagamento Ler_Pagamento(const Pagamento& pagamento) override;
    void Atualizar_Pagamento(const Pagamento& pagamento) override;
    std::vector<Pagamento> Listar_Pagamentos(const Titulo titulo) override;
    void Excluir_Pagamento(const Pagamento& pagamento) override;
};

#endif // INVESTIMENTO_SERVICE_H
