#ifndef NAME_H
#define NAME_H
#include <string>       /**< For string manipulation. */
#include <algorithm>    /**< For algorithms like std::count and std::remove. */
#include <stdexcept>

/**
* @brief Class representing the Name
*/
class Name{
private:
    std::string Names;  /**< The name string. */
    /** 
     * @throw Throws an exception if the format is invalid.
     */
    void validateName(std::string name);
public:
    /**
     * @brief Constructor for Name.
     * @param name The name string.
     */
    Name(std::string name);

    /**
     * @brief Setter for the name.
     * @param name The name string.
     */
    void setName(std::string name);

    /**
     * @brief Getter for the name.
     * @return The name string.
     */
    std::string getName();
};

#endif