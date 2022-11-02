#include "Package.h"

Package::Package(std::string nome, std::string endereco, unsigned int peso, unsigned int custoQuilo)
{
    this->nome = nome;
    this->endereco = endereco;
    this->peso = peso;
    this->custoQuilo = custoQuilo;
}
double Package::calculateCost() const
{
    return this->peso * this->custoQuilo;
}



Package::~Package(){
    
}