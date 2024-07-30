#include "TP1/Modules/MAC/MAC.h"

#include <stdexcept>
#include <iostream>
#include <cstdlib>

using namespace std;

void CntrIAConta::criar_tela_inicial(CPF){
    
}


bool CntrIAConta::criar_conta(CPF cpf, Senha senha,Name nome){

    cntrISConta->criar(cpf,senha,nome);

}

Conta CntrIAConta::acessar(){

    cntrISConta->ler(cpf_logado);

}


void CntrIAConta::atualizar_conta(){

    cntrISConta->atualizar(cpf_logado);

}

void CntrIAConta::deletar_conta(){

    cntrISConta->deletar(&cpf_logado);

}



