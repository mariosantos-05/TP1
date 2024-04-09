#include <iostream>
#include "../Headers/valor.h"

//For now this file only gonna be used for us to test our classes

int main() {
    Valor dinheiro = Valor(10);
    std::cout << dinheiro.getValor() << std::endl;
    return 0;
    
}