#include "Cubo.h"

Cubo::Cubo(double lado, std::string nome, std::string cor)
{
    this->lado = lado;
    this->nome = nome;
    this->cor = cor;
}

double Cubo::get_volume()
{
    return this->lado * this->lado * this->lado;
}

std::string Cubo::get_cor()
{
    return this->cor;
}
std::string Cubo::get_nome()
{
    return this->nome;
}

Cubo::~Cubo()
{
}