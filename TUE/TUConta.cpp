#include "TUConta.h"

void ContaTest::runTests() {
    testGetCodigocpf();
    testGetNome();
    testGetSenha();

    testSetNome();
    testSetCodigocpf();
    testSetSenha();
    
}

void ContaTest::testGetCodigocpf(){
    Name nome("Daniel Campos");
    Senha senha("senhateste321");
    CPF cpf("086.721.442-89");

    Conta conta(nome,senha,cpf);
    assertEqual("testGetCodigocpf", "086.721.442-89", conta.getCodigocpf().getCodigocpf());
}

void ContaTest::testGetNome(){
    Name nome("Daniel Campos");
    Senha senha("senhateste321");
    CPF cpf("086.721.442-89");

    Conta conta(nome,senha,cpf);
    assertEqual("testGetNome", "Daniel Campos", conta.getNome().getNome());
}

void ContaTest::testGetNome(){
    Name nome("Daniel Campos");
    Senha senha("senhateste321");
    CPF cpf("086.721.442-89");

    Conta conta(nome,senha,cpf);
    assertEqual("testGetSenha", "senhateste321", conta.getSenha().getSenha());
}

void ContaTest::testSetNome(){
    Name nome("Daniel Campos");
    Senha senha("senhateste321");
    CPF cpf("086.721.442-89");

    Conta conta(nome,senha,cpf);
    Name novonome("Joao da Silva");
    conta.setNome(novonome);
    assertEqual("testSetNome", "Joao da Silva", conta.getNome().getNome());
}

void ContaTest::testSetSenha(){
    Name nome("Daniel Campos");
    Senha senha("senhateste321");
    CPF cpf("086.721.442-89");

    Conta conta(nome,senha,cpf);
    Senha novasenha("senhamaisegura");
    conta.setSenha(novasenha);
    assertEqual("testSetSenha", "senhamaisegura", conta.getSenha().getSenha());
}

void ContaTest::testSetCodigocpf(){
    Name nome("Daniel Campos");
    Senha senha("senhateste321");
    CPF cpf("086.721.442-89");

    Conta conta(nome,senha,cpf);
    CPF novocpf("056.771.552-23");
    conta.setCodigocpf(novocpf);
    assertEqual("testSetCodigocpf", "056.771.552-23", conta.getCodigocpf().getCodigocpf());
}

void ContaTest::assertEqual(const std::string& testName, const std::string& expected, const std::string& actual) {
    if (expected == actual) {
        std::cout << testName << " passed." << std::endl;
    } else {
        std::cout << testName << " failed: expected '" << expected << "', but got '" << actual << "'." << std::endl;
    }
}

void TituloTest::assertEqual(const std::string& testName, double expected, double actual) {
    if (expected == actual) {
        std::cout << testName << " passed." << std::endl;
    } else {
        std::cout << testName << " failed: expected '" << expected << "', but got '" << actual << "'." << std::endl;
    }
}
