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
     * @param codigo an object of the class CodigoTitulo.
     * @param emissor object of class Name.
     * @param setor object of class Setor.
     * @param emissao object of class Data.
     * @param vencimento object of class Data.
     * @param valor object of class Dinheiro.
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
     * @param codigo object of class CodigoTitulo.
     * @throw Class CodigoTitulo Throws exception if the format is invalid.
     */
    void setCodigo(std::string codigo);

    /**
     * @brief Setter for the emissor.
     * @param emissor object of class Name.
     * @throw Class Name Throws exception if the format is invalid.
     */
    void setEmissor(std::string emissor);

    /**
     * @brief Setter for the setor.
     * @param setor object of class Setor.
     * @throw Class Setor Throws exception if the format is invalid.
     */
    void setSetor(std::string setor);

    /**
     * @brief Setter for the emissao.
     * @param emissao object of class Data.
     * @throw Class Data Throws exception if the format is invalid.
     */
    void setEmissao(std::string emissao);

    /**
     * @brief Setter for the vencimento.
     * @param vencimento object of class Data.
     * @throw Class Data Throws exception if the format is invalid.
     */
    void setVencimento(std::string vencimento);

    /**
     * @brief Setter for the valor.
     * @param valor object of class Dinheiro.
     * @throw Class Dinheiro Throws exception if the format is invalid.
     */
    void setValor(float valor);

    /**
     * @brief Getter for the codigo number.
     * @return codigo object of class CodigoTitulo.
     */
    std::string getCodigo();

    /**
     * @brief Getter for the emissor name.
     * @return emissor object of class Name.
     */
    std::string getEmissor();

    /**
     * @brief Getter for the setor name.
     * @return setor object of class Setor.
     */
    std::string getSetor();

    /**
     * @brief Getter for the emissao number.
     * @return emissao object of class Data.
     */
    std::string getEmissao();

    /**
     * @brief Getter for the vencimento number.
     * @return vencimento object of class Data.
     */
    std::string getVencimento();

    /**
     * @brief Getter for the valor number.
     * @return valor object of class Dinheiro.
     */
    float getValor();

};


#endif