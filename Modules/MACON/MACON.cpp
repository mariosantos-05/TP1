#include "MACON.h"
#include <cstdlib>


MainScreen::MainScreen() : isAuthenticated(false) {
    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);
}

void MainScreen::display() {
    clear();
    if (isAuthenticated) {
        mvprintw(0, 0, "Bem-vindo de volta! Escolha uma opcao:");
        mvprintw(1, 0, "1. Gerir Investimentos");
        mvprintw(2, 0, "2. Configurar Conta");
        mvprintw(3, 0, "3. Sair");
    } else {
        mvprintw(0, 0, "Bem-vindo! Escolha uma opcao:");
        mvprintw(1, 0, "1. Registrar");
        mvprintw(2, 0, "2. Autenticar");
        mvprintw(3, 0, "3. Sair");
    }
    refresh();
}

void MainScreen::handleInput(int ch) {
    if (isAuthenticated) {
        switch (ch) {
            case '1':
                Investiment();
                break;
            case '2':
                user_manager();
                break;
            case '3':
                endwin();
                exit(0);
            default:
                break;
        }
    } else {
        switch (ch) {
            case '1':
                registerUser();
                break;
            case '2':
                authenticateUser();
                refresh();
                break;
            case '3':
                endwin();
                exit(0);
            default:
                break;
        }
    }
}

void MainScreen::showOptions() {
    display();
}


void MainScreen::registerUser() {
    // Implementar o código de registro de usuário
    mvprintw(5, 0, "Registro de usuario (em desenvolvimento)");
    refresh();
    getch();
}

void MainScreen::authenticateUser() {
    // Implementar o código de autenticação de usuário
    isAuthenticated = acesso_autenticacao->autenticar(cpf);
    refresh();
    getch();
}


void MainScreen::Investiment(){
    mvprintw(5, 0, "investimentos (titulos e pagamentos) (em desenvolvimento)");
    refresh();
    getch();
}

void MainScreen::user_manager(){
    mvprintw(5, 0, "Gerenciamento de conta (em desenvolvimento)");
    refresh();
    getch();
}
