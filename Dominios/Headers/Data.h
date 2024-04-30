#ifndef DATA_H
#define DATA_H
#include <string>
#include <iostream>

class Data{
    private:
        std::string data;

        bool validate(std::string data);
        bool validadeHyphenPlacement(std::string data);
        bool validateDateRanges(std::string data);
        int month_lenth(int month, int year);
        bool is_leap_year(int year);
        
    public:

        Data(std::string data);
        std::string get();
        void set( std::string );

};

#endif