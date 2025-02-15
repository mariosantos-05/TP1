#include "../Headers/Percentual.h"

void Percentual::validar(int percentual){ 
    if(percentual<0 || percentual>100){ //Verifies format
        throw std::invalid_argument("Tamanho invalido, favor escolher numero de 0 a 100"); 
    }
};
void Percentual::setPercentual(int percentual){ 
    validar(percentual); 
    this->percentual = percentual; 
};
int Percentual::getPercentual(){ 
    return percentual; 
};
Percentual::Percentual(int percentual){
    setPercentual(percentual);
}