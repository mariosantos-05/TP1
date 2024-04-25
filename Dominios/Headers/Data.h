#ifndef DATA_H
#define DATA_H
#include <string>
#include <iostream>

/**
* @brief Class representing the payment code (codigo de pagamento)
*/
class Data{
    private:
        std::string data;
        bool validate(std::string data);
        bool validadeHyphenPlacement(std::string data);
        bool validateDateRanges(std::string data);
        int month_lenth(int month, int year);
        bool is_leap_year(int year);
    public:
        /**
         * @brief Constructor for the Data class.
         * @param paymentcode: number string.
         */
        Data(std::string data);
        /**
         * @brief Setter for the Data info.
         * @param data in string format.
         * @throw Throws an exception if the format is invalid.
         */
        void set(std::string );
        /**
         * @brief Getter for the data info.
         * @return The date.
         */
        std::string get();

};

#endif