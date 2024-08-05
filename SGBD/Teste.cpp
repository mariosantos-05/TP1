#include "Teste.h"


void TestComandoSQL::runTest() {
    try {
        executar();
        for (const auto& resultado : listaResultado) {
            cout << "Coluna: " << resultado.getNomeColuna() 
            << ", Valor: " << resultado.getValorColuna() << endl;
        }
    } catch (const EErroPersistencia& e) {
        cerr << "Erro: " << e.what() << endl;
    }
}