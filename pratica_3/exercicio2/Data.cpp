#include "Data.h"
#include <iostream>
#include <cstring>
#include <iomanip>

/**
 * @brief Construtor do objeto data
 * 
 * @param dia 
 * @param mes 
 * @param ano 
 */
Data::Data(int dia, int mes, int ano)
{
    _dia = dia;
    _mes = mes;
    _ano = ano;
}

/**
 * @brief Exibi a data em formatos de numeros
 * 
 */
void Data::exibirDataFormatoNumero()
{
    std::cout << std::setfill('0') << std::setw(2) << _dia << "/"
              << std::setfill('0') << std::setw(2) << _mes << "/"
              << _ano << std::endl;
}

/**
 * @brief Exibi a data por extenso
 * 
 */
void Data::exibirDataPorExtenso()
{
    std::string mesChar;
    switch (_mes)
    {
    case 1:
        mesChar = std::string("janeiro");
        break;
    case 2:
        mesChar = std::string("fevereiro");
        break;
    case 3:
        mesChar = std::string("março");
        break;
    case 4:
        mesChar = std::string("abril");
        break;
    case 5:
        mesChar = std::string("maio");
        break;
    case 6:
        mesChar = std::string("junho");
        break;
    case 7:
        mesChar = std::string("agosto");
        break;
    case 8:
        mesChar = std::string("setembro");
        break;
    case 9:
        mesChar = std::string("outubro");
        break;
    case 10:
        mesChar = std::string("novembro");
        break;
    case 11:
        mesChar = std::string("dezembro");
        break;
    case 12:

        break;
    }

    std::cout << std::setfill('0') << std::setw(2) << _dia << " "
              << std::setfill('0') << std::setw(2) << mesChar << " de " 
              << _ano << std::endl;
}

/**
 * @brief Retorna o unix timestamp da data. 
 * 
 * @param data 
 * @return int 
 */
int Data::getDataEmSegundos(Data data)
{
    int timestamp = 0;
    int nAnos = data._ano - 1971;

    timestamp += nAnos * 31556926;
    timestamp += (_mes - 1) * 2629743;
    timestamp += _dia * 86400;

    return timestamp;
}