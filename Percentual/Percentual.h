
#include <iostream>
using namespace std;
class Percentual{ //Creates the class
    private:
        int percentual; //Stored percentage value
        bool validar(int); //Checks the format
    public:
        Percentual(int);
        void set(int); //Defines the percentage value
        int get(); //Returns the percentage value
};

