#include "Estado.h"

bool Estado::validar(string estado){
    string estados[3] = {"Previsto","Liquidado","Inadimplente"}; //Valid states
    for(string elem : estados){ //Loops through each valid state
        if (elem == estado){ //Verifies correspondence
            return true; //If valid
        };
    };
    return false; //If not valid
};
string Estado::get(){ //Returns the state value
    return estado;
};
void Estado::set(string estado){ //Determines the state to be stored
    if(validar(estado)){
        this->estado = estado;
    };
};
Estado::Estado(string estado){
    set(estado);
};

