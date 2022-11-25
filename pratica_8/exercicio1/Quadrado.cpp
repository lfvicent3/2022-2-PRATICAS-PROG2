#include "Quadrado.h"

Quadrado::Quadrado(double lado, std::string nome, std::string cor)
{
    this->lado = lado;
    this->nome = nome;
    this->cor = cor;
}

double Quadrado::get_area()
{
    return this->lado * this->lado;
}

double Quadrado::get_perimetro()
{
    return this->lado * 4;
}

std::string Quadrado::get_cor()
{
    return this->cor;
}
std::string Quadrado::get_nome()
{
    return this->nome;
}

Quadrado::~Quadrado()
{
}