#ifndef UnidadeControladoraH
#define UnidadeControladoraH

#include "Inv_Persistence_Unit.h"


//---------------------------------------------------------------------------
// Classe CntrInteracao.

class CntrInteracao {
protected:
    void notificarErroAcesso(const std::string& mensagem);
    void notificarErroDigitacao(const std::string& mensagem);
    void notificarSucessoOperacao(const std::string& mensagem);
public:
    virtual void executar() = 0;
};

//---------------------------------------------------------------------------
// Classe CntrAutenticacao.

class CntrAutenticacao : public CntrInteracao {
public:
    CntrAutenticacao() {}
    void executar() override;
};

//---------------------------------------------------------------------------
// Classe CntrTitulo.

class CntrTitulo : public CntrInteracao {
private:
    void criarTitulo(const Titulo& titulo);
    Titulo lerTitulo(const Titulo& titulo);
    void atualizarTitulo(const Titulo& titulo);
    void listarTitulos(const Conta& conta);
    void excluirTitulo(const Titulo& titulo);
public:
    CntrTitulo() {}
    void executar() override;
};

//---------------------------------------------------------------------------
// Classe CntrPagamento.

class CntrPagamento : public CntrInteracao {
private:
    void criarPagamento(const Pagamento& pagamento);
    Pagamento lerPagamento(const Pagamento& pagamento);
    void atualizarPagamento(const Pagamento& pagamento);
    void listarPagamentos(const Titulo& titulo);
    void excluirPagamento(const Pagamento& pagamento);
public:
    CntrPagamento() {}
    void executar() override;
};

#endif // UnidadeControladoraH
