#include "Inv_Persistence_Unit.h"

/*
std::list<ElementoResultado>& ComandoSQL::getListaResultado() {
        return listaResultado;
}

void ComandoSQL::clearListaResultado() {
        listaResultado.clear();
}*/

// Implementações das classes ComandoSQL específicas


Comando_Criar_Titulo::Comando_Criar_Titulo(Titulo titulo) {
        comandoSQL = "INSERT INTO Titulo VALUES (";
        comandoSQL += "'" + titulo.getCodigo() + "', ";
        comandoSQL += "'" + titulo.getEmissor() + "', ";
        comandoSQL += "'" + titulo.getSetor() + "', ";
        comandoSQL += "'" + titulo.getEmissao() + "', ";
        comandoSQL += "'" + titulo.getVencimento() + "', ";
        comandoSQL += "'" + std::to_string(titulo.getValor()) + "')";
}


Comando_Ler_Titulo::Comando_Ler_Titulo(Titulo titulo) {
        comandoSQL = "SELECT * FROM Titulo WHERE codigo = '" + titulo.getCodigo() + "'";
}

Titulo Comando_Ler_Titulo::getResultado() {
        if (listaResultado.empty()) {
                throw EErroPersistencia("Lista de resultados vazia.");
        }

        std::string codigo, emissor, setor, emissao, vencimento;
        float valor;

        // Extract values from listaResultado
        ElementoResultado resultado;

        resultado = listaResultado.back();
        listaResultado.pop_back();
        codigo = resultado.getValorColuna();

        resultado = listaResultado.back();
        listaResultado.pop_back();
        emissor = resultado.getValorColuna();

        resultado = listaResultado.back();
        listaResultado.pop_back();
        setor = resultado.getValorColuna();

        resultado = listaResultado.back();
        listaResultado.pop_back();
        emissao = resultado.getValorColuna();

        resultado = listaResultado.back();
        listaResultado.pop_back();
        vencimento = resultado.getValorColuna();

        resultado = listaResultado.back();
        listaResultado.pop_back();
        valor = std::stof(resultado.getValorColuna());

        // Construct the Titulo object with the extracted values
        Titulo titulo(codigo, emissor, setor, emissao, vencimento, valor);

        return titulo;
}



Comando_Atualizar_Titulo::Comando_Atualizar_Titulo(Titulo titulo) {
        comandoSQL = "UPDATE Titulo SET ";
        comandoSQL += "emissor = '" + titulo.getEmissor() + "', ";
        comandoSQL += "setor = '" + titulo.getSetor() + "', ";
        comandoSQL += "emissao = '" + titulo.getEmissao() + "', ";
        comandoSQL += "vencimento = '" + titulo.getVencimento() + "', ";
        comandoSQL += "valor = '" + std::to_string(titulo.getValor()) + "' ";
        comandoSQL += "WHERE codigo = '" + titulo.getCodigo() + "'";
}


Comando_Listar_Titulos::Comando_Listar_Titulos(Conta conta) {
        comandoSQL = "SELECT * FROM Titulo WHERE conta = '" + conta.getCodigocpf() + "'";
}


Comando_Excluir_Titulo::Comando_Excluir_Titulo(Titulo titulo) {
        comandoSQL = "DELETE FROM Titulo WHERE codigo = '" + titulo.getCodigo() + "'";
}


Comando_Criar_Pagamento::Comando_Criar_Pagamento(Pagamento pagamento) {
        comandoSQL = "INSERT INTO pagamento VALUES (";
        comandoSQL += "'" + pagamento.getCodigo() + "', ";
        comandoSQL += "'" + pagamento.getData() + "', ";
        comandoSQL += "'" + std::to_string(pagamento.getPercentual()) + "', ";
        comandoSQL += "'" + pagamento.getEstado() + "')";
}


Comando_Ler_Pagamento::Comando_Ler_Pagamento(Pagamento pagamento) {
        comandoSQL = "SELECT * FROM pagamento WHERE codigo = '" + pagamento.getCodigo() + "'";
}

Pagamento Comando_Ler_Pagamento::getResultado() {
        if (listaResultado.empty()) {
                throw EErroPersistencia("Lista de resultados vazia.");
        }

        std::string codigo, data, estado;
        int percentual;

        // Extract values from listaResultado
        ElementoResultado resultado;

        resultado = listaResultado.back();
        listaResultado.pop_back();
        codigo = resultado.getValorColuna();

        resultado = listaResultado.back();
        listaResultado.pop_back();
        data = resultado.getValorColuna();

        resultado = listaResultado.back();
        listaResultado.pop_back();
        percentual = std::stoi(resultado.getValorColuna());

        resultado = listaResultado.back();
        listaResultado.pop_back();
        estado = resultado.getValorColuna();

        // Construct the Pagamento object with the extracted values
        Pagamento pagamento(codigo, data, estado, percentual);

        return pagamento;
}


Comando_Atualizar_Pagamento::Comando_Atualizar_Pagamento(Pagamento pagamento) {
        comandoSQL = "UPDATE pagamento SET ";
        comandoSQL += "data = '" + pagamento.getData() + "', ";
        comandoSQL += "percentual = '" + std::to_string(pagamento.getPercentual()) + "', ";
        comandoSQL += "estado = '" + pagamento.getEstado() + "' ";
        comandoSQL += "WHERE codigo = '" + pagamento.getCodigo() + "'";
}


Comando_Listar_Pagamentos::Comando_Listar_Pagamentos(Titulo titulo) {
        comandoSQL = "SELECT * FROM pagamento WHERE titulo_codigo = '" + titulo.getCodigo() + "'";
}


Comando_Excluir_Pagamento::Comando_Excluir_Pagamento(Pagamento pagamento) {
        comandoSQL = "DELETE FROM pagamento WHERE codigo = '" + pagamento.getCodigo() + "'";
}
