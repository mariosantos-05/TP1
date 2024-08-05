#ifndef CON_PERSISTENCE_UNIT_H
#define CON_PERSISTENCE_UNIT_H

#include "../Entities/Headers/Conta.h"
#include "../Entities/Headers/Titulo.h"
#include "../Entities/Headers/Pagamento.h"
#include "Comandos.h"
#include <list>
#include <string>
#include <stdio.h>
#include <sqlite3.h>

class Comando_Criar_Conta : public ComandoSQL {
public:
        Comando_Criar_Conta( CPF& cpf,  Senha& senha,  Name& nome);
};

class Comando_Ler_Conta : public ComandoSQL {
public:
        Comando_Ler_Conta(CPF& cpf);
        Conta getResultado();
};

class Comando_Atualizar_Conta : public ComandoSQL {
public:
        Comando_Atualizar_Conta( CPF& cpf,  Senha& senha,  Name& nome);
};

class Comando_Excluir_Conta : public ComandoSQL {
public:
        Comando_Excluir_Conta( CPF& cpf);
};


#endif