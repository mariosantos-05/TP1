#include "MAA.h"
#include <ncurses.h>
#include <unistd.h> //biblioteca para usar sleep


void CntrIAAutenticacao::setCntrISAunteticacao(ISAutenticacao* cntrISAutenticacao) {
    this->cntrISAutenticacao = cntrISAutenticacao;
}

bool CntrIAAutenticacao::autenticar(CPF* cpf) {
    clear();
    initscr();
    noecho();
    cbreak();

    int startx, starty, width, height;
    width = 40;
    height = 10;
    starty = (LINES - height) / 2;
    startx = (COLS - width) / 2;

    mvprintw(starty - 1, startx + 13, "Autenticação");

    mvprintw(starty + 2, startx + 2, "CPF: ");
    mvprintw(starty + 4, startx + 2, "Senha: ");

    char cpf_digitado[30];
    char senha_digitada[30];

    echo();
    mvgetnstr(starty + 2, startx + 12, cpf_digitado, 29);
    noecho();
    mvgetnstr(starty + 4, startx + 12, senha_digitada, 29);

    clear();
    refresh();

    // Simula autenticação (futramente pede serviço para camada de serviço)
    bool verificado = (strcmp(cpf_digitado, "036.403.621-44") == 0 && strcmp(senha_digitada, "pass") == 0);


    clear();
    if (verificado) {
        *cpf = CPF(cpf_digitado);
        mvprintw(LINES / 2, (COLS - strlen("Autenticação bem-sucedida!")) / 2, "Autenticação bem-sucedida!");
        refresh();
        sleep(3);
        return true;

    } else {
        mvprintw(LINES / 2, (COLS - strlen("Autenticação falhou!")) / 2, "Autenticação falhou!");
        refresh();
        sleep(3);
        return false;
    }
}