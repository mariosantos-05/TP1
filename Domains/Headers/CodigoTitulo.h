#ifndef CODIGOTITULO_H
#define CODIGOTITULO_H
#include <string>     /**< For string manipulation. */
#include <regex>      /**< For regular expressions. */
#include <stdexcept>
#include <cctype>
/**
* @brief Class representing the title code
*/
class CodigoTitulo {
    private:
        std::string titleCode;
        void validatetitleCode(std::string code);
        std::string categoria;

    public:
        /**
        * @brief Constructor for the title code.
        * @param code : number string.
        */
        CodigoTitulo(std::string code);

        /**
        * @brief Setter for the title code number.
        * @param  code number string.
        * @throw Throws an exception if the format is invalid.
        */
        void setTitlecode(std::string);
        
        /**
        * @brief Getter for the title code number.
        * @return The title code string.
        */
        std::string getTitlecode();
        std::string getCategoria();
};
#endif
