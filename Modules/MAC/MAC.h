#include "../Interfaces/Int_MAC.h"

#include <stdexcept>
#include <iostream>
#include <cstdlib>

using namespace std;


class CntrIAConta:public IAConta {
private:
    ISConta *cntrISConta;            
public:
    Conta ler(CPF*) ;                        
    void atualizar(CPF*);                       
    void deletar(CPF*);                        
    void setCntrISConta(ISConta*) ;      
};

void inline CntrIAConta::setCntrISConta(ISConta *cntrISConta){
        this->cntrISConta = cntrISConta;
}