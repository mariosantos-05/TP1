#include "Aut_Persistence_Unit.h"

Comando_Verificar_Conta::Comando_Verificar_Conta(const std::string& cpf, const std::string& senha) {
    comandoSQL = "SELECT * FROM Conta WHERE cpf = '" + cpf + "' AND senha = '" + senha + "'";
}

bool Comando_Verificar_Conta::contaExiste() {
    clearListaResultado(); 
    executar();
    return !listaResultado.empty();
}
