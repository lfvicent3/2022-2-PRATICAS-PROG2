#include "Triangulo.h"

Triangulo::Triangulo(double l1, double l2, double l3, double altura, std::string nome, std::string cor)
{
    this->l1 = l1;
    this->l2 = l2;
    this->l3 = l3;
    this->altura = altura;
    this->nome = nome;
    this->cor = cor;
}
Triangulo::Triangulo(double l2, double l3, double altura, std::string nome, std::string cor)
{
    this->l1 = l2;
    this->l2 = l2;
    this->l3 = l3;
    this->altura = altura;
    this->nome = nome;
    this->cor = cor;
}
Triangulo::Triangulo(double l3, double altura, std::string nome, std::string cor)
{
    this->l1 = l3;
    this->l2 = l3;
    this->l3 = altura;
    this->altura = altura;
    this->nome = nome;
    this->cor = cor;
}

double Triangulo::get_area()
{
    return this->l3 * this->altura / 2;
}

double Triangulo::get_perimetro()
{
    return this->l1 + this->l2 + this->l3;
}

std::string Triangulo::get_cor()
{
    return this->cor;
}
std::string Triangulo::get_nome()
{
    return this->nome;
}

Triangulo::~Triangulo()
{
}