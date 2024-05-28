#ifndef PAGAMENTO_H
#define PAGAMENTO_H

#include <string>
#include "../../Domains/Headers/CodigoPagamento.h"
#include "../../Domains/Headers/Data.h"
#include "../../Domains/Headers/Estado.h"
#include "../../Domains/Headers/Percentual.h"

class Pagamento {
private:
    CodigoPagamento codigo;
    Data data;
    Estado estado;
    Percentual percentual;

public:
    Pagamento(std::string codigo,std::string data, std::string estado, int percentual);

    void setCodigo(std::string codigo);
    void setData(std::string data);
    void setEstado(std::string estado);
    void setPercentual(int percentual);

    std::string getCodigo();
    std::string getData();
    std::string getEstado();
    int getPercentual();
};

#endif // PAGAMENTO_H
