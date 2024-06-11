#include "TUTitulo.h"

void TituloTest::runTests() {
    testGetCodigo();
    testGetEmissor();
    testGetSetor();
    testGetEmissao();
    testGetVencimento();
    testGetValor();

    testSetCodigo();
    testSetEmissor();
    testSetSetor();
    testSetEmissao();
    testSetVencimento();
    testSetValor();
}

void TituloTest::testGetCodigo() {
    CodigoTitulo codigo("ABC123");
    Name emissor("Empresa XYZ");
    Setor setor("Tecnologia");
    Data emissao("2024-01-01");
    Data vencimento("2025-01-01");
    Dinheiro valor(1000.0);
    Titulo titulo(codigo, emissor, setor, emissao, vencimento, valor);

    assertEqual("testGetCodigo", "ABC123", titulo.getCodigo().getCodigo());
}

void TituloTest::testGetEmissor() {
    CodigoTitulo codigo("ABC123");
    Name emissor("Empresa XYZ");
    Setor setor("Tecnologia");
    Data emissao("2024-01-01");
    Data vencimento("2025-01-01");
    Dinheiro valor(1000.0);
    Titulo titulo(codigo, emissor, setor, emissao, vencimento, valor);

    assertEqual("testGetEmissor", "Empresa XYZ", titulo.getEmissor().getNome());
}

void TituloTest::testGetSetor() {
    CodigoTitulo codigo("ABC123");
    Name emissor("Empresa XYZ");
    Setor setor("Tecnologia");
    Data emissao("2024-01-01");
    Data vencimento("2025-01-01");
    Dinheiro valor(1000.0);
    Titulo titulo(codigo, emissor, setor, emissao, vencimento, valor);

    assertEqual("testGetSetor", "Tecnologia", titulo.getSetor().getSetor());
}

void TituloTest::testGetEmissao() {
    CodigoTitulo codigo("ABC123");
    Name emissor("Empresa XYZ");
    Setor setor("Tecnologia");
    Data emissao("2024-01-01");
    Data vencimento("2025-01-01");
    Dinheiro valor(1000.0);
    Titulo titulo(codigo, emissor, setor, emissao, vencimento, valor);

    assertEqual("testGetEmissao", "2024-01-01", titulo.getEmissao().getData());
}

void TituloTest::testGetVencimento() {
    CodigoTitulo codigo("ABC123");
    Name emissor("Empresa XYZ");
    Setor setor("Tecnologia");
    Data emissao("2024-01-01");
    Data vencimento("2025-01-01");
    Dinheiro valor(1000.0);
    Titulo titulo(codigo, emissor, setor, emissao, vencimento, valor);

    assertEqual("testGetVencimento", "2025-01-01", titulo.getVencimento().getData());
}

void TituloTest::testGetValor() {
    CodigoTitulo codigo("ABC123");
    Name emissor("Empresa XYZ");
    Setor setor("Tecnologia");
    Data emissao("2024-01-01");
    Data vencimento("2025-01-01");
    Dinheiro valor(1000.0);
    Titulo titulo(codigo, emissor, setor, emissao, vencimento, valor);

    assertEqual("testGetValor", 1000.0, titulo.getValor().getValor());
}

void TituloTest::testSetCodigo() {
    CodigoTitulo codigo("ABC123");
    Name emissor("Empresa XYZ");
    Setor setor("Tecnologia");
    Data emissao("2024-01-01");
    Data vencimento("2025-01-01");
    Dinheiro valor(1000.0);
    Titulo titulo(codigo, emissor, setor, emissao, vencimento, valor);

    CodigoTitulo novoCodigo("XYZ789");
    titulo.setCodigo(novoCodigo);
    assertEqual("testSetCodigo", "XYZ789", titulo.getCodigo().getCodigo());
}

void TituloTest::testSetEmissor() {
    CodigoTitulo codigo("ABC123");
    Name emissor("Empresa XYZ");
    Setor setor("Tecnologia");
    Data emissao("2024-01-01");
    Data vencimento("2025-01-01");
    Dinheiro valor(1000.0);
    Titulo titulo(codigo, emissor, setor, emissao, vencimento, valor);

    Name novoEmissor("Empresa ABC");
    titulo.setEmissor(novoEmissor);
    assertEqual("testSetEmissor", "Empresa ABC", titulo.getEmissor().getNome());
}

void TituloTest::testSetSetor() {
    CodigoTitulo codigo("ABC123");
    Name emissor("Empresa XYZ");
    Setor setor("Tecnologia");
    Data emissao("2024-01-01");
    Data vencimento("2025-01-01");
    Dinheiro valor(1000.0);
    Titulo titulo(codigo, emissor, setor, emissao, vencimento, valor);

    Setor novoSetor("Finanças");
    titulo.setSetor(novoSetor);
    assertEqual("testSetSetor", "Finanças", titulo.getSetor().getSetor());
}

void TituloTest::testSetEmissao() {
    CodigoTitulo codigo("ABC123");
    Name emissor("Empresa XYZ");
    Setor setor("Tecnologia");
    Data emissao("2024-01-01");
    Data vencimento("2025-01-01");
    Dinheiro valor(1000.0);
    Titulo titulo(codigo, emissor, setor, emissao, vencimento, valor);

    Data novaEmissao("2023-01-01");
    titulo.setEmissao(novaEmissao);
    assertEqual("testSetEmissao", "2023-01-01", titulo.getEmissao().getData());
}

void TituloTest::testSetVencimento() {
    CodigoTitulo codigo("ABC123");
    Name emissor("Empresa XYZ");
    Setor setor("Tecnologia");
    Data emissao("2024-01-01");
    Data vencimento("2025-01-01");
    Dinheiro valor(1000.0);
    Titulo titulo(codigo, emissor, setor, emissao, vencimento, valor);

    Data novoVencimento("2026-01-01");
    titulo.setVencimento(novoVencimento);
    assertEqual("testSetVencimento", "2026-01-01", titulo.getVencimento().getData());
}

void TituloTest::testSetValor() {
    CodigoTitulo codigo("ABC123");
    Name emissor("Empresa XYZ");
    Setor setor("Tecnologia");
    Data emissao("2024-01-01");
    Data vencimento("2025-01-01");
    Dinheiro valor(1000.0);
    Titulo titulo(codigo, emissor, setor, emissao, vencimento, valor);

    Dinheiro novoValor(2000.0);
    titulo.setValor(novoValor);
    assertEqual("testSetValor", 2000.0, titulo.getValor().getValor());
}

void TituloTest::assertEqual(const std::string& testName, const std::string& expected, const std::string& actual) {
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
