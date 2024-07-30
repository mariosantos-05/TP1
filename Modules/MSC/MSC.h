#ifndef MSC_INCLUDE
#define MSC_INCLUDE
#include "../Interfaces/Int_MSC.h"
#include "../Interfaces/Int_MSC.h"

#include <stdexcept>
#include <iostream>
#include <cstdlib>

using namespace std;


class CntrISConta:public ISConta {
private:
    CPF cpf_logado;           
public:
    bool criar(CPF,Senha,Name);
    Conta ler() ;                        
    void atualizar();                       
    void deletar();                        
};

#endif 