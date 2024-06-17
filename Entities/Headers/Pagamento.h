#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <string>
#include "../../Domains/Headers/CodigoPagamento.h"
#include "../../Domains/Headers/Data.h"
#include "../../Domains/Headers/Estado.h"
#include "../../Domains/Headers/Percentual.h"

/**
 * @brief Class representing the Payment.
 */
class Pagamento {
private:
    CodigoPagamento codigo;
    Data data;
    Estado estado;
    Percentual percentual;

public:
    /**
     * @brief Constructor for Pagamento.
     * @param codigo object of class CodigoPagamento.
     * @param data object of class Data.
     * @param estado object of class Estado.
     * @param percentual object of class Percentual.
     */
    Pagamento(std::string codigo,std::string data, std::string estado, int percentual);

    /**
     * @brief Setter for the codigo.
     * @param codigo object of class CodigoPagamento.
     * @throw Class CodigoPagamento Throws exception if the format is invalid.
     */
    void setCodigo(std::string codigo);

    /**
     * @brief Setter for the data.
     * @param data object of class Data.
     * @throw Class Data Throws exception if the format is invalid.
     */
    void setData(std::string data);

    /**
     * @brief Setter for the estado.
     * @param estado object of class Estado.
     * @throw Class Estado Throws exception if the format is invalid.
     */
    void setEstado(std::string estado);

    /**
     * @brief Setter for the percentual.
     * @param percentual object of class Percentual.
     * @throw Class Percentual Throws exception if the format is invalid.
     */
    void setPercentual(int percentual);

    /**
     * @brief Getter for the codigo.
     * @return codigo object of class CodigoPagamento.
     */
    std::string getCodigo();

    /**
     * @brief Getter for the data.
     * @return data object of class Data.
     */
    std::string getData();

    /**
     * @brief Getter for the estado.
     * @return estado object of class Estado.
     */
    std::string getEstado();

    /**
     * @brief Getter for the percentual number.
     * @return percentual object of class Percentual.
     */
    int getPercentual();
};

#endif // PAGAMENTO_H
