#include "../Headers/Setor.h"
using std::string;

bool Setor::validar(string setor){
    string setores[10] = {"Agricultura", "Construção civil", "Energia", "Finanças", "Imobiliário", "Papel e celulose", 
    "Pecuária", "Química e petroquímica,", "Metalurgia e siderurgia", "Mineração"}; //Valid sectors
    for(int i=0;i<10;i++){ //Loops through each valid sector
        if (setor == setores[i]){ //Verifies correspondence
            return true; //If valid
        };
    };
    return false; //If not valid
};
string Setor::get(){ //Returns the sector value
    return setor;
};
void Setor::set(string setor){ //Determines the sector to be stored
    this->setor = setor;
};

Setor::Setor(string setor)
{
    set(setor);
}