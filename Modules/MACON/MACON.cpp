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
                mvprintw(4, 0, "Opção inválida. Tente novamente.");
                refresh();
                getch();
                break;
        }
    } else {
        switch (ch) {
            case '1':
                user_manager();
                break;
            case '2':
                authenticateUser();
                break;
            case '3':
                endwin();
                exit(0);
            default:
                mvprintw(4, 0, "Opção inválida. Tente novamente.");
                refresh();
                getch();
                break;
        }
    }
}

void MainScreen::showOptions() {
    display();
}


void MainScreen::authenticateUser() {
    clear();
    mvprintw(0, 0, "Autenticação de usuário:");
    mvprintw(1, 0, "Digite suas credenciais:");
    // Implementar o código de autenticação de usuário
    isAuthenticated = acesso_autenticacao->autenticar(cpf);
    refresh();
    getch();
}

void MainScreen::Investiment() {
    clear();
    mvprintw(0, 0, "Gerenciar Investimentos:");
    //acesso_investimento->criar_tela_investimentos(cpf);
    refresh();
    getch();
}

void MainScreen::user_manager() {
    clear();
    mvprintw(0, 0, "Gerenciar Conta:");
    acesso_conta->criar_tela_inicial(cpf, isAuthenticated);
    refresh();
    getch();
}
