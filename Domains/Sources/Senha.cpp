#include "../Headers/Senha.h"

void Senha::validar(string senha){ //The password must consist of 6 non sequential numbers
    int password_lenght = senha.length(); 
    if ( password_lenght != 6){ //Verifies valid lenght
        throw std::invalid_argument("Tamanho invalido, favor inserir 6 caracteres"); 
    };

    string invalid_formats[8] = {"123456","234567","345678","456789",
    "654321","765432","87654","98765"}; //Increasing/Decreasing sequences are invalid

    for(string elem : invalid_formats){ //Checks for sequence passwords
        if (elem == senha){ 
            throw std::invalid_argument("Formato invalido, favor nao utilizar sequencias crescentes/decrescentes"); 
        };
    };
};

string Senha::get(){ 
    return senha;
};

void Senha::setSenha(string senha){ 
    validar(senha);
    this->senha = senha;
};

Senha::Senha(string senha){
    setSenha(senha);
}




