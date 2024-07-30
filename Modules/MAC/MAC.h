#ifndef MAC_INCLUDE
#define MAC_INCLUDE
#include "../Interfaces/Int_MAC.h"
#include "../Interfaces/Int_MSC.h"

#include <stdexcept>
#include <iostream>
#include <cstdlib>

using namespace std;


class CntrIAConta:public IAConta {
private:
    ISConta *cntrISConta; 
    CPF cpf_logado;           
public:
    void criar_tela_inicial();
    bool criar_conta(CPF,Senha,Name);
    Conta acessar() ;                        
    void atualizar_conta(Senha, Name);                       
    void deletar_conta();                        
    void setCntrISConta(ISConta*) ;      
};

void inline CntrIAConta::setCntrISConta(ISConta *cntrISConta){
        this->cntrISConta = cntrISConta;
}

#endif 