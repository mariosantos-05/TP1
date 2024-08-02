#include "MAA.h"
#include <ncurses.h>
#include <unistd.h> // biblioteca para usar sleep

void CntrIAAutenticacao::setCntrISAunteticacao(ISAutenticacao* cntrISAutenticacao) {
    this->cntrISAutenticacao = cntrISAutenticacao;
}

bool CntrIAAutenticacao::autenticar(CPF& cpf) {
    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);

    int startx, starty, width, height;
    width = 0;
    height = 0;
    starty = (LINES - height) / 2;
    startx = (COLS - width) / 2;

    clear();
    mvprintw(1, 13, "Autenticação");

    mvprintw(2, 2, "CPF: ");
    mvprintw(6, 2, "Senha: ");

    char cpf_digitado[30];
    
    char senha_digitada[30];

    echo();
    mvgetnstr(2, 7, cpf_digitado, 29);  // Adjust the starting position of input
    noecho();
    mvgetnstr(6, 9, senha_digitada, 29); // Adjust the starting position of input


    // Simula autenticação (futuramente pede serviço para camada de serviço)
    bool verificado = (strcmp(cpf_digitado, "036.403.621-44") == 0 && strcmp(senha_digitada, "pass") == 0);

    clear();
    if (verificado) {
        cpf = CPF(cpf_digitado);
        mvprintw(2, 0, "Autenticação bem-sucedida!");
    } else {
        mvprintw(2 ,0,"Autenticação falhou!");
    }
    refresh();
    getchar();

    endwin();
    return verificado;
}
