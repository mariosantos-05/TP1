#ifndef INT_MAA_INCLUDE
#define INT_MAA_INCLUDE

#include "../Entities/Headers/Conta.h"
#include "../Domains/Headers/CPF.h"

class ISAutenticacao;

class IAAutenticacao {
    virtual bool autenticar(CPF*) = 0;
    virtual void setCntrISAunteticacao(ISAutenticacao*) = 0;
    virtual ~IAAutenticacao(){}
};


#endif 
