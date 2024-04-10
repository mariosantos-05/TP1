#include "Senha.h"

bool Senha::validar(string senha){ //The password must consist of 6 non sequential numbers
    int password_lenght = senha.length(); //Gets the password lenght
    if ( password_lenght != 6){ //Verifies valid lenght
        return false; //Invalid lenght
    };

    string invalid_formats[8] = {"123456","234567","345678","456789",
    "654321","765432","87654","98765"}; //Number sequences are invalid

    for(string elem : invalid_formats){ //Checks for sequence passwords
        if (elem == senha){ //If invalid
            return false; 
        };
    };
    return true; //If valid lenght and format

};

string Senha::get(){ //Returns the sector value
    return senha;
};

void Senha::set(string senha){ //Determines the sector to be stored
    if(validar(senha)) {
        this->senha = senha;
    };
};

Senha::Senha(string senha){
    set(senha);
}




