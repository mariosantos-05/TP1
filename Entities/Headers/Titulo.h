#ifndef TITULO_H
#define TITULO_H
#include <string>
#include "../../Domains/Headers/CodigoTitulo.h"
#include "../../Domains/Headers/Nome.h"
#include "../../Domains/Headers/Setor.h"
#include "../../Domains/Headers/Data.h"
#include "../../Domains/Headers/Dinheiro.h"

class Titulo {

    private:
        CodigoTitulo codigo;
        Name emissor;
        Setor setor;
        Data emissao;
        Data vencimento;
        Dinheiro valor;

    public:

        Titulo(
          CodigoTitulo codigo,
          Name emissor,
          Setor setor,
          Data emissao,
          Data vencimento,
          Dinheiro valor
        );

        void setCodigo(CodigoTitulo& codigo);
        void setEmissor(Name& emissor);
        void setSetor(Setor& setor);
        void setEmissao(Data& emissao);
        void setVencimento(Data& vencimento);
        void setValor(Dinheiro& valor);

        CodigoTitulo getCodigo();
        Name getEmissor();
        Setor getSetor();
        Data getEmissao();
        Data getVencimento();
        Dinheiro getValor();

};


#endif