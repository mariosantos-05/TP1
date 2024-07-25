#include "../Headers/Nome.h"


Name::Name(std::string name){
    Names = name;
} 

void Name::validateName(std::string name){
    char space = ' ';
    int spaces = std::count(name.begin(), name.end(), space);
    bool names_length = true;
    bool Upper = false;
    // Check if the number of spaces is 0, meaning there's only one name
    if (spaces == 0) {
        names_length = (name.size() > 2 && name.size() < 11);
        if(isupper(name[0]))
            Upper = true;
        else
            throw std::invalid_argument("Formato inválido. Nome deve começar com letra Maiúscula.");
    }
    else if (spaces > 2){
        throw std::invalid_argument("Formato inválido. Apenas 2 nomes aceitos");
    }
    // If there are more than 0 spaces, indicating the presence of a surname
    else {
        std::string firstName = name.substr(0, name.find(space));
        std::string surname = name.substr(name.find(space) + 1);
        // Check if both first name and surname meet the length criteria
        names_length = (firstName.size() > 2 && firstName.size() < 11 &&
                        surname.size() > 2 && surname.size() < 11);
        if(isupper(firstName[0]) and isupper(surname[0]))
            Upper = true;
        else
            throw std::invalid_argument("Formato inválido. Nome deve começar com letra Maiúscula.");
    }
}


void Name::setName(std::string name) {
    validateName(name);
    Names = name;
}

std::string Name::getName(){
    return Names;
}
