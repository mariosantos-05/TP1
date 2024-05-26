#include "../Headers/CodigoPagamento.h" //<header file that give us the interface of codigo de pagamento>



// Codigo de pagamento constructor
CodigoPagamento::CodigoPagamento(std::string pc_number){
    paymentCode = pc_number;
};

//Validation method
void CodigoPagamento::validatepaymentCode(std::string pc_number){
    std::regex pattern("^[1-9]\\d{8} \\d{1}$");
    std::string digitsOnly = pc_number;
    digitsOnly.erase(std::remove(digitsOnly.begin(), digitsOnly.end(), ' '), digitsOnly.end());

    for(auto x : digitsOnly){
        if(!isdigit(x))
            throw std::invalid_argument("Formato inválido. Apenas números são aceitos");
    };
    if (!std::regex_match(pc_number, pattern)) {
        throw std::invalid_argument("Formato inválido. Certifique-se de que o codigo de pagamento tenha o seguinte formato: 'XXXXXXXX XX'");
    };
};
//Seter for the payment code
void CodigoPagamento::setPaymentcode(std::string paycode){
    //Validate the format
    validatepaymentCode(paycode);
    paymentCode = paycode;
};

//Getter for the payment code
std::string CodigoPagamento::getPaycode(){
    return paymentCode;
};

