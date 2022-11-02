#include "OvernightPackage.h"

OvernightPackage::OvernightPackage(std::string nome, std::string endereco, unsigned int peso, unsigned int custoQuilo, unsigned int taxaPorquilo) : Package(nome, endereco, peso, custoQuilo), taxaPorquilo(taxaPorquilo) {}

double OvernightPackage::calculateCost() const
{
    return (this->peso * this->custoQuilo) + (this->peso * this->taxaPorquilo);
}
OvernightPackage::~OvernightPackage()
{
}
