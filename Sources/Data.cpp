#include "Data.h"

bool Data::is_leap_year(int year) {

    if (year % 400 == 0) {return true;}
    else if (year % 100 == 0) {return false;}
    else if (year % 4 == 0) {return true;}
    return false;

}

int Data::month_lenth(int month, int year) {
    
    if (month == 2) {
        if (is_leap_year(year)) {return 29;}
        else {return 28;}
    }

    if (month == 4 || month == 6 || month == 9 || month == 11) {return 30;} 
    else {return 31;}
}

bool Data::validadeHyphenPlacement(std::string data) {
    if(data[2] != '-' && data[5] != '-') {return false;}
    return true;
}

bool Data::validateDateRanges(std::string data) {
    
    std::string first_slice = data.substr(0,2);
    std::string second_slice = data.substr(3,2);
    std::string third_slice = data.substr(6,4);

    int day = std::stoi(first_slice);
    int month = std::stoi(second_slice);
    int year = std::stoi(third_slice);

    int month_lenth = this-> month_lenth(month, year);

    if (year < 2000 || year > 2100) {return false;}
    
    if (month < 1 || month > 12) {return false;}

    if (day < 1 || day > month_lenth) {return false;}

    return true;
}

bool Data::validate(std::string data) {

    if (data.length() != 10) {return false;}
    if (validadeHyphenPlacement(data) == false) {return false;}
    if (validateDateRanges(data) == false) {return false;}

    return true;
}

void Data::set(std::string data) {
    if (validate(data)) {this->data = data;}
    else {this->data = "data invalida";}
}

std::string Data::get() {return data;}

Data::Data(std::string data) {set(data);}