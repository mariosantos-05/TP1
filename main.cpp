#include <iostream>
#include "../TUD/TUCPF.h"
#include "../TUD/TUNome.h"
#include "../TUD/TUPercentual.h"
#include "../TUD/TUValorMonetario.h"
#include "../TUD/TUData.h"
#include "../TUD/TUCodigoPagamento.h"
#include "../TUD/TUCodigoTitulo.h"


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


    TUValorMonetario testedinheiro;
    switch(testedinheiro.run()){
        case TUValorMonetario::SUCESSO: std::cout << GREEN << "SUCESSO - Valor Monetario" << RESET << std::endl;
                                break;
        case TUValorMonetario::FALHA  : std::cout << RED << "FALHA   - Valor Monetario" << RESET << std::endl;
                                break;
    }
  

    TUData testedata;
    switch(testedata.run()){
        case TUData::SUCESSO: std::cout << GREEN << "SUCESSO - Data" << RESET << std::endl;
                                break;
        case TUData::FALHA  : std::cout << RED << "FALHA   - Data" << RESET << std::endl;
                                break;
    }

    TUCodigoPagamento testecodigopagamento;
    switch(testecodigopagamento.run()){
        case TUCodigoPagamento::SUCESSO: std::cout << GREEN << "SUCESSO - Codigo de Pagamento" << RESET << std::endl;
                                break;
        case TUCodigoPagamento::FALHA  : std::cout << RED << "FALHA   - Codigo de pagamento" << RESET << std::endl;
                                break;
    }

    TUCodigoTitulo testecodigotitulo;
    switch(testecodigotitulo.run()){
        case TUCodigoTitulo::SUCESSO: std::cout << GREEN << "SUCESSO - Codigo de Titulo" << RESET << std::endl;
                                break;
        case TUCodigoTitulo::FALHA  : std::cout << RED << "FALHA   - Codigo de Titulo" << RESET << std::endl;
                                break;
    }


    
  

    return 0;

}