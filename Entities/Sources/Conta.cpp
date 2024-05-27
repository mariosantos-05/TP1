#include "../Headers/Conta.h"

Conta::Conta(std::string nome, std::string cpf, std::string senha)
    : nome(nome), cpf(cpf), senha(senha) {}

void Conta::setCodigocpf(std::string cpf) {
    this->cpf.setCPF(cpf);
}

void Conta::setNome(std::string nome) {
    this->nome.setName(nome);
}

void Conta::setSenha(std::string senha) {
    this->senha.setSenha(senha);
}

std::string Conta::getCodigocpf() {
    return this->cpf.getCPF();
}

std::string Conta::getSenha() {
    return this->senha.get();
}

std::string Conta::getNome() {
    return this->nome.getName();
}
