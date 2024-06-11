#ifndef TUTitulo_H
#define TUTitulo_H

#include <iostream>
#include "../../Entities/Headers/Titulo.h"
#include "../../Domains/Headers/CodigoTitulo.h"
#include "../../Domains/Headers/Nome.h"
#include "../../Domains/Headers/Setor.h"
#include "../../Domains/Headers/Data.h"
#include "../../Domains/Headers/Dinheiro.h"

class TituloTest {
public:
    void runTests();

private:
    void testGetCodigo();
    void testGetEmissor();
    void testGetSetor();
    void testGetEmissao();
    void testGetVencimento();
    void testGetValor();

    void testSetCodigo();
    void testSetEmissor();
    void testSetSetor();
    void testSetEmissao();
    void testSetVencimento();
    void testSetValor();

    void assertEqual(const std::string& testName, const std::string& expected, const std::string& actual);
    void assertEqual(const std::string& testName, double expected, double actual);
};

#endif
