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
     * @remark the valid format is "First" or "First Second" up to two names with each with a min of 3 and a max of 10 characters.
     * @throw invalid_argument If the value is in the wrong format.
     */
    void setName(std::string name);

    /**
     * @brief Getter for the name.
     * @return The name string.
     * @remark the given format is "First" or "First Second".
     */
    std::string getName();
};

#endif