#ifndef TUConta_H
#define TUConta_H

#include <iostream>
#include "../../Domains/Headers/Nome.h"
#include "../../Domains/Headers/Senha.h"
#include "../../Domains/Headers/CPF.h"

class ContaTest{
    public:
        void runTests();
    private:
        void testSetNome();
        void testSetSenha();
        void testSetCodigocpf();

        void testGetCodigocpf();
        void testGetNome();
        void testGetSenha();

        void assertEqual(const std::string& testName, const std::string& expected, const std::string& actual);
        void assertEqual(const std::string& testName, double expected, double actual);

};
#endif