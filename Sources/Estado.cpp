#include "estado.h"

void Estado::validar(string estado){
    bool valid = false; //Indicates format validity
    string estados[3] = {"Previsto","Liquidado","Inadimplente"}; //Valid states

    for(string elem : estados){ 
        if (elem == estado){ 
            valid = true; //Valid format
        };
    };
    
    if(!valid) {throw invalid_argument("Formato invalido, favor inserir Previsto, Liquidado ou Inadimplente");}
};
string Estado::get(){ 
    return estado;
};
void Estado::set(string estado){ 
    validar(estado);
    this->estado = estado;
};
Estado::Estado(string estado){
    set(estado);
};

