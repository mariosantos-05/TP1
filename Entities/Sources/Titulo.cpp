#include "../Headers/Titulo.h"

Titulo::Titulo(
    CodigoTitulo codigo,
    Name emissor,
    Setor setor,
    Data emissao,
    Data vencimento,
    Dinheiro valor
) : codigo(codigo),
    emissor(emissor),
    setor(setor),
    emissao(emissao),
    vencimento(vencimento),
    valor(valor) {}

void Titulo::setCodigo(CodigoTitulo& codigo) {
    this->codigo = codigo;
}

void Titulo::setEmissor(Name& emissor) {
    this->emissor = emissor;
}

void Titulo::setSetor(Setor& setor) {
    this->setor = setor;
}

void Titulo::setEmissao(Data& emissao) {
    this->emissao = emissao;
}

void Titulo::setVencimento(Data& vencimento) {
    this->vencimento = vencimento;
}

void Titulo::setValor(Dinheiro& valor) {
    this->valor = valor;
}

CodigoTitulo Titulo::getCodigo() {
    return codigo;
}

Name Titulo::getEmissor()  {
    return emissor;
}

Setor Titulo::getSetor()  {
    return setor;
}

Data Titulo::getEmissao()  {
    return emissao;
}

Data Titulo::getVencimento() {
    return vencimento;
}

Dinheiro Titulo::getValor() {
    return valor;
}