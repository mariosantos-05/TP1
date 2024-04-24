#ifndef PERCENTUAL_H_INCLUDED
#define PERCENTUAL_H_INCLUDED

#include <iostream>
using namespace std;
class Percentual{ //Creates the class
    private:
        int percentual; //Stored percentage value
        void validar(int); //Checks the format
    public:
        Percentual(int);
        void set(int); //Defines the percentage value
        int get(); //Returns the percentage value
};

#endif // PERCENTUAL_H_INCLUDED
