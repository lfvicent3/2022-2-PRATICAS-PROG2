#ifndef INF112_TWOPACKAGEDAY_H
#define INF112_TWOPACKAGEDAY_H

#include "Package.h"

class TwoDayPackage : public Package
{
private:
    unsigned int taxaFixa;
public:
    TwoDayPackage(std::string nome, std::string endereco, unsigned int peso, unsigned int custoQuilo, unsigned int taxaFixa);
    virtual double calculateCost() const override;
    ~TwoDayPackage();
};


#endif