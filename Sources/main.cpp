#include <iostream>
#include "Percentual.h"
#include "CPF.h"
#include "Data.h"
#include "Dinheiro.h"

//For now this file only gonna be used for us to test our classes

int main() {

    Data nova_data("30-05-2100");
    std::cout << nova_data.get() << std::endl;
    nova_data.set("30-06-2000");
    std::cout << nova_data.get() << std::endl;
    
}

//how to test compile (g++ -o main main.cpp + hearders and Sources)
