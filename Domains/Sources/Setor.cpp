#include "../Headers/Setor.h"

void Setor::validar(string setor){
    bool valid = false;
    string setores[10] = {"Agricultura", "Construção civil", "Energia", "Finanças", "Imobiliário", "Papel e celulose", 
    "Pecuária", "Química e petroquímica,", "Metalurgia e siderurgia", "Mineração"}; //Valid sectors

    for(int i=0 ; i<10 ; i++){ 
        if (setor == setores[i]){ 
            valid = true; //Valid sector
        };
    };
    
    if (!valid) {throw std::invalid_argument("Formato invalido, favor inserir um dos setores solicitados");} //If not valid
};
string Setor::getSetor(){ 
    return setor;
};
void Setor::setSetor(string setor){ 
    validar(setor);
    this->setor = setor;
};
Setor::Setor(string setor){
    setSetor(setor);
}