#include <iostream>
#include <string>
using namespace std;

class Setor{ //Class definition
    private:
        string setor; //Stored sector
        bool validar(string); //Verifies the format
    public:
        void set(string); //Defines the sector to be stored
        string get(); //Returns the stored sector

};