#include "Headers/codigo_de_pagamento.h" //<header file that give us the interface of codigo de pagamento>
#include <stdexcept>


// Codigo de pagamento constructor
Codigo_de_pagamento::Codigo_de_pagamento(std::string pc_number){
    paymentCode = pc_number;
};
//Validation method
void Codigo_de_pagamento::validatepaymentCode(std::string pc_number){
    std::regex pattern("^[1-9]\\d{8} \\d{2}$");
    std::string digitsOnly = pc_number;
    digitsOnly.erase(std::remove(digitsOnly.begin(), digitsOnly.end(), ' '), digitsOnly.end());

    for(auto x : digitsOnly){
        if(!isdigit(x))
            throw std::invalid_argument("Formato invalido. Apenas numeros sao aceitos");
    };
    if (!std::regex_match(pc_number, pattern)) {
        throw std::invalid_argument("Formato invalido. Certifique-se de que o codigo de pagamento tenha o seguinte formato: 'XXXXXXXX XX'");
    };
};
//Seter for the payment code
void Codigo_de_pagamento::setPaymentcode(std::string paycode){
    //Validate the format
    validatepaymentCode(paycode);
    paymentCode = paycode;

};

//Getter for the payment code
std::string Codigo_de_pagamento::getPaycode(){
    return paymentCode;
};

