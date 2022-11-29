#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>

class Funcionario
{
public:
    double gastoComViagem;
    std::string nome;

    Funcionario();
    Funcionario(std::string nome, double gastoComViagem);
    double getGastoComViagem();
    ~Funcionario();
};

#endif