#ifndef MACON_H
#define MACON_H

#include "screen.h"
#include "../Interfaces/Int_MAA.h"
#include "../Interfaces/Int_MAC.h"
#include "../Interfaces/Int_MAI2.h"
#include "../Modules/MAA/MAA.h" 
#include "../Modules/MAC/MAC.h" 
#include "../Modules/MAI/MAI.h"
#include "../Domains/Headers/CPF.h"
#include <cstdlib>

class MainScreen : public Screen {
public:
    MainScreen();

    void display();
    void handleInput(int ch);
    void showOptions();
    void setMAC(CntrIAConta* conta) { acesso_conta = conta; }      
    void setMAA(CntrIAAutenticacao* autenticacao) { acesso_autenticacao = autenticacao; }   
    void setMAI(CntrIAInvestimentos* investimentos) { acesso_investimentos = investimentos; }

private:
    void Investiment(); 
    void user_manager();
    void authenticateUser();
    bool isAuthenticated;
    CntrIAAutenticacao* acesso_autenticacao;
    CntrIAConta* acesso_conta; 
    CntrIAInvestimentos* acesso_investimentos;
    CPF cpf = CPF("000.000.000-00");
};

#endif
