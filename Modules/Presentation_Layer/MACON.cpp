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
        mvprintw(3, 0, "1. Sair");
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




/*
int main() {
    MainScreen mainScreen;
    int ch;

    while (true) {
        mainScreen.display();
        ch = getch();
        mainScreen.handleInput(ch);
    }

    endwin();
    return 0;
}
*/  