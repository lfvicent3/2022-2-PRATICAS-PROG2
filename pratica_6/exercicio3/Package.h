#ifndef INF112_PACKAGE_H
#define INF112_PACKAGE_H

#include <iostream>
class Package
{
protected:
    unsigned int peso;
    unsigned int custoQuilo;
private:
    std::string nome;
    std::string endereco;

public:
    Package(std::string nome, std::string endereco, unsigned int peso, unsigned int custoQuilo);
    virtual double calculateCost() const;

    ~Package();
};

#endif