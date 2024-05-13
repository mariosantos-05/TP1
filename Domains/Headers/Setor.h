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
     * @throw Throws an exception if the format is invalid.
     */
    void set(std::string setor);

    /**
     * @brief Gets the stored sector.
     * @return The stored sector.
     */
    std::string get();
};
