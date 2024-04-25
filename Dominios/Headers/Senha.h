#include <iostream>
#include <string>
#include <stdexcept> 
using namespace std;

/**
* @brief Class representing the Password
*/
class Senha {
private:
    string senha; 
    bool validar(string senha);

public:
    /**
     * @brief Constructor for the Senha class.
     * @param senha The initial password to be stored.
     */
    Senha(string senha);

    /**
     * @brief Sets the password to be stored.
     * @param senha The password to be stored.
     * @throw std::invalid_argument If the password is invalid.
     */
    void set(string senha);

    /**
     * @brief Gets the stored password.
     * @return The stored password.
     */
    string get();
};
