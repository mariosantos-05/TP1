#include "Aut_Persistence_Unit.h"

/*std::list<ElementoResultado>& ComandoSQL::getListaResultado() {
    return listaResultado;
}*/

//void ComandoSQL::clearListaResultado() {
//    listaResultado.clear();
//}

Comando_Verificar_Conta::Comando_Verificar_Conta(const std::string& cpf, const std::string& senha) {
        comandoSQL = "SELECT 1 FROM Conta WHERE cpf = '" + cpf + "' AND senha = '" + senha + "'";
        std::cout << comandoSQL << "\n"; 
}

bool Comando_Verificar_Conta::contaExiste() {
        //clearListaResultado(); 
        executar();
        return !listaResultado.empty();
}
