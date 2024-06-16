#include "TUTitulo.h"
#include "../Entities/Headers/Titulo.h"
#include <stdexcept>

void TUTitulo::setUp() {
    titulo =  new Titulo(
        "CDB123456789",
        "Lucas Adeodato",
        "Agricultura",
        "30-06-2024",
        "30-06-2025",
        10.0
    );
    estado = SUCESSO;
}

void TUTitulo::tearDown() {
    delete titulo;
}

void TUTitulo::testarCenarioValido() {

    titulo->setCodigo(CODIGO_TITULO_VALIDO);
    if(titulo->getCodigo() != CODIGO_TITULO_VALIDO)
        estado = FALHA;

    titulo->setEmissor(EMISSOR_VALIDO);
    if(titulo->getEmissor() != EMISSOR_VALIDO)
        estado = FALHA; 

    titulo->setSetor(SETOR_VALIDO);
    if(titulo->getSetor() != SETOR_VALIDO)
        estado = FALHA;

    titulo->setEmissao(EMISSAO_VALIDA);
    if(titulo->getEmissao() != EMISSAO_VALIDA)
        estado = FALHA;

    titulo->setVencimento(VENCIMENTO_VALIDO);
    if(titulo->getVencimento() != VENCIMENTO_VALIDO)
        estado = FALHA;

    titulo->setValor(VALOR_VALIDO);
    if(titulo->getValor() != VALOR_VALIDO)
        estado = FALHA; 

}


int TUTitulo::run() {
    setUp();
    testarCenarioValido();
    tearDown();
    return estado;
}