#include <iostream>
#include <string>
using namespace std;

class Senha{ //Class definition
    private:
        string senha; //Stored password
        void validar(string); //Verifies the format
    public:
        Senha(string);
        void set(string); //Defines the password to be stored
        string get(); //Returns the stored password

};