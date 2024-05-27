#include "../Headers/Pagamento.h"
Pagamento::Pagamento(std::string data, std::string estado, int percentual)
    : data(data), estado(estado), percentual(percentual) {}

void Pagamento::setData(std::string data) {
    this->data.setData(data);
}

void Pagamento::setEstado(std::string estado) {
    this->estado.setEstado(estado);
}

void Pagamento::setPercentual(int percentual) {
    this->percentual.setPercentual(percentual);
}

std::string Pagamento::getData() {
    return data.getData();
}

std::string Pagamento::getEstado() {
    return estado.getEstado();
}

int Pagamento::getPercentual() {
    return percentual.getPercentual();
}
