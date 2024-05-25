#ifndef CODIGOPAGAMENTO_H
#define CODIGOPAGAMENTO_H
#include <string>     /**< For string manipulation. */
#include <regex>      /**< For regular expressions. */
#include <stdexcept>
/**
* @brief Class representing the payment code (codigo de pagamento)
*/
class CodigoPagamento{
    private:
        std::string paymentCode;
        void validatepaymentCode(std::string pc_number);
    public:
        /**
         * @brief Constructor for the payment Code.
         * @param paymentcode: number string.
         */
        CodigoPagamento(std::string paycode);
        /**
         * @brief Setter for the payment code number.
         * @param payment code number string.
         * @throw Throws an exception if the format is invalid.
         */
        void setPaymentcode(std::string paycode);
        /**
         * @brief Getter for the payment code number.
         * @return The payment code number string.
         */
        std::string getPaycode();
};
#endif
