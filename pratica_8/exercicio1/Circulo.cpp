#include "Circulo.h"

Circulo::Circulo(double raio, std::string nome, std::string cor)
{
    this->raio = raio;
    this->nome = nome;
    this->cor = cor;
}

double Circulo::get_area()
{
    return this->raio * this->raio * PI;
}

double Circulo::get_perimetro()
{
    return 2 * PI * this->raio;
}

std::string Circulo::get_cor()
{
    return this->cor;
}
std::string Circulo::get_nome()
{
    return this->nome;
}

Circulo::~Circulo()
{
}