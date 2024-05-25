#ifndef TITULO_H
#define TITULO_H
#include <string>
#include "../../Domains/Headers/CodigoTitulo.h"
#include "../../Domains/Headers/Nome.h"
#include "../../Domains/Headers/Setor.h"
#include "../../Domains/Headers/Data.h"
#include "../../Domains/Headers/ValorMonetario.h"

class Titulo {

    private:
        CodigoTitulo codigo;
        Name emissor;
        Setor setor;
        Data emissao;
        Data vencimento;
        ValorMonetario valor;

    public:

        Titulo(
            std::string codigo,
            std::string emissor,
            std::string setor,
            std::string emissao,
            std::string vencimento,
            float valor
        );

        void setCodigo(std::string codigo);
        void setEmissor(std::string emissor);
        void setSetor(std::string setor);
        void setEmissao(std::string emissao);
        void setVencimento(std::string vencimento);
        void setValor(float valor);

        std::string getCodigo();
        std::string getEmissor();
        std::string getSetor();
        std::string getEmissao();
        std::string getVencimento();
        float getValor();

};


#endif