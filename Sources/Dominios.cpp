#include "Dominios.h" //<header file that give us the interface of Dominios>
#include <stdexcept>

// Constructor
CPF::CPF(std::string cpf){
    CadastroPF = cpf;
}

// Validation method
void CPF::validateCPFFormat(std::string cpf) {
    // Regular expression to match the CPF format
    std::regex pattern("^\\d{3}\\.\\d{3}\\.\\d{3}-\\d{2}$");
    std::string digitsOnly = cpf;
    digitsOnly.erase(std::remove(digitsOnly.begin(), digitsOnly.end(), '.'), digitsOnly.end());
    digitsOnly.erase(std::remove(digitsOnly.begin(), digitsOnly.end(), '-'), digitsOnly.end());
    for(auto x : digitsOnly){
        if(!isdigit(x))
            throw std::invalid_argument("Formato inválido. Apenas números são aceitos");
    }
    if (!std::regex_match(cpf, pattern)) {
        throw std::invalid_argument("Formato inválido. Certifique-se de que CPF tenha o seguinto formato: XXX.XXX.XXX-CC");
    }
}

// Setter
void CPF::setCPF(std::string cpf){
    // Validate the CPF format
    validateCPFFormat(cpf);
    CadastroPF = cpf;
}

// Getter
std::string CPF::getCPF(){
    return CadastroPF;
}



// Codigo de pagamento constructor
Codigo_de_pagamento::Codigo_de_pagamento(std::string pc_number){
    paymentCode = pc_number;
};
//Validation method
Codigo_de_pagamento::validatepaymentCode(std::string pc_number){
    std::regex pattern("^[1-9]\\d{8} \\d{2}$")
    std::string digitsOnly = pc_number;
    digitsOnly.erase(std::remove(digitsOnly.begin(), digitsOnly.end(), ' '), digitsOnly.end());

    for(auto x : digitsOnly){
        if(!isdigit(x))
            throw std::invalid_argument("Formato inválido. Apenas números são aceitos");
    };
    if (!std::regex_match(cpf, pattern)) {
        throw std::invalid_argument("Formato inválido. Certifique-se de que o código de pagamento tenha o seguinte formato: 'XXXXXXXX XX'");
    };
};
//Seter for the payment code
void setPaymentcode(std::string paycode){
    //Validate the format
    validatepaymentCode(paycode);
    paymentCode = paycode;

};

//Getter for the payment code
std::string Codigo_de_pagamento::getPaycode(){
    return paymentCode
}
