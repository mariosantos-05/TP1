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
    /**
     * @throw invalid_argument if the value is invalid.
    */
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
     */
    void set(int percentual);

    /**
     * @brief Gets the stored percentage value.
     * @return The stored percentage value.
     */
    int get();
};

#endif // PERCENTUAL_H_INCLUDED
