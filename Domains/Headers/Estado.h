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
     * @throw Throws an exception if the format is invalid.
     */
    void set(std::string estado);
    /**
     * @brief Gets the stored state.
     * 
     * @return The stored state.
     */
    std::string get();
};
