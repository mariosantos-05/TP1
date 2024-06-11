#include <iostream>
#include "../TUD/TUCodigoPagamento.h"
#include "../TUD/TUCodigoTitulo.h"
#include "../TUD/TUCPF.h"
#include "../TUD/TUData.h"
#include "../TUD/TUDinheiro.h"
#include "../TUD/TUEstado.h"
#include "../TUD/TUNome.h"
#include "../TUD/TUPercentual.h"
#include "../TUD/TUSenha.h"
#include "../TUD/TUSetor.h"
#include "../Entities/Headers/Titulo.h"
#include "../Entities/Headers/Conta.h"
#include "../TUD/TUPagamento.h"
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"


int main() {
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
    TUCPF testecpf;
    switch(testecpf.run()){
        case TUCPF::SUCESSO: std::cout << GREEN << "SUCESSO - CPF" << RESET << std::endl;
                                break;
        case TUCPF::FALHA  : std::cout << RED << "FALHA   - CPF" << RESET << std::endl;
                                break;
    }
    TUData testedata;
    switch(testedata.run()){
        case TUData::SUCESSO: std::cout << GREEN << "SUCESSO - Data" << RESET << std::endl;
                                break;
        case TUData::FALHA  : std::cout << RED << "FALHA   - Data" << RESET << std::endl;
                                break;
    }

    TUEstado teste_estado;
    switch(teste_estado.run()){
        case TUEstado::SUCESSO: std::cout << GREEN << "SUCESSO - Estado" << RESET << std::endl;
                                break;
        case TUEstado::FALHA  : std::cout << RED << "FALHA   - Estado" << RESET << std::endl;
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
        case TUDinheiro::SUCESSO: std::cout << GREEN << "SUCESSO - Dinheiro" << RESET << std::endl;
                                break;
        case TUDinheiro::FALHA  : std::cout << RED << "FALHA   - Dinheiro" << RESET << std::endl;
    }

    TUSenha testesenha;
    switch(testesenha.run()){
        case TUSenha::SUCESSO: std::cout << GREEN << "SUCESSO - Senha" << RESET << std::endl;
                                break;
        case TUSenha::FALHA  : std::cout << RED << "FALHA   - Senha" << RESET << std::endl;

                                break;
    }

    TUSetor testesetor;
    switch(testesetor.run()){
        case TUSenha::SUCESSO: std::cout << GREEN << "SUCESSO - Setor" << RESET << std::endl;
                                break;
        case TUSenha::FALHA  : std::cout << RED << "FALHA   - Setor" << RESET << std::endl;
                                break;
    }


    TUPagamento testepagamento;
    switch (testepagamento.run()) {
        case TUPagamento::SUCESSO: std::cout << GREEN << "SUCESSO - Pagamento" << RESET << std::endl;
                                break;
        case TUPagamento::FALHA: std::cout << RED << "FALHA   - Pagamento" << RESET << std::endl;
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


    Conta nova_conta("Daniel Campos Silva", "081.749.421-90", "941727");

    std::cout << nova_conta.getNome() << std::endl;
    std::cout << nova_conta.getSenha() << std::endl;
    std::cout << nova_conta.getCodigocpf() << std::endl;

    nova_conta.setCodigocpf("081.723.773-23");
    nova_conta.setNome("Lucas");
    nova_conta.setSenha("894367");

    std::cout << "--------------------" << std::endl;

    std::cout << nova_conta.getNome() << std::endl;
    std::cout << nova_conta.getSenha() << std::endl;
    std::cout << nova_conta.getCodigocpf() << std::endl;

    return 0;



}