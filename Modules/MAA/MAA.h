#ifndef MAA_INCLUDE
#define MAA_INCLUDE
#include "../Interfaces/Int_MAA.h"
#include "MSA.h"
#include "Int_MSA.h"

class CntrIAAutenticacao:public Int_MAA {
    private:
        ISAutenticacao *cntrISAutenticacao;

    public:
        bool autenticar(CPF& cpf);
        void setCntrISAunteticacao(ISAutenticacao* cntrISAutenticacao);
};


#endif