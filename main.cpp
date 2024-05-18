#include <iostream>
#include "../TUD/TUCPF.h"
#include "../TUD/TUNome.h"
#include "../Domains/Headers/Dinheiro.h"
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"


int main() {
    TUCPF testecpf;
    switch(testecpf.run()){
        case TUCPF::SUCESSO: std::cout << GREEN << "SUCESSO - CPF" << RESET << std::endl;
                                break;
        case TUCPF::FALHA  : std::cout << RED << "FALHA   - CPF" << RESET << std::endl;
                                break;
    }
    
    TUName testenome;
    switch(testenome.run()){
        case TUName::SUCESSO: std::cout << GREEN << "SUCESSO - Nome" << RESET << std::endl;
                                break;
        case TUName::FALHA  : std::cout << RED << "FALHA   - Nome" << RESET << std::endl;
                                break;
    }


    Valor valor1 = 10.0;
    std::cout << valor1.getValor() << std::endl;

    try{
        valor1.setValor(-14);
        std::cout << valor1.getValor() << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Exceção capturada: " << e.what() << std::endl;
    }

    return 0;

}