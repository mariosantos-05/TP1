#ifndef PERCENTUAL_H_INCLUDED
#define PERCENTUAL_H_INCLUDED
#include <iostream>
#include <stdexcept> 

/**
* @brief Class representing the Percentual
*/
class Percentual {
private:
    int percentual; 
    void validar(int percentual);

public:
    /**
     * @brief Constructor for the Percentual class.
     * @param percentual The initial percentage value to be stored.
     */
    Percentual(int percentual);

    /**
     * @brief Sets the percentage value.
     * @param percentual The percentage value to be stored.
     * @throw invalid_argument If the value is invalid.
     */
    void setPercentual(int percentual);

    /**
     * @brief Gets the stored percentage value.
     * @return The stored percentage value.
     */
    int getPercentual();
};

#endif // PERCENTUAL_H_INCLUDED
