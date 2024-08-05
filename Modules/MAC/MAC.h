#ifndef MAC_INCLUDE
#define MAC_INCLUDE
#include "../Interfaces/Int_MAC.h"
#include "../Interfaces/Int_MSC.h"

#include <stdexcept>
#include <iostream>
#include <cstdlib>

using namespace std;


class CntrIAConta:public Int_MAC {
private:
    ContaService *cntrISConta; 
    CPF cpf_logado;           
public:
    CntrIAConta(const CPF& cpf) : cpf_logado(cpf), cntrISConta(nullptr) {}
    void criar_tela_inicial(CPF& cpf, bool isAuthenticated) override;
    bool criar_conta();
    Conta acessar() ;                        
    void atualizar_conta();                       
    void deletar_conta();                        
    void setCntrISConta(ContaService* cntrISConta){ this->cntrISConta = cntrISConta;}   
    void Acess();  
    void deletar();
};


#endif 