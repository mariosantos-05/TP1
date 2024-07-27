#include "Inv_Controler.h"
#include <iostream>

//---------------------------------------------------------------------------
// Implementações de CntrInteracao.

void CntrInteracao::notificarErroAcesso(const std::string& mensagem) {
    std::cerr << "Erro de acesso: " << mensagem << std::endl;
}

void CntrInteracao::notificarErroDigitacao(const std::string& mensagem) {
    std::cerr << "Erro de digitação: " << mensagem << std::endl;
}

void CntrInteracao::notificarSucessoOperacao(const std::string& mensagem) {
    std::cout << "Sucesso: " << mensagem << std::endl;
}

//---------------------------------------------------------------------------
// Implementações de CntrAutenticacao.

void CntrAutenticacao::executar() {
    // Implementar lógica de autenticação aqui.
    std::cout << "Autenticação não implementada." << std::endl;
}

//---------------------------------------------------------------------------
// Implementações de CntrTitulo.

void CntrTitulo::criarTitulo(const Titulo& titulo) {
    try {
        Comando_Criar_Titulo comando(titulo);
        comando.executar();
        notificarSucessoOperacao("Título criado com sucesso.");
    } catch (const EErroPersistencia& e) {
        notificarErroAcesso(e.what());
    }
}

Titulo CntrTitulo::lerTitulo(const Titulo& titulo) {
    try {
        Comando_Ler_Titulo comando(titulo);
        comando.executar();
        return comando.getResultado();
    } catch (const EErroPersistencia& e) {
        notificarErroAcesso(e.what());
        // Returning an empty Titulo or handle as appropriate.
        return Titulo();
    }
}

void CntrTitulo::atualizarTitulo(const Titulo& titulo) {
    try {
        Comando_Atualizar_Titulo comando(titulo);
        comando.executar();
        notificarSucessoOperacao("Título atualizado com sucesso.");
    } catch (const EErroPersistencia& e) {
        notificarErroAcesso(e.what());
    }
}

void CntrTitulo::listarTitulos(const Conta& conta) {
    try {
        Comando_Listar_Titulos comando(conta);
        comando.executar();
        // Process results from comando.getResultado() if needed.
        notificarSucessoOperacao("Titulos listados com sucesso.");
    } catch (const EErroPersistencia& e) {
        notificarErroAcesso(e.what());
    }
}

void CntrTitulo::excluirTitulo(const Titulo& titulo) {
    try {
        Comando_Excluir_Titulo comando(titulo);
        comando.executar();
        notificarSucessoOperacao("Título excluído com sucesso.");
    } catch (const EErroPersistencia& e) {
        notificarErroAcesso(e.what());
    }
}

void CntrTitulo::executar() {
    // Implementar lógica de interação com o usuário para títulos aqui.
    std::cout << "Operações de título não implementadas." << std::endl;
}

//---------------------------------------------------------------------------
// Implementações de CntrPagamento.

void CntrPagamento::criarPagamento(const Pagamento& pagamento) {
    try {
        Comando_Criar_Pagamento comando(pagamento);
        comando.executar();
        notificarSucessoOperacao("Pagamento criado com sucesso.");
    } catch (const EErroPersistencia& e) {
        notificarErroAcesso(e.what());
    }
}

Pagamento CntrPagamento::lerPagamento(const Pagamento& pagamento) {
    try {
        Comando_Ler_Pagamento comando(pagamento);
        comando.executar();
        return comando.getResultado();
    } catch (const EErroPersistencia& e) {
        notificarErroAcesso(e.what());
        // Returning an empty Pagamento or handle as appropriate.
        return Pagamento();
    }
}

void CntrPagamento::atualizarPagamento(const Pagamento& pagamento) {
    try {
        Comando_Atualizar_Pagamento comando(pagamento);
        comando.executar();
        notificarSucessoOperacao("Pagamento atualizado com sucesso.");
    } catch (const EErroPersistencia& e) {
        notificarErroAcesso(e.what());
    }
}

void CntrPagamento::listarPagamentos(const Titulo& titulo) {
    try {
        Comando_Listar_Pagamentos comando(titulo);
        comando.executar();
        // Process results from comando.getResultado() if needed.
        notificarSucessoOperacao("Pagamentos listados com sucesso.");
    } catch (const EErroPersistencia& e) {
        notificarErroAcesso(e.what());
    }
}

void CntrPagamento::excluirPagamento(const Pagamento& pagamento) {
    try {
        Comando_Excluir_Pagamento comando(pagamento);
        comando.executar();
        notificarSucessoOperacao("Pagamento excluído com sucesso.");
    } catch (const EErroPersistencia& e) {
        notificarErroAcesso(e.what());
    }
}

void CntrPagamento::executar() {
    // Implementar lógica de interação com o usuário para pagamentos aqui.
    std::cout << "Operações de pagamento não implementadas." << std::endl;
}

