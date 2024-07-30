#include "TP1/Modules/MAC/MAC.h"

#include <stdexcept>
#include <iostream>
#include <cstdlib>
#include <ncurses.h>

using namespace std;

void CntrIAConta::criar_tela_inicial() {
    initscr(); // Inicializa o modo ncurses
    cbreak(); // Desativa o buffering de linha
    noecho(); // Não exibe os caracteres digitados
    keypad(stdscr, TRUE); // Habilita a leitura de teclas especiais
    refresh(); // Atualiza a tela

    // Cria a janela principal
    int height = 10;
    int width = 50;
    int starty = (LINES - height) / 2;
    int startx = (COLS - width) / 2;
    WINDOW* win = newwin(height, width, starty, startx);
    box(win, 0, 0); // Desenha uma caixa ao redor da janela
    wrefresh(win);

    mvwprintw(win, 1, 1, "Digite seu CPF: ");
    wrefresh(win);

    // Leitura do CPF
    char cpf[20];
    echo(); // Exibe os caracteres digitados
    wgetstr(win, cpf);

    cpf_logado = CPF(cpf);
    
    noecho(); // Desativa a exibição dos caracteres

    mvwprintw(win, 3, 1, "Digite o servico desejado: ");
    wrefresh(win);

    // Leitura do serviço
    char servico[50];
    echo(); // Exibe os caracteres digitados
    wgetstr(win, servico);
    noecho(); // Desativa a exibição dos caracteres

    if (servico == "Criar Conta"){

        mvwprintw(win, 3, 1, "Digite o seu nome: ");
        wrefresh(win);

        char nome[50];
        echo(); 
        wgetstr(win, nome);
        noecho(); 


        mvwprintw(win, 3, 1, "Digite a sua senha: ");
        wrefresh(win);

        char senha[50];
        echo(); 
        wgetstr(win, senha);
        noecho(); 


        criar_conta(cpf_logado,Senha(senha),Name(nome));

    }
    else if(servico == "Atualizar Conta"){


        mvwprintw(win, 3, 1, "Digite o seu nome: ");
        wrefresh(win);

        char nome[50];
        echo();
        wgetstr(win, nome);
        noecho(); 
        

        mvwprintw(win, 3, 1, "Digite a sua senha: ");
        wrefresh(win);

        char senha[50];
        echo(); 
        wgetstr(win, senha);
        noecho(); 

        atualizar_conta(Senha(senha),Name(nome));

    }
    else if(servico == "Acessar Conta"){
        acessar();
    }
    else if(servico == "Deletar Conta"){
        deletar_conta();
    }
    else{
        cout << "Ação inválida" << endl;
    }

    // Finaliza o modo ncurses
    delwin(win);
    endwin();
}


bool CntrIAConta::criar_conta(CPF cpf, Senha senha,Name nome){

    cntrISConta->criar(cpf,senha,nome);

}

Conta CntrIAConta::acessar(){

    cntrISConta->ler(cpf_logado);

}


void CntrIAConta::atualizar_conta(Senha senha, Name nome){

    cntrISConta->atualizar(cpf_logado,senha,nome);

}

void CntrIAConta::deletar_conta(){

    cntrISConta->deletar(&cpf_logado);

}



