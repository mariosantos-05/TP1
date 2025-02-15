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
        * @remark the valid format is "AAAXXXXXXXX" where AAA is one of the valid codes and X is Letter or number.
        * @throw invalid_argument If the value is in the wrong format.
        */
        void setTitlecode(std::string);
        
        /**
        * @brief Getter for the title code number.
        * @return The title code string.
        * @remark the given format is "AAAXXXXXXXX".
        */
        std::string getTitlecode();
        std::string getCategoria();
};
#endif
