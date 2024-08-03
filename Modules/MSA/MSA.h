#ifndef AUTENTICACAO_SERVICE_H
#define AUTENTICACAO_SERVICE_H

#include "Aut_Persistence_Unit.h"
#include "../Domains/Headers/CPF.h"
#include "../Domains/Headers/Senha.h"

class AutenticacaoService {
public:
    bool autenticar(CPF& cpf, Senha& senha);
};

#endif // AUTENTICACAO_SERVICE_H
