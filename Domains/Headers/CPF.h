#ifndef CPF_H
#define CPF_H
#include <string>    
#include <regex>      
#include <stdexcept>

/**
 * @brief Class representing a CPF (Cadastro de Pessoas Fisicas) number.
 */
class CPF{
private:
    std::string CadastroPF;  /**< The CPF number string. */
    void validateCPFFormat(std::string cpf);

public:
    /**
     * @brief Constructor for CPF.
     * @param cpf The CPF number string.
     */
    CPF(std::string cpf);

    /**
     * @brief Setter for the CPF number.
     * @param cpf The CPF number string.
     * @remark the valid format is "XXX.XXX.XXX-CC" only numbers
     * @throw Throws invalid_argument exception if the format is invalid.
     */
    void setCPF(std::string cpf);

    /**
     * @brief Getter for the CPF number.
     * @return The CPF number string.
     * @remark the given format is "XXX.XXX.XXX-CC" only numbers
     */
    std::string getCPF();
};

#endif


