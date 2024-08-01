#ifndef MACON_H
#define MACON_H

#include "screen.h"
#include "../Interfaces/Int_MAA.h"
#include "../Interfaces/Int_MAC.h"
//#include "../Interfaces/Int_MAI.h" add later when the interface is done
#include "../Domains/Headers/CPF.h"
#include "MACON.h"
#include <cstdlib>

class MainScreen {
public:
    MainScreen();

    void display();
    void handleInput(int ch);
    void showOptions();
    void setMAC(IAConta*) ;      
    void setMAA(IAAutenticacao*) ;      
    void setMAI(IAInvestimento*) ;
          


private:
    bool isAuthenticated;
    CPF* cpf;
    IAAutenticacao* autenticador;
    IAConta *acesso_conta; 
    IAInvestimento *acesso_investimento; 


};

void inline MainScreen::setMAC(IAConta *acesso_conta){
        this->acesso_conta = acesso_conta;
}
void inline MainScreen::setMAI(IAConta *acesso_investimento){
        this->acesso_investimento = acesso_investimento;
}
#endif 
