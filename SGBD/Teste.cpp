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

bool TestComandoSQL::autenticar(const string& cpf, const string& senha) {
    comandoSQL = "SELECT COUNT(*) FROM Conta WHERE cpf = '" + cpf + "' AND senha = '" + senha + "';";
    try {
        executar();
        if (!listaResultado.empty()) {
            const auto& resultado = listaResultado.front();
            return resultado.getValorColuna() == "1";
        }
    } catch (const EErroPersistencia& e) {
        cerr << "Erro: " << e.what() << endl;
    }
    return false;
}
