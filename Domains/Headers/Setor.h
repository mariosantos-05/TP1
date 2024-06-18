#ifndef SETOR_H
#define SETOR_H
#include <iostream>
#include <string>
#include <stdexcept> 
using std::string;

/**
* @brief Class representing the Field
*/
class Setor {
private:
    std::string setor;
    void validar(std::string setor);

public:
    /**
     * @brief Constructor for the Setor class.
     * @param setor The initial sector to be stored.
     */
    Setor(std::string setor);

    /**
     * @brief Sets the sector to be stored.
     * @param setor The sector to be stored.
     * @remark the valid format is of one of the following fields "Agricultura, Construção civil, Energia, Finanças, Imobiliário, Papel e celulose Pecuária, Química, petroquímica Metalurgia, siderurgia,  Mineração"
     * @throw invalid_argument If the value is in the wrong format.
     */
    void setSetor(std::string setor);

    /**
     * @brief Gets the stored sector.
     * @return The stored sector.
     * @remark the given format is one of the fields passed onto the setter
     */
    std::string getSetor();
};

#endif