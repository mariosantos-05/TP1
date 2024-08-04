#ifndef MAA_INCLUDE
#define MAA_INCLUDE
#include "../Interfaces/Int_MAA.h"
#include "../MSA/MSA.h"
#include "Int_MSA.h"

class CntrIAAutenticacao:public Int_MAA {
    private:
        AutenticacaoService* autenticacaoService;

    public:
        bool autenticar(CPF& cpf) override;
        void setCntrISAunteticacao(AutenticacaoService* autenticacaoService)override;
};


#endif