#ifndef MAA_INCLUDE
#define MAA_INCLUDE
#include "../Interfaces/Int_MAA.h"

class CntrIAAutenticacao:public Int_MAA {

    ISAutenticacao *cntrISAutenticacao;

    public:
        bool autenticar(CPF* cpf);
        void setCntrISAunteticacao(ISAutenticacao* cntrISAutenticacao);
};


#endif