#ifndef INT_MSA_INCLUDE
#define INT_MSA_INCLUDE

#include "../Entities/Headers/Conta.h"
#include "../Domains/Headers/CPF.h"
#include "../Domains/Headers/Senha.h"

class ISAutenticacao;

class ISAutenticacao {
public:
    virtual bool autenticar(const CPF&, const Senha&) = 0;    // Método por meio do qual é solicitado o serviço.
    virtual ~ISAutenticacao(){}                               // Método destrutor virtual.
};

#endif 
