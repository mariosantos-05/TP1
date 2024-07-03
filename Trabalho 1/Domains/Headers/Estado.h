#ifndef ESTADO_H
#define ESTADO_H
#include <iostream>
#include <string>
using std::string;

/**
* @brief Class representing the State
*/
class Estado {
private:
    std::string estado; /**< Stored state */
    void validar(std::string estado);
public:

    /**
     * @brief Constructor for the Estado class.
     * @param estado The initial state to be stored.
     */
    Estado(std::string estado);

    /**
     * @brief Sets the state to be stored.
     * @param estado The state to be stored.
     * @remark the valid format is one of the three "Previsto" or "Liquidado" or "Inadimplente"
     * @throw invalid_argument If the value is in the wrong format.
     */
    void setEstado(std::string estado);
    
    /**
     * @brief Gets the stored state.
     * @return The stored state.
     * @remark the given format is one of the three "Previsto" or "Liquidado" or "Inadimplente"
     */
    std::string getEstado();
};

#endif