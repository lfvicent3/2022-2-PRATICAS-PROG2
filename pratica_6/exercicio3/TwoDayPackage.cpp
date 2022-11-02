#include "TwoDayPackage.h"

TwoDayPackage::TwoDayPackage(std::string nome, std::string endereco, unsigned int peso, unsigned int custoQuilo, unsigned int taxaFixa):
    Package(nome, endereco, peso, custoQuilo), taxaFixa(taxaFixa) {}

double TwoDayPackage::calculateCost() const
{
    return this->peso * this->custoQuilo + this->taxaFixa;
}
TwoDayPackage::~TwoDayPackage()     
{
}
