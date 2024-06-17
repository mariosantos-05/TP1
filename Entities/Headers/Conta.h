#ifndef CONTA_H
#define CONTA_H
#include <string>
#include "../../Domains/Headers/CPF.h"
#include "../../Domains/Headers/Nome.h"
#include "../../Domains/Headers/Senha.h"

/**
 * @brief Class representing the Account of a User.
 */
class Conta {
private:
    Name nome;
    Senha senha;
    CPF cpf;

public:
    /**
     * @brief Constructor for Conta.
     * @param nome an object of the class Name.
     * @param senha object of class Senha.
     * @param cpf object of class CPF.
     */
    Conta(std::string nome, std::string senha, std::string cpf);

    /**
     * @brief Setter for the name.
     * @param nome object of class Name.
     * @throw Class Name Throws exception if the format is invalid.
     */
    void setNome(std::string nome);

    /**
     * @brief Setter for the Senha.
     * @param senha object of class Senha.
     * @throw Class Senha Throws exception if the format is invalid.
     */
    void setSenha(std::string senha);

    /**
     * @brief Setter for the cpf.
     * @param cpf object of class CPF.
     * @throw Class CPF Throws exception if the format is invalid.
     */
    void setCodigocpf(std::string cpf);

    /**
     * @brief Getter for the CPF number.
     * @return cpf object of class CPF.
     */
    std::string getCodigocpf();
    
    /**
     * @brief Getter for the CPF number.
     * @return nome object of class Name.
     */
    std::string getNome();

    /**
     * @brief Getter for the senha number.
     * @return senha object of class Senha.
     */
    std::string getSenha();
};

#endif // CONTA_H
