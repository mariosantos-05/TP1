#include "Aut.h"
#include <ncurses.h>
#include <unistd.h>
#include <string.h>
// Static member initialization
list<ElementoResultado> ComandoSQL::listaResultado;

int ComandoSQL::callback(void *NotUsed, int argc, char **valorColuna, char **nomeColuna) {
    NotUsed = 0;
    ElementoResultado elemento;
    for (int i = 0; i < argc; i++) {
        elemento.setNomeColuna(nomeColuna[i]);
        elemento.setValorColuna(valorColuna[i] ? valorColuna[i] : "NULL");
        listaResultado.push_back(elemento);
    }
    return 0;
}

class CntrIAAutenticacao {
private:
    AutenticacaoService* autenticacaoService;

public:
    bool autenticar(CPF& cpf) {
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

        bool verificado = false;
        try {
            // Cria objetos CPF e Senha com os valores digitados
            CPF cpf_obj(cpf_digitado);
            Senha senha_obj(senha_digitada);

            // Solicita a autenticação ao serviço e armazena o resultado em verificado
            verificado = autenticacaoService->autenticar(cpf_obj, senha_obj);

            // Atualiza a variável cpf se a autenticação for bem-sucedida
            if (verificado) {
                cpf = cpf_obj;
            }
        } catch (const std::exception& e) {
            clear();
            mvprintw(LINES / 2, (COLS - strlen("Erro na autenticação: ")) / 2, "Erro na autenticação: %s", e.what());
            refresh();
            sleep(3);
            endwin();
            return false;
        }

        clear();
        if (verificado) {
            mvprintw(LINES / 2, (COLS - strlen("Autenticação bem-sucedida!")) / 2, "Autenticação bem-sucedida!");
        } else {
            mvprintw(LINES / 2, (COLS - strlen("Autenticação falhou!")) / 2, "Autenticação falhou!");
        }
        refresh();
        sleep(3);

        endwin();
        return verificado;
    }

    void setAutenticacaoService(AutenticacaoService* autenticacaoService) {
        this->autenticacaoService = autenticacaoService;
    }
};

int main() {
    AutenticacaoService autenticacaoService;
    CntrIAAutenticacao controller;
    controller.setAutenticacaoService(&autenticacaoService);

    CPF cpf("12345678901");
    controller.autenticar(cpf);

    return 0;
}
