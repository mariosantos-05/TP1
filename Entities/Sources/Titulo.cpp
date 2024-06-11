#include "../Headers/Titulo.h"

Titulo::Titulo(
    std::string codigo,
    std::string emissor,
    std::string setor,
    std::string emissao,
    std::string vencimento,
    float valor
) : codigo(codigo),
    emissor(emissor), 
    setor(setor), 
    emissao(emissao), 
    vencimento(vencimento), 
    valor(valor) {}

void Titulo::setCodigo(std::string codigo) {
    this->codigo.setTitlecode(codigo);
}

void Titulo::setEmissor(std::string emissor) {
    this->emissor.setName(emissor);
}

void Titulo::setSetor(std::string setor) {
    this->setor.setSetor(setor);
}

void Titulo::setEmissao(std::string emissao) {
    this->emissao.setData(emissao);
}

void Titulo::setVencimento(std::string vencimento) {
    this->vencimento.setData(vencimento);
}

void Titulo::setValor(float valor) {
    this->valor.setDinheiro(valor);
}

std::string Titulo::getCodigo() {
    return this-> codigo.getTitlecode();
}

std::string Titulo::getEmissor()  {
    return this->emissor.getName();
}

std::string Titulo::getSetor()  {
    return this->setor.getSetor();
}

std::string Titulo::getEmissao()  {
    return this->emissao.getData();
}

std::string Titulo::getVencimento() {
    return this->vencimento.getData();
}

float Titulo::getValor() {
    return this->valor.getDinheiro();
}