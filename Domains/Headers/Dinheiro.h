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
     * @remark the valid format is a number that goes between 0 and 100000000.
     * @throw invalid_argument If the value is in the wrong format.
     */
    void setDinheiro(float valor);

    /**
     * @brief Gets the monetary value.
     * @return The monetary value.
     * @remark the given format is a number
     */
    float getDinheiro();
};

#endif
