#ifndef VALORMONETARIO_H
#define VALORMONETARIO_H
#include <string>
#include <iostream>
#include <stdexcept> 

/**
* @brief Class representing the Monetary Value
*/
class ValorMonetario {
private:
    float valor;
    void validateValorMonetario(float valor);
public:
    /**
     * @brief Constructor for the Valor class.
     * @param valor The monetary value to initialize.
     */
    ValorMonetario(float valor);

    /**
     * @brief Sets the monetary value.
     * @param valor The new monetary value.
     * @throw invalid_argument If the value is in the wrong format.
     */
    void setValorMonetario(float valor);

    /**
     * @brief Gets the monetary value.
     * @return The monetary value.
     */
    float getValorMonetario();
};

#endif
