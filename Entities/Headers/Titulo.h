#ifndef TITULO_H
#define TITULO_H
#include <string>
#include "../../Domains/Headers/CodigoTitulo.h"
#include "../../Domains/Headers/Nome.h"
#include "../../Domains/Headers/Setor.h"
#include "../../Domains/Headers/Data.h"
#include "../../Domains/Headers/Dinheiro.h"


/**
 * @brief Class representing the Title of a User.
 */
class Titulo {
private:
    CodigoTitulo codigo;
    Name emissor;
    Setor setor;
    Data emissao;
    Data vencimento;
    Dinheiro valor;

public:
    /**
     * @brief Constructor for Titulo.
     * @param codigo is a string atribute of an object of the class CodigoTitulo.
     * @param emissor is a string atribute of an object of class Name.
     * @param setor is a string atribute of an object of class Setor.
     * @param emissao is a string atribute of an object of class Data.
     * @param vencimento is a string atribute of an object of class Data.
     * @param valor is a float atribute of an object of class Dinheiro.
     */
    Titulo(
        std::string codigo,
        std::string emissor,
        std::string setor,
        std::string emissao,
        std::string vencimento,
        float valor
    );

    /**
     * @brief Setter for the codigo.
     * @param codigo is a string atribute of an object of class CodigoTitulo.
     * @throw Class CodigoTitulo Throws exception if the format is invalid.
     */
    void setCodigo(std::string codigo);

    /**
     * @brief Setter for the emissor.
     * @param emissor is a string atribute of an object of class Name.
     * @throw Class Name Throws exception if the format is invalid.
     */
    void setEmissor(std::string emissor);

    /**
     * @brief Setter for the setor.
     * @param setor is a string atribute of an object of class Setor.
     * @throw Class Setor Throws exception if the format is invalid.
     */
    void setSetor(std::string setor);

    /**
     * @brief Setter for the emissao.
     * @param emissao is a string atribute of an object of class Data.
     * @throw Class Data Throws exception if the format is invalid.
     */
    void setEmissao(std::string emissao);

    /**
     * @brief Setter for the vencimento.
     * @param vencimento is a string atribute of an object of class Data.
     * @throw Class Data Throws exception if the format is invalid.
     */
    void setVencimento(std::string vencimento);

    /**
     * @brief Setter for the valor.
     * @param valor is a string atribute of an object of class Dinheiro.
     * @throw Class Dinheiro Throws exception if the format is invalid.
     */
    void setValor(float valor);

    /**
     * @brief Getter for the codigo number.
     * @return codigo is a string atribute of an object of class CodigoTitulo.
     */
    std::string getCodigo();

    /**
     * @brief Getter for the emissor name.
     * @return emissor is a string atribute of an object of class Name.
     */
    std::string getEmissor();

    /**
     * @brief Getter for the setor name.
     * @return setor is a string atribute of an object of class Setor.
     */
    std::string getSetor();

    /**
     * @brief Getter for the emissao number.
     * @return emissao is a string atribute of an object of class Data.
     */
    std::string getEmissao();

    /**
     * @brief Getter for the vencimento number.
     * @return vencimento is a string atribute of an object of class Data.
     */
    std::string getVencimento();

    /**
     * @brief Getter for the valor number.
     * @return valor is a float atribute of an object of class Dinheiro.
     */
    float getValor();

};


#endif