#include "../Headers/Pagamento.h"

Pagamento::Pagamento(std::string data, std::string estado, int percentual) {

    this->data.setData(data);
    this->estado.setEstado(estado);
    this->percentual.setPercentual(percentual);

}

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

std::string Pagamento::getPercentual() {
    return percentual.getPercentual();
}
