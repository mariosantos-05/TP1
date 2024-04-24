#include <iostream>
#include <string>
using namespace std;

class Setor{ //Class definition
    private:
        string setor; //Stored sector
        void validar(string); //Verifies the format
    public:
        Setor(string);
        void set(string); //Defines the sector to be stored
        string get(); //Returns the stored sector

};