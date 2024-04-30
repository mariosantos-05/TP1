#ifndef DINHEIRO_H
#define DINHEIRO_H
#include <string>
#include <iostream>
#include <stdexcept> 

/**
* @brief Class representing the Monetary Value
*/
class Valor {
private:
    float valor;
    bool validateValor(float valor);
public:
    /**
     * @brief Constructor for the Valor class.
     * @param valor The monetary value to initialize.
     */
    Valor(float valor);

    /**
     * @brief Sets the monetary value.
     * @param valor The new monetary value.
     * @throw invalid_argument If the value is in the wrong format.
     */
    void setValor(float valor);

    /**
     * @brief Gets the monetary value.
     * @return The monetary value.
     */
    float getValor();
};

#endif
