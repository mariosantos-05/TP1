#ifndef SENHA_H
#define SENHA_H
#include <iostream>
#include <string>
#include <stdexcept> 
using std::string;

/**
* @brief Class representing the Password
*/
class Senha {
private:
    string senha; 
    void validar(string senha);

public:
    /**
     * @brief Constructor for the Senha class.
     * @param senha The initial password to be stored.
     */
    Senha(string senha);

    /**
     * @brief Sets the password to be stored.
     * @param senha The password to be stored.
     * @remark the given format is "XXXXXX" where X is a number(0-9) with no duplicate digit nor ascending or descending order and first number not 0.
     * @throw invalid_argument If the password is invalid.
     */
    void setSenha(string senha);

    /**
     * @brief Gets the stored password.
     * @return The stored password.
     * @remark the given format is "XXXXXX".
     */
    string getSenha();
};

#endif