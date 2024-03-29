#ifndef CPF_H
#define CPF_H
#include <string>     /**< For string manipulation. */
#include <regex>      /**< For regular expressions. */


/**
 * @brief Class representing a CPF (Cadastro de Pessoas Físicas) number.
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
     * @throw Throws an exception if the format is invalid.
     */
    void setCPF(std::string cpf);

    /**
     * @brief Getter for the CPF number.
     * @return The CPF number string.
     */
    std::string getCPF();
};

#endif

/**
* @brief Class representing the payment code (código de pagamento)
*/
class Codigo_de_pagamento{
private:
    std::string paymentCode;
    void validatepaymentCode;
public:
    /**
     * @brief Constructor for the payment Code.
     * @param paymetncode: number string.
     */
     Codigo_de_pagamento(std::string paycode)
     /**
     * @brief Setter for the payment code number.
     * @param payment code number string.
     * @throw Throws an exception if the format is invalid.
     */
     void setPaymentcode(std::string paycode)
     /**
     * @brief Getter for the payment code number.
     * @return The payment code number string.
     */
     std::string getPaycode();
};
#endif
