#include "../Modules/MAC/MAC.h"

#include <stdexcept>
#include <iostream>
#include <cstdlib>
#include <ncurses.h>

using namespace std;

void CntrIAConta::criar_tela_inicial(CPF& logado, bool isAuthenticated) {
    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);

    while (true) {
        clear();
        if (isAuthenticated) {
            mvprintw(0, 0, "Bem-vindo de volta! Escolha um servico:");
            mvprintw(1, 0, "1. Atualizar Conta");
            mvprintw(2, 0, "2. Acessar Conta");
            mvprintw(3, 0, "3. Deletar Conta");
            mvprintw(4, 0, "4. Sair");
        } else {
            mvprintw(0, 0, "Bem-vindo! Selecione uma das opções:");
            mvprintw(1, 0, "1. Criar Conta");
            mvprintw(2, 0, "2. Sair");
        }
        refresh();

        int ch = getch();
        if (isAuthenticated) {
            switch (ch) {
                case '1':
                    atualizar_conta();
                    break;
                case '2':
                    Acess();
                    break;
                case '3':
                    deletar();
                    break;
                case '4':
                    endwin();
                    exit(0);
                default:
                    break;
            }
        } else {
            switch (ch) {
                case '1':
                    criar_conta();
                    break;
                case '2':
                    endwin();
                    exit(0);
                default:
                    break;
            }
        }
    }
}

bool CntrIAConta::criar_conta() {
    clear();
    mvprintw(1, 13, "Criação de conta");
    mvprintw(2, 2, "CPF: ");
    mvprintw(4, 2, "Nome: ");
    mvprintw(6, 2, "Senha: ");

    char cpf_digitado[30];
    char nome_digitado[50];
    char senha_digitada[30];

    echo();
    mvgetnstr(2, 7, cpf_digitado, 29);  
    mvgetnstr(4, 8, nome_digitado, 49); 
    noecho();
    mvgetnstr(6, 9, senha_digitada, 29); 

    // existe_igual = cntrISConta->criar(cpf, Senha(senha), Name(nome));
    bool existe_igual = false; // Placeholder value
    if (existe_igual) {
        mvprintw(8, 0, "CPF já é utilizado por outra conta!");
    } else {
        mvprintw(8, 0, "Conta criada com sucesso!");
    }
    refresh();
    getch();
    return !existe_igual;
}

Conta CntrIAConta::acessar() {
    clear();
    mvprintw(0, 0, "Dados da conta:");
    // Conta conta = Conta(cntrISConta->ler(cpf_logado)); // Uncomment when controller is ready
    
    Conta conta = Conta("Jonas Morelo", "241357", "000.000.000-00");

    std::string CPF = "CPF : " + conta.getCodigocpf();
    std::string name = "Nome: " + conta.getNome();
    std::string password = "Senha: " + conta.getSenha();
    mvprintw(1, 0, CPF.c_str());
    mvprintw(2, 0, name.c_str());
    mvprintw(3, 0, password.c_str());
    /*mvprintw(1, 0, "CPF: 000.000.000-00");
    mvprintw(2, 0, "Nome: Jonas ferras");
    mvprintw(3, 0, "Senha: 231479");*/


    refresh();
    getch();
    clear();
    refresh();
    return conta;
}

void CntrIAConta::atualizar_conta() {
    clear();
    mvprintw(1, 0, "Atualização dos dados da conta");
    mvprintw(2, 0, "Nome: ");
    mvprintw(4, 0, "Senha: ");

    char nome_digitado[50];
    char senha_digitada[30];

    echo();
    mvgetnstr(2, 6, nome_digitado, 49); 
    noecho();
    mvgetnstr(4, 7, senha_digitada, 29); 
    
    //cntrISConta->atualizar(cpf_logado, senha_digitada, nome_digitado); // Uncomment when controller is ready
    mvprintw(6, 0, "Conta atualizada com sucesso!");
    refresh();
    getch();
    clear();
    refresh();
}

void CntrIAConta::deletar_conta() {
    clear();
    mvprintw(0, 0, "ESTA AÇÃO IRA DELETAR SUA CONTA, DESEJA SEGUIR:");
    mvprintw(1, 0, "1. Sim");
    mvprintw(2, 0, "2. Não");

    int ch = getch();
    if (ch == '1') {
        clear();
        // cntrISConta->deletar(&cpf_logado); // Uncomment when controller is ready
        mvprintw(0, 0, "Conta deletada com sucesso!");
        refresh();
        endwin();
    } else {
        clear();
        mvprintw(0, 0, "Operação Abortada!");
    }
    refresh();
    getch();
    clear();
    refresh();
}


void CntrIAConta::Acess() {
    clear();
    mvprintw(0, 0, "Dados da conta:");
    // Conta conta = Conta(cntrISConta->ler(cpf_logado)); // Uncomment when controller is ready
    CPF cpf = CPF("081.749.421-90");
    Name name = Name("Joao Silva");
    Senha senha = Senha("093795");

    std::string CPF = "CPF : " + cpf.getCPF();
    std::string name_2 = "Nome: " + name.getName();
    std::string password = "Senha: " + senha.getSenha();
    mvprintw(1, 0, CPF.c_str());
    mvprintw(2, 0, name_2.c_str());
    mvprintw(3, 0, password.c_str());
    /*mvprintw(1, 0, "CPF: 000.000.000-00");
    mvprintw(2, 0, "Nome: Jonas ferras");
    mvprintw(3, 0, "Senha: 231479");*/


    refresh();
    getch();
    clear();
    refresh();
}

void CntrIAConta::deletar(){
    clear();
    mvprintw(0, 0, "ESTA ACAO IRA DELETAR SUA CONTA, DESEJA SEGUIR:");
    mvprintw(1, 0, "1. Sim");
    mvprintw(2, 0, "2. Não");

    int ch = getch();
    if (ch == '1') {
        clear();
        // cntrISConta->deletar(&cpf_logado); // Uncomment when controller is ready
        mvprintw(0, 0, "Conta deletada com sucesso!");
        endwin();
        exit(0);
    } else {
        clear();
        mvprintw(0, 0, "Operação Abortada!");
    }
    refresh();
    getch();
    clear();
    refresh();
}