#include "Percentual.h"

bool Percentual::validar(int percentual){ //Method implementation
    if(percentual<0 || percentual>100){ //Verifies format
        return false; //If invalid
    };
    return true; //If not invalid
};
void Percentual::set(int percentual){ //Method implementation
    if (validar(percentual)){ //Verifies validity
        this->percentual = percentual; //Sets the percentage value
    };
};
int Percentual::get(){ //Method implementation
    return percentual; //Gets the percentage value
};
Percentual::Percentual(int percentual){
    set(percentual);
}