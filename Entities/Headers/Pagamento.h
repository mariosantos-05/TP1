#ifndef PAGAMENTO_H
#define PAGAMENTO_H

#include <string>
#include "../../Domains/Headers/Data.h"
#include "../../Domains/Headers/Estado.h"
#include "../../Domains/Headers/Percentual.h"

class Pagamento {
private:
    Data data;
    Estado estado;
    Percentual percentual;

public:
    Pagamento(std::string data, std::string estado, int percentual);

    void setData(std::string data);
    void setEstado(std::string estado);
    void setPercentual(int percentual);

    std::string getData();
    std::string getEstado();
    int getPercentual();
};

#endif // PAGAMENTO_H
