#include <iostream>
#include "../TUD/TUCPF.h"
#include "../TUD/TUNome.h"
#include "../TUD/TUPercentual.h"
#include "../TUD/TUValorMonetario.h"
#include "../TUD/TUData.h"
#include "../Entities/Headers/Titulo.h"
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
  

    Titulo novo_titulo(
        "CDB123456789",
        "Lucas Adeodato",
        "Agricultura",
        "30-06-2024",
        "30-06-2025",
        10.0
    );

    std::cout << novo_titulo.getCodigo() << std::endl;
    std::cout << novo_titulo.getEmissor() << std::endl;
    std::cout << novo_titulo.getSetor() << std::endl;
    std::cout << novo_titulo.getValor() << std::endl;
    std::cout << novo_titulo.getEmissao() << std::endl;
    std::cout << novo_titulo.getVencimento() << std::endl;


    novo_titulo.setCodigo("DEB123456789");
    novo_titulo.setEmissor("Chacon");
    novo_titulo.setVencimento("30-06-2026");

    std::cout << "--------------------" << std::endl;

    std::cout << novo_titulo.getCodigo() << std::endl;
    std::cout << novo_titulo.getEmissor() << std::endl;
    std::cout << novo_titulo.getSetor() << std::endl;
    std::cout << novo_titulo.getValor() << std::endl;
    std::cout << novo_titulo.getEmissao() << std::endl;
    std::cout << novo_titulo.getVencimento() << std::endl;


    return 0;



}