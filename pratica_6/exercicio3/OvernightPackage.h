#ifndef INF112_OVERNIGHT_H
#define INF112_OVERNIGHT_H

#include "Package.h"

class OvernightPackage : public Package
{
private:
    unsigned int taxaPorquilo;
public:
    OvernightPackage(std::string nome, std::string endereco, unsigned int peso, unsigned int custoQuilo, unsigned int taxaPorquilo);
    virtual double calculateCost() const override;
    ~OvernightPackage();
};


#endif