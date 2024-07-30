#ifndef MACON_H
#define MACON_H

#include "screen.h"
#include "../Interfaces/Int_MAA.h"
#include "../Interfaces/Int_MAC.h"
#include "../Interfaces/Int_MAI.h" 
#include "../Domains/Headers/CPF.h"
#include "MACON.h"
#include <cstdlib>

class MainScreen :public Screen {
public:
    MainScreen();

    void display();
    void handleInput(int ch);
    void showOptions();

private:
    //change for the actual methods in the respective module
    void Investiment(); 
    void user_manager();
    void registerUser();
    void authenticateUser();
    bool isAuthenticated;
    CPF* cpf;
};

#endif 
