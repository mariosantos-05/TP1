#include "MAI.h"
#include <stdexcept>
#include <iostream>
#include <vector>
#include <ncurses.h>

using namespace std;


void CntrIAInvestimentos::Tela_Titulo(){
    clear();
    while(true){
        mvprintw(0, 0, "Opções de Titulo:");
        mvprintw(1, 0, "1. Criar título");
        mvprintw(2, 0, "2. Ler título");
        mvprintw(3, 0, "3. Listar títulos");
        mvprintw(4, 0, "4. Atualizar título");
        mvprintw(5, 0, "5. Excluir título");
        mvprintw(6, 0, "6. Voltar");
        refresh();

        int ch = getch();
        
        switch (ch) {
            case '1':
                clear();
                Criar_Titulo();
                break;
            case '2':
                clear();
                Ler_Titulo();
                break;
            case '3':
                clear();
                Listar_Titulos();
                break;
            case '4':
                clear();
                Atualizar_Titulo();
                break;
            case '5':
                clear();
                Excluir_Titulo();
                break;
            case '6':
                refresh();
                clear();
                endwin();
            default:
                break;
        }
    }
}
void CntrIAInvestimentos::Tela_Pagamento(){
    clear();
    while(true){
        mvprintw(1, 0, "1. Criar pagamento");
        mvprintw(2, 0, "2. Ler pagamento");
        mvprintw(3, 0, "3. Listar pagamentos");
        mvprintw(4, 0, "4. Atualizar pagamento");
        mvprintw(5, 0, "5. Excluir pagamento");
        mvprintw(6, 0, "6. Voltar");
        refresh();

        int ch = getch();
        
        switch (ch) {
            case '1':
                clear();
                Criar_Pagamento();
                break;
            case '2':
                clear();
                Ler_Pagamento();
                break;
            case '3':
                clear();
                Listar_Pagamentos();
                break;
            case '4':
                clear();
                Atualizar_Pagamento();
                break;
            case '5':
                clear();
                Excluir_Pagamento();
                break;
            case '6':
                clear();
                endwin();
                exit(0);
            default:
                exit(0);
                break;
        }
    }
}


void CntrIAInvestimentos::Criar_Titulo() {
    clear();
    mvprintw(1, 13, "Criação de título");
    mvprintw(2, 2, "Código de título: ");
    mvprintw(4, 2, "Data de emissão: ");
    mvprintw(6, 2, "Data de vencimento: ");
    mvprintw(8, 2, "Setor: ");
    mvprintw(10, 2, "Valor: ");

    char codigo_digitado[30];
    char data_de_emissao_digitada[50];
    char data_de_vencimento_digitada[30];
    char setor_digitado[30];
    char valor_digitado[50];

    echo();
    mvgetnstr(2, 27, codigo_digitado, 29);  
    mvgetnstr(4, 27, data_de_emissao_digitada, 49); 
    mvgetnstr(6, 30, data_de_vencimento_digitada, 29); 
    mvgetnstr(8, 18, setor_digitado, 29); 
    mvgetnstr(10, 18, valor_digitado, 49); 

    //existe_igual = cntrISInvestimento->criar(CodigoTitulo(codigo), Data(data_de_emissao), Data(data_de_vencimento), Setor(setor), Valor(valor));
    bool existe_igual = false; // Placeholder value
    if (existe_igual) {
        mvprintw(12, 0, "Código de título já é utilizado");
    } else {
        mvprintw(12, 0, "Título criado com sucesso!");
    }
    refresh();
    getch();
}

Titulo CntrIAInvestimentos::Ler_Titulo() {
    clear();
    mvprintw(1, 13, "Leitura de título");
    mvprintw(2, 2, "Digite o código de título: ");
    
    char codigo_digitado[30];
    
    echo();
    mvgetnstr(2, 35, codigo_digitado, 29);  
    noecho();
    Titulo titulo("CDB123456789","Lucas Adeodato","Energia","30-06-2003","30-06-2003",15.99);


    // Titulo titulo = cntrISInvestimentos->Ler_Titulo(CodigoTitulo(codigo_digitado));
    
    mvprintw(4, 0, "Dados do título:");
    mvprintw(5, 0, ("Código: " + titulo.getCodigo()).c_str());
    mvprintw(6, 0, ("Data de emissão: " + titulo.getEmissao()).c_str());
    mvprintw(7, 0, ("Data de vencimento: " + titulo.getVencimento()).c_str());
    mvprintw(8, 0, ("Setor: " + titulo.getSetor()).c_str());
    mvprintw(9, 0, ("Valor: " + to_string(titulo.getValor())).c_str());
    mvprintw(10, 0, ("Emissor: " + (titulo.getEmissor())).c_str());
    
    
    refresh();
    getch();
    clear();
    return titulo;
}

std::vector<Titulo> CntrIAInvestimentos::Listar_Titulos() {
    clear();
    mvprintw(1, 13, "Listagem de títulos");
<<<<<<< HEAD
    Titulo titulo("CDB123456789","Lucas Adeodato","Energia","30-06-2003","30-06-2003",15.99);
=======
    Titulo titulo("CDB123456789","Daniel Campos","Energia","25-04-2022","05-09-2024",15.99);
>>>>>>> 3f56d634ce4ad70f4d1b86f3431958ab9124275a

    /*
    // std::vector<Titulo> titulos = cntrISInvestimentos->Listar_Titulos(conta);
    std::vector<Titulo> titulos; // Placeholder data
    
    for (size_t i = 0; i < titulos.size(); ++i) {
        mvprintw(i+3, 0, ("Título " + to_string(i+1)).c_str());
        mvprintw(i+4, 0, ("Código: " + titulos[i].getCodigo()).c_str());
        mvprintw(i+5, 0, ("Data de emissão: " + titulos[i].getDataEmissao()).c_str());
        mvprintw(i+6, 0, ("Data de vencimento: " + titulos[i].getDataVencimento()).c_str());
        mvprintw(i+7, 0, ("Setor: " + titulos[i].getSetor()).c_str());
        mvprintw(i+8, 0, ("Valor: " + to_string(titulos[i].getValor())).c_str());
        mvprintw(i+9, 0, ("Emissor: " + to_string(titulos[i].getEmissor())).c_str());
    }
    */

    mvprintw(4, 0, "Titulo 1:");
    mvprintw(5, 0, ("Código: " + titulo.getCodigo()).c_str());
    mvprintw(6, 0, ("Data de emissão: " + titulo.getEmissao()).c_str());
    mvprintw(7, 0, ("Data de vencimento: " + titulo.getVencimento()).c_str());
    mvprintw(8, 0, ("Setor: " + titulo.getSetor()).c_str());
    mvprintw(9, 0, ("Valor: " + to_string(titulo.getValor())).c_str());
    mvprintw(10, 0, ("Emissor: " + (titulo.getEmissor())).c_str());

    refresh();
    getch();
    clear();
    //return titulos;
}

void CntrIAInvestimentos::Atualizar_Titulo() {
    clear();
    mvprintw(1, 13, "Atualização de título");
    mvprintw(2, 2, "Código de título: ");
    mvprintw(4, 2, "Nova data de emissão: ");
    mvprintw(6, 2, "Nova data de vencimento: ");
    mvprintw(8, 2, "Novo setor: ");
    mvprintw(10, 2, "Novo valor: ");
    
    char codigo_digitado[30];
    char data_de_emissao_digitada[50];
    char data_de_vencimento_digitada[30];
    char setor_digitado[30];
    char valor_digitado[50];
    
    echo();
    mvgetnstr(2, 35, codigo_digitado, 29);  
    mvgetnstr(4, 35, data_de_emissao_digitada, 49); 
    mvgetnstr(6, 35, data_de_vencimento_digitada, 29); 
    mvgetnstr(8, 35, setor_digitado, 29); 
    mvgetnstr(10, 35, valor_digitado, 49); 
    
    // cntrISInvestimentos->Atualizar_Titulo(CodigoTitulo(codigo), Data(data_de_emissao), Data(data_de_vencimento), Setor(setor), Valor(valor));
    
    mvprintw(12, 0, "Título atualizado com sucesso!");
    refresh();
    getch();
    clear();
}

void CntrIAInvestimentos::Excluir_Titulo() {
    clear();
    mvprintw(1, 13, "Exclusão de título");
    mvprintw(2, 2, "Código de título: ");
    
    char codigo_digitado[30];
    
    echo();
    mvgetnstr(2, 30, codigo_digitado, 29);  
    noecho();
    
    // cntrISInvestimentos->Excluir_Titulo(CodigoTitulo(codigo_digitado));
    
    mvprintw(4, 0, "Título excluído com sucesso!");
    refresh();
    getch();
    clear();
}

void CntrIAInvestimentos::Criar_Pagamento() {
    clear();
    mvprintw(1, 13, "Criação de pagamento");
    mvprintw(2, 2, "Código de pagamento: ");
    mvprintw(4, 2, "Data de pagamento: ");
    mvprintw(6, 2, "Valor: ");

    char codigo_digitado[30];
    char data_digitada[50];
    char valor_digitado[50];

    echo();
    mvgetnstr(2, 25, codigo_digitado, 29);  
    mvgetnstr(4, 25, data_digitada, 49); 
    mvgetnstr(6, 25, valor_digitado, 49); 

    //existe_igual = cntrISInvestimento->criarPagamento(CodigoPagamento(codigo), Data(data), Valor(valor));
    bool existe_igual = false; // Placeholder value
    if (existe_igual) {
        mvprintw(8, 0, "Código de pagamento já é utilizado");
    } else {
        mvprintw(8, 0, "Pagamento criado com sucesso!");
    }
    refresh();
    getch();
    clear();
}

Pagamento CntrIAInvestimentos::Ler_Pagamento() {
    clear();
    mvprintw(1, 13, "Leitura de pagamento");
    mvprintw(2, 2, "Código de pagamento: ");
    
    char codigo_digitado[30];
    
    echo();
    mvgetnstr(2, 40, codigo_digitado, 29);  
    noecho();
    Pagamento pagamento("123456789","30-06-2003", "Previsto", 30);

    /*
    // Pagamento pagamento = cntrISInvestimentos->Ler_Pagamento(CodigoPagamento(codigo_digitado));
    */

    mvprintw(4, 0, "Dados do pagamento:");
    mvprintw(5, 0, ("Codigo: " + pagamento.getCodigo()).c_str());
    mvprintw(6, 0, ("Data: " + pagamento.getData()).c_str());
    mvprintw(7, 0, ("Estado: " + pagamento.getEstado()).c_str());
    mvprintw(8, 0, ("Percentual: " + to_string(pagamento.getPercentual())).c_str());

    refresh();
    getch();
    clear();
    return pagamento;
}

std::vector<Pagamento> CntrIAInvestimentos::Listar_Pagamentos() {
    clear();
    mvprintw(1, 13, "Listagem de pagamentos");
    
    /*
    // std::vector<Pagamento> pagamentos = cntrISInvestimentos->Listar_Pagamentos(titulo);
    std::vector<Pagamento> pagamentos; // Placeholder data
    
    
    for (size_t i = 0; i < pagamentos.size(); ++i) {
        mvprintw(i+3, 0, ("Pagamento " + to_string(i+1)).c_str());
        mvprintw(i+4, 0, ("Código: " + pagamentos[i].getCodigo()).c_str());
        mvprintw(i+5, 0, ("Data: " + pagamentos[i].getData()).c_str());
        mvprintw(i+6, 0, ("Estado: " + pagamentos[i].getEstado().c_str());
        mvprintw(i+7, 0, ("Percentual: " + pagamentos[i].getPercentual().c_str());
    }
    
    */
   Pagamento pagamento("123456789","30-06-2003", "Previsto", 30);

    /*
    // Pagamento pagamento = cntrISInvestimentos->Ler_Pagamento(CodigoPagamento(codigo_digitado));
    */

    mvprintw(4, 0, "Dados do pagamento:");
    mvprintw(5, 0, ("Codigo: " + pagamento.getCodigo()).c_str());
    mvprintw(6, 0, ("Data: " + pagamento.getData()).c_str());
    mvprintw(7, 0, ("Estado: " + pagamento.getEstado()).c_str());
    mvprintw(8, 0, ("Percentual: " + to_string(pagamento.getPercentual())).c_str());
    refresh();
    getch();
    clear();
    //return pagamentos;
}

void CntrIAInvestimentos::Atualizar_Pagamento() {
    clear();
    mvprintw(1, 13, "Atualização de pagamento");
    mvprintw(2, 2, "Código de pagamento: ");
    mvprintw(4, 2, "Nova data: ");
    mvprintw(6, 2, "Novo valor: ");
    
    char codigo_digitado[30];
    char data_digitada[50];
    char valor_digitado[50];
    
    echo();
    mvgetnstr(2, 32, codigo_digitado, 29);  
    mvgetnstr(4, 32, data_digitada, 49); 
    mvgetnstr(6, 32, valor_digitado, 49); 
    
    // cntrISInvestimentos->Atualizar_Pagamento(CodigoPagamento(codigo), Data(data), Valor(valor));
    
    mvprintw(8, 0, "Pagamento atualizado com sucesso!");
    refresh();
    getch();
    clear();

}

void CntrIAInvestimentos::Excluir_Pagamento() {
    clear();
    mvprintw(1, 13, "Exclusão de pagamento");
    mvprintw(2, 2, "Código de pagamento: ");
    
    char codigo_digitado[30];
    
    echo();
    mvgetnstr(2, 32, codigo_digitado, 29);  
    noecho();
    
    // cntrISInvestimentos->Excluir_Pagamento(CodigoPagamento(codigo_digitado));
    
    mvprintw(4, 0, "Pagamento excluído com sucesso!");
    refresh();
    getch();
    clear();
}