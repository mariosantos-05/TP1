#ifndef CONTA_SERVICE_H
#define CONTA_SERVICE_H

#include "Int_MSC.h"
#include "../SGBD/Con_Persistence_Unit.h"
#include <vector>
#include <iostream>

class ContaService : public Int_MSC {
public:
    bool criar(CPF cpf, Senha senha, Name nome) override;
    Conta ler(CPF cpf) override;
    void atualizar(CPF cpf, Senha senha, Name nome) override;
    void deletar(CPF* cpf) override;
    void setCntrISConta(ISConta* isConta) override;
private:
    ISConta* isConta;
};

#endif // CONTA_SERVICE_H
