#ifndef PAGAMENTO_H
#define PAGAMENTO_H

#include <string>
#include "../../Domains/Headers/Data.h"
#include "../../Domains/Headers/Estado.h"
#include "../../Domains/Headers/Percentual.h"

class Conta {
private:
    Data data;
    Estado estado;
    Percentual percentual;

public:
    Percentual(std::string data, std::string estado, int percentual);

    void setData(std::string nome);
    void setEstado(std::string senha);
    void setPercentual(std::string cpf);

    std::string getData();
    std::string getEstado();
    int getPercentual();
};

#endif // PAGAMENTO_H
