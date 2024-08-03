#ifndef AUT_PERSISTENCE_UNIT_H
#define AUT_PERSISTENCE_UNIT_H

#include <string>
#include "Inv_Persistence_Unit.h"

// Classe para verificar a existência de uma conta
class Comando_Verificar_Conta : public ComandoSQL {
public:
    Comando_Verificar_Conta(const std::string& cpf, const std::string& senha);
    bool contaExiste();
};

#endif 
