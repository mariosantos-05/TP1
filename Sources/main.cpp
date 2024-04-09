#include <iostream>
#include "Dinheiro.h"
#include "Percentual.h"
#include "CPF.h"
#include "Codigo_de_pagamento.h"

//For now this file only gonna be used for us to test our classes

int main() {
    Valor dinheiro = Valor(10);
    std::cout << dinheiro.getValor() << std::endl;
    return 0;
    
}

//how to test compile (g++ -o main main.cpp + hearders and Sources)