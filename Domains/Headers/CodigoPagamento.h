#ifndef CODIGOPAGAMENTO_H
#define CODIGOPAGAMENTO_H
#include <string>     
#include <regex>      
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
         * @remark the valid format of value is "XXXXXXXX" where X is a number(0-9) and first digit not 0
         * @throw invalid_argument If the value is in the wrong format.
         */
        void setPaymentcode(std::string paycode);
        /**
         * @brief Getter for the payment code number.
         * @return The payment code number string.
         * @remark the given format of value is "XXXXXXXX" all numbers
         */
        std::string getPaycode();
};
#endif
