#ifndef CONTA_H
#define CONTA_H

#include <string>
#include "../../Domains/Headers/CPF.h"
#include "../../Domains/Headers/Nome.h"
#include "../../Domains/Headers/Senha.h"

class Conta {
private:
    Name nome;
    Senha senha;
    CPF cpf;

public:
    Conta(std::string nome, std::string senha, std::string cpf);

    void setNome(std::string nome);
    void setSenha(std::string senha);
    void setCodigocpf(std::string cpf);

    std::string getCodigocpf();
    std::string getNome();
    std::string getSenha();
};

#endif // CONTA_H
