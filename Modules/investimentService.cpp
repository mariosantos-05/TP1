#include "investimentService.h"

void InvestimentoService::Criar_Titulo(const Titulo& titulo) {
    try {
        Comando_Criar_Titulo cmd(titulo);
        cmd.executar();
    } catch (EErroPersistencia& e) {
        std::cerr << "Erro ao criar titulo: " << e.what() << std::endl;
    }
}

Titulo InvestimentoService::Ler_Titulo(const Titulo& titulo) {
    try {
        Comando_Ler_Titulo cmd(titulo);
        cmd.executar();
        Titulo resultado = cmd.getResultado();
        ComandoSQL::clearListaResultado();  // Clear results after usage
        return resultado;
    } catch (EErroPersistencia& e) {
        std::cerr << "Erro ao ler titulo: " << e.what() << std::endl;
        throw; // Re-throw the exception after logging
    }
}

void InvestimentoService::Atualizar_Titulo(const Titulo& titulo) {
    try {
        Comando_Atualizar_Titulo cmd(titulo);
        cmd.executar();
    } catch (EErroPersistencia& e) {
        std::cerr << "Erro ao atualizar titulo: " << e.what() << std::endl;
    }
}

std::vector<Titulo> InvestimentoService::Listar_Titulos(const Conta conta) {
    try {
        Comando_Listar_Titulos cmd(conta);
        cmd.executar();
        std::vector<Titulo> titulos;
        while (!ComandoSQL::getListaResultado().empty()) {
            Titulo titulo = cmd.getResultado();
            titulos.push_back(titulo);
        }
        ComandoSQL::clearListaResultado();  // Clear results after usage
        return titulos;
    } catch (EErroPersistencia& e) {
        std::cerr << "Erro ao listar titulos: " << e.what() << std::endl;
        return {};
    }
}

void InvestimentoService::Excluir_Titulo(const Titulo& titulo) {
    try {
        Comando_Excluir_Titulo cmd(titulo);
        cmd.executar();
    } catch (EErroPersistencia& e) {
        std::cerr << "Erro ao excluir titulo: " << e.what() << std::endl;
    }
}

void InvestimentoService::Criar_Pagamento(const Pagamento& pagamento) {
    try {
        Comando_Criar_Pagamento cmd(pagamento);
        cmd.executar();
    } catch (EErroPersistencia& e) {
        std::cerr << "Erro ao criar pagamento: " << e.what() << std::endl;
    }
}

Pagamento InvestimentoService::Ler_Pagamento(const Pagamento& pagamento) {
    try {
        Comando_Ler_Pagamento cmd(pagamento);
        cmd.executar();
        Pagamento resultado = cmd.getResultado();
        ComandoSQL::clearListaResultado();  // Clear results after usage
        return resultado;
    } catch (EErroPersistencia& e) {
        std::cerr << "Erro ao ler pagamento: " << e.what() << std::endl;
        throw; // Re-throw the exception after logging
    }
}

void InvestimentoService::Atualizar_Pagamento(const Pagamento& pagamento) {
    try {
        Comando_Atualizar_Pagamento cmd(pagamento);
        cmd.executar();
    } catch (EErroPersistencia& e) {
        std::cerr << "Erro ao atualizar pagamento: " << e.what() << std::endl;
    }
}

std::vector<Pagamento> InvestimentoService::Listar_Pagamentos(const Titulo titulo) {
    try {
        Comando_Listar_Pagamentos cmd(titulo);
        cmd.executar();
        std::vector<Pagamento> pagamentos;
        while (!ComandoSQL::getListaResultado().empty()) {
            Pagamento pagamento = cmd.getResultado();
            pagamentos.push_back(pagamento);
        }
        ComandoSQL::clearListaResultado();  // Clear results after usage
        return pagamentos;
    } catch (EErroPersistencia& e) {
        std::cerr << "Erro ao listar pagamentos: " << e.what() << std::endl;
        return {};
    }
}

void InvestimentoService::Excluir_Pagamento(const Pagamento& pagamento) {
    try {
        Comando_Excluir_Pagamento cmd(pagamento);
        cmd.executar();
    } catch (EErroPersistencia& e) {
        std::cerr << "Erro ao excluir pagamento: " << e.what() << std::endl;
    }
}
