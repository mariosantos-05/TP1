#ifndef DATA_H
#define DATA_H
#include <string>
#include <iostream>

/**
* @brief Class representing the Date
*/
class Data{
private:
    std::string data;
    void validate(std::string data);
    bool validadeHyphenPlacement(std::string data);
    bool validateDateRanges(std::string data);
    int month_lenth(int month, int year);
    bool is_leap_year(int year);
    
public:
    /**
    * @brief Constructor for the Data class.
    * @param data The date value to initialize.
     */

    Data(std::string data);
    /**
    * @brief Sets the data value.
    * @param data The new data value.
    * @remark the valid format is "DD-MM-AAAA" DD-01 to 31. MM-01 to 12. AAAA-2000 to 2100.
    * @throw invalid_argument If the value is in the wrong format.
    */

    void setData(std::string );
    
    /**
    * @brief Gets the data value.
    * @return The data value.
    * @remark the given format of value is "DD-MM-AAAA"
    */
    std::string getData();

};

#endif