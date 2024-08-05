#ifndef INT_MAI2_INCLUDE
#define INT_MAI2_INCLUDE

#include "../Entities/Headers/Conta.h"
#include "../Entities/Headers/Pagamento.h"
#include "../Domains/Headers/Nome.h"
#include "../Domains/Headers/Senha.h"
#include <stdexcept>

using namespace std;
class InvestimentoService;

class Int_MAI2 {
public:

    virtual void criar_tela_investimentos() = 0;

    virtual void setCntrISInvestimentos(InvestimentoService* cntrInv) = 0;

    virtual ~Int_MAI2() {}
};

#endif
