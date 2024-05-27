#include "../Headers/Estado.h"

void Estado::validar(string estado){
    bool valid = false; //Indicates format validity
    string estados[3] = {"Previsto","Liquidado","Inadimplente"}; //Valid states

    for(string elem : estados){ 
        if (elem == estado){ 
            valid = true; //Valid format
        };
    };
    
    if(!valid) {throw std::invalid_argument("Formato invalido, favor inserir Previsto, Liquidado ou Inadimplente");}
};
string Estado::getEstado(){ 
    return estado;
};
void Estado::setEstado(string estado){ 
    validar(estado);
    this->estado = estado;
};
Estado::Estado(string estado){
    setEstado(estado);
};

