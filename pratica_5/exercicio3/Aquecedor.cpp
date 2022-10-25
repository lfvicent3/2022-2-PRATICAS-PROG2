#include "Aquecedor.h"
#include <iostream>

Aquecedor::Aquecedor()
{
    this->temperatura = 20;
    this->minTemperatura = 10;
    this->maxTemperatura = 40;
    this->fatorInclementoTemperatura = 5;
}

Aquecedor::Aquecedor(double temperatura)
{
    this->temperatura = temperatura;
    this->minTemperatura = 10;
    this->maxTemperatura = 40;
    this->fatorInclementoTemperatura = 5;
}
Aquecedor::Aquecedor(double temperatura, double fatorInclementoTemperatura)
{
    this->temperatura = temperatura;
    this->minTemperatura = 10;
    this->maxTemperatura = 40;
    this->fatorInclementoTemperatura = fatorInclementoTemperatura;
}

void Aquecedor::aquecer()
{
    this->temperatura += this->fatorInclementoTemperatura;
    if (this->temperatura > this->maxTemperatura)
    {
        std::cout << "Temperatura máxima atingida." << std::endl;
        this->temperatura = this->maxTemperatura;
    }
}

void Aquecedor::esfriar()
{
    this->temperatura -= this->fatorInclementoTemperatura;
    if (this->temperatura < this->maxTemperatura)
    {
        std::cout << "Temperatura minima atingida." << std::endl;
        this->temperatura = this->minTemperatura;
    }
}

void Aquecedor::setFatorInclementoTemperatura(double fatorInclementoTemperatura)
{
    this->fatorInclementoTemperatura = fatorInclementoTemperatura;
}

double Aquecedor::getTemperatura()
{
    return this->temperatura;
}

Aquecedor::~Aquecedor()
{
}