#include "CodigoTitulo.h" //<header file that give us the interface of the title code>
#include <stdexcept>
#include <regex>
#include <string>
#include <cctype>


//Title code constructor

CodigoTitulo::CodigoTitulo(std::string code){
    titleCode = code;
}

void CodigoTitulo::validatetitleCode(std::string code){
     //To uppercase the code
    std::string uppercaseCode;
    for (char c : code) {
        uppercaseCode += std::toupper(c);
    };
     std::regex pattern("(CDB|CRI|LC[AI]|DEB)[A-Z0-9]{9}");
     if (!std::regex_match(uppercaseCode,pattern)){
        throw std::invalid_argument("Formato inválido. Certifique-se de inserir um formato valido para o codigo de titulo");
     };

};

//Setter for the title code
void CodigoTitulo::setTitlecode(std::string code){
    validatetitleCode(code);
    titleCode = code;
};

//Getter for the title code
std::string CodigoTitulo::getPaycode(){
    return titleCode;
};

std::string CodigoTitulo::getCategoria(){
    enum class Categoria { CDB, CRI, LCA, DEB};
    code = this->getPaycode;
    if (code.substr(0, 3) == "CDB") {
        return Categoria::CDB;
    } else if (code.substr(0, 3) == "CRI") {
        return Categoria::CRI;
    } else if (code.substr(0, 2) == "LC" && (entrada[2] == 'A' || entrada[2] == 'I')) {
        return Categoria::LCA;
    } else if (code.substr(0, 3) == "DEB") {
        return Categoria::DEB;
    }

};
