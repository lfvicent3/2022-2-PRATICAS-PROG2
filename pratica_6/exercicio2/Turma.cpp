#include "Turma.h"

Turma::Turma(std::string codigo, int ano)
{
    this->codigo = codigo;
    this->ano = ano;
}
std::string Turma::getCodigo()
{
    return this->codigo;
}
int Turma::getAno()
{
    return this->ano;
}
void Turma::setCodigo(std::string codigo)
{
    this->codigo = codigo;
}
void Turma::setAno(int ano)
{
    this->ano = ano;
}
Turma::~Turma()
{
}