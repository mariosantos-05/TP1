#ifndef DINHEIRO_H
#define DINHEIRO_H
#include <string>
#include <iostream>
#include <stdexcept> 

/**
* @brief Class representing the Monetary Value
*/
class Dinheiro {
private:
    float valor;
    void validateDinheiro(float valor);
public:
    /**
     * @brief Constructor for the Valor class.
     * @param valor The monetary value to initialize.
     */
    Dinheiro(float valor);

    /**
     * @brief Sets the monetary value.
     * @param valor The new monetary value.
     * @throw invalid_argument If the value is in the wrong format.
     */
    void setDinheiro(float valor);

    /**
     * @brief Gets the monetary value.
     * @return The monetary value.
     */
    float getDinheiro();
};

#endif
