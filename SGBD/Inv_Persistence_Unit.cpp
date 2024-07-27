#include "Inv_Persistence_Unit.h"

// Atributo estático.
std::list<ElementoResultado> ComandoSQL::listaResultado;

// Implementações de métodos da classe ErroPersistencia.
EErroPersistencia::EErroPersistencia(std::string mensagem) {
        this->mensagem = mensagem;
}

std::string EErroPersistencia::what() {
        return mensagem;
}

// Implementações de métodos da classe ElementoResultado.
void ElementoResultado::setNomeColuna(const std::string& nomeColuna) {
        this->nomeColuna = nomeColuna;
}

void ElementoResultado::setValorColuna(const std::string& valorColuna){
        this->valorColuna = valorColuna;
}

// Implementações de métodos da classe ComandoSQL.
void ComandoSQL::conectar() {
        rc = sqlite3_open(nomeBancoDados, &bd);
        if(rc != SQLITE_OK)
                throw EErroPersistencia("Erro na conexao ao banco de dados");
}

void ComandoSQL::desconectar() {
        rc = sqlite3_close(bd);
        if(rc != SQLITE_OK)
                throw EErroPersistencia("Erro na desconexao ao banco de dados");
}

void ComandoSQL::executar() {
        conectar();
        rc = sqlite3_exec(bd, comandoSQL.c_str(), callback, 0, &mensagem);
        if(rc != SQLITE_OK){
                sqlite3_free(mensagem);
                desconectar();
                throw EErroPersistencia("Erro na execucao do comando SQL");
        }
        desconectar();
}

int ComandoSQL::callback(void *NotUsed, int argc, char **valorColuna, char **nomeColuna){
        NotUsed = 0;
        ElementoResultado elemento;
        for(int i = 0; i < argc; i++) {
                elemento.setNomeColuna(nomeColuna[i]);
                elemento.setValorColuna(valorColuna[i] ? valorColuna[i] : "NULL");
                listaResultado.push_front(elemento);
        }
        return 0;
}

std::list<ElementoResultado>& ComandoSQL::getListaResultado() {
        return listaResultado;
}

void ComandoSQL::clearListaResultado() {
        listaResultado.clear();
}

// Implementações das classes ComandoSQL específicas

// Comando_Criar_Titulo
Comando_Criar_Titulo::Comando_Criar_Titulo(Titulo titulo) {
        comandoSQL = "INSERT INTO Titulo VALUES (";
        comandoSQL += "'" + titulo.getCodigo() + "', ";
        comandoSQL += "'" + titulo.getEmissor() + "', ";
        comandoSQL += "'" + titulo.getSetor() + "', ";
        comandoSQL += "'" + titulo.getEmissao() + "', ";
        comandoSQL += "'" + titulo.getVencimento() + "', ";
        comandoSQL += "'" + std::to_string(titulo.getValor()) + "')";
}

// Comando_Ler_Titulo
Comando_Ler_Titulo::Comando_Ler_Titulo(Titulo titulo) {
        comandoSQL = "SELECT * FROM Titulo WHERE codigo = '" + titulo.getCodigo() + "'";
}

Titulo Comando_Ler_Titulo::getResultado() {
    if(listaResultado.empty()) {
        throw EErroPersistencia("Lista de resultados vazia.");
    }

    Titulo titulo;
    ElementoResultado resultado;

    // Assuming the order of columns returned is the same as in the table definition
        resultado = listaResultado.back();
        listaResultado.pop_back();
        titulo.setCodigo(resultado.getValorColuna());

        resultado = listaResultado.back();
        listaResultado.pop_back();
        titulo.setEmissor(resultado.getValorColuna());

        resultado = listaResultado.back();
        listaResultado.pop_back();
        titulo.setSetor(resultado.getValorColuna());

        resultado = listaResultado.back();
        listaResultado.pop_back();
        titulo.setEmissao(resultado.getValorColuna());

        resultado = listaResultado.back();
        listaResultado.pop_back();
        titulo.setVencimento(resultado.getValorColuna());

        resultado = listaResultado.back();
        listaResultado.pop_back();
        titulo.setValor(std::stof(resultado.getValorColuna()));

        return titulo;
}

// Comando_Atualizar_Titulo
Comando_Atualizar_Titulo::Comando_Atualizar_Titulo(Titulo titulo) {
        comandoSQL = "UPDATE Titulo SET ";
        comandoSQL += "emissor = '" + titulo.getEmissor() + "', ";
        comandoSQL += "setor = '" + titulo.getSetor() + "', ";
        comandoSQL += "emissao = '" + titulo.getEmissao() + "', ";
        comandoSQL += "vencimento = '" + titulo.getVencimento() + "', ";
        comandoSQL += "valor = '" + std::to_string(titulo.getValor()) + "' ";
        comandoSQL += "WHERE codigo = '" + titulo.getCodigo() + "'";
}

// Comando_Listar_Titulos
Comando_Listar_Titulos::Comando_Listar_Titulos(Conta conta) {
        comandoSQL = "SELECT * FROM Titulo WHERE conta = '" + conta.getCodigocpf() + "'";
}

// Comando_Excluir_Titulo
Comando_Excluir_Titulo::Comando_Excluir_Titulo(Titulo titulo) {
        comandoSQL = "DELETE FROM Titulo WHERE codigo = '" + titulo.getCodigo() + "'";
}

// Comando_Criar_Pagamento
Comando_Criar_Pagamento::Comando_Criar_Pagamento(Pagamento pagamento) {
        comandoSQL = "INSERT INTO pagamento VALUES (";
        comandoSQL += "'" + pagamento.getCodigo() + "', ";
        comandoSQL += "'" + pagamento.getData() + "', ";
        comandoSQL += "'" + std::to_string(pagamento.getPercentual()) + "', ";
        comandoSQL += "'" + pagamento.getEstado() + "')";
}

// Comando_Ler_Pagamento
Comando_Ler_Pagamento::Comando_Ler_Pagamento(Pagamento pagamento) {
        comandoSQL = "SELECT * FROM pagamento WHERE codigo = '" + pagamento.getCodigo() + "'";
}

Pagamento Comando_Ler_Pagamento::getResultado() {
        if(listaResultado.empty()) {
            throw EErroPersistencia("Lista de resultados vazia.");
        }

        Pagamento pagamento;
        ElementoResultado resultado;

        // Assuming the order of columns returned is the same as in the table definition
        resultado = listaResultado.back();
        listaResultado.pop_back();
        pagamento.setCodigo(resultado.getValorColuna());

        resultado = listaResultado.back();
        listaResultado.pop_back();
        pagamento.setData(resultado.getValorColuna());

        resultado = listaResultado.back();
        listaResultado.pop_back();
        pagamento.setPercentual(std::stof(resultado.getValorColuna()));

        resultado = listaResultado.back();
        listaResultado.pop_back();
        pagamento.setEstado(resultado.getValorColuna());

        return pagamento;
}

// Comando_Atualizar_Pagamento
Comando_Atualizar_Pagamento::Comando_Atualizar_Pagamento(Pagamento pagamento) {
        comandoSQL = "UPDATE pagamento SET ";
        comandoSQL += "data = '" + pagamento.getData() + "', ";
        comandoSQL += "percentual = '" + std::to_string(pagamento.getPercentual()) + "', ";
        comandoSQL += "estado = '" + pagamento.getEstado() + "' ";
        comandoSQL += "WHERE codigo = '" + pagamento.getCodigo() + "'";
}

// Comando_Listar_Pagamentos
Comando_Listar_Pagamentos::Comando_Listar_Pagamentos(Titulo titulo) {
        comandoSQL = "SELECT * FROM pagamento WHERE titulo_codigo = '" + titulo.getCodigo() + "'";
}

Pagamento Comando_Listar_Pagamentos::getResultado() {
        if (listaResultado.empty()) {
            throw EErroPersistencia("Lista de resultados vazia.");
        }

        Pagamento pagamento;
        ElementoResultado resultado;

        resultado = listaResultado.back();
        listaResultado.pop_back();
        pagamento.setCodigo(resultado.getValorColuna());

        resultado = listaResultado.back();
        listaResultado.pop_back();
        pagamento.setData(resultado.getValorColuna());

        resultado = listaResultado.back();
        listaResultado.pop_back();
        pagamento.setPercentual(std::stof(resultado.getValorColuna()));

        resultado = listaResultado.back();
        listaResultado.pop_back();
        pagamento.setEstado(resultado.getValorColuna());

        return pagamento;
}

// Comando_Excluir_Pagamento
Comando_Excluir_Pagamento::Comando_Excluir_Pagamento(Pagamento pagamento) {
        comandoSQL = "DELETE FROM pagamento WHERE codigo = '" + pagamento.getCodigo() + "'";
}
