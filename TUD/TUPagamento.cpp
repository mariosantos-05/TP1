#include "TUPagamento.h"
#include "../Entities\Headers\Pagamento.h"
#include <string>
#include <stdexcept>


void TUPagamento::setUp(){

    pagamento = new Pagamento("11111111 11", "11-11-11","Liquidado",30);
    estado = SUCESSO;
}

void TUPagamento::tearDown(){

    delete pagamento;

}
void TUPagamento::testarCenarioValido(){
    pagamento->setCodigo(CODIGO_PAGAMENTO_VALIDO);
    if(pagamento->getCodigo() != CODIGO_PAGAMENTO_VALIDO)
        estado = FALHA;

    pagamento->setData(DATA_VALIDA);
    if(pagamento->getData() != DATA_VALIDA)
        estado = FALHA;

    pagamento->setEstado(ESTADO_VALIDO);
    if(pagamento->getEstado() != ESTADO_VALIDO)
        estado = FALHA;

    pagamento->setPercentual(PERCENTUAL_VALIDO);
    if(pagamento->getPercentual() != PERCENTUAL_VALIDO)
        estado = FALHA;


}


int TUPagamento::run(){
    setUp();
    testarCenarioValido();
    tearDown();
    return estado;
}

int main(){
    TUPagamento teste;
    
    teste.run();

    return 0;

}




