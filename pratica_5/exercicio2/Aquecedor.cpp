#include "Aquecedor.h"

Aquecedor::Aquecedor()
{
    this->temperatura = 20;
}

void Aquecedor::aquecer()
{
    this->temperatura+=5;
}

void Aquecedor::esfriar()
{
    this->temperatura-=5;
}

double Aquecedor::getTemperatura()
{
    return this->temperatura;
}

Aquecedor::~Aquecedor()
{
}