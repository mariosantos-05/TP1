#include <iostream>
#include "../TUD/TUCPF.h"
#include "../TUD/TUNome.h"
#include "../TUD/TUPercentual.h"
#include "../TUD/TUValorMonetario.h"
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


    TUPercentual testepercentual;
    switch(testepercentual.run()){
        case TUPercentual::SUCESSO: std::cout << GREEN << "SUCESSO - Percentual" << RESET << std::endl;
                                break;
        case TUPercentual::FALHA  : std::cout << RED << "FALHA   - Percentual" << RESET << std::endl;
                                break;
    }


    TUDinheiro testedinheiro;
    switch(testedinheiro.run()){
        case TUName::SUCESSO: std::cout << GREEN << "SUCESSO - Dinheiro" << RESET << std::endl;
                                break;
        case TUName::FALHA  : std::cout << RED << "FALHA   - Dinheiro" << RESET << std::endl;
                                break;
    }
  
    return 0;

}