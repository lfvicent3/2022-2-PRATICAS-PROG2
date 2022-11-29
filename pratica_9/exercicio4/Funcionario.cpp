#include "Funcionario.h"

Funcionario::Funcionario(){}
Funcionario::Funcionario(std::string nome, double gastoComViagem)
{
    this->gastoComViagem = gastoComViagem;
    this->nome = nome;
}

double Funcionario::getGastoComViagem()
{
    return this->gastoComViagem;
}

Funcionario::~Funcionario()
{
}