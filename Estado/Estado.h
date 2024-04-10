#include <iostream>
#include <string>
using namespace std;

class Estado{ //Class definition
    private:
        string estado; //Stored state
        bool validar(string); //Verifies the format
    public:
        Estado(string);
        void set(string); //Defines the state to be stored
        string get(); //Returns the stored state

};