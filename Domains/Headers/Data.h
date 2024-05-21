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
        /**
         * @throw invalid_argument if the value is in the wrong format.
        */
        bool validate(std::string data);
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
        * @throw invalid_argument If the value is in the wrong format.
        */
        void setData(std::string );
        /**
        * @brief Gets the data value.
        * @return The data value.
        */
        std::string getData();

};

#endif