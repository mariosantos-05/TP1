#ifndef MACON_H
#define MACON_H

#include "screen.h"
#include "../Domains/Headers/CPF.h"

class MainScreen : public Screen {
public:
    MainScreen();
    void display() override;
    void handleInput(int ch) override;

private:
    void showOptions();
    bool isAuthenticated;
    CPF cpf;
};

#endif 
