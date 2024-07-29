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

private:
    bool isAuthenticated;
    CPF* cpf;
    IAAutenticacao* autenticador;
};

#endif 
