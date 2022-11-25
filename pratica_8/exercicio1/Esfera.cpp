#include "Esfera.h"

Esfera::Esfera(double raio, std::string nome, std::string cor)
{
    this->raio = raio;
    this->nome = nome;
    this->cor = cor;
}

double Esfera::get_volume()
{
    return (4 * PI * (this->raio * this->raio * this->raio)) / 3;
}

std::string Esfera::get_cor()
{
    return this->cor;
}
std::string Esfera::get_nome()
{
    return this->nome;
}

Esfera::~Esfera()
{
}