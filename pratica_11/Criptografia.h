#ifndef CRIPTOGRAFIA_H
#define CRIPTOGRAFIA_H

#include <string>
#include <iostream>

class Criptografia
{
public:
    std::string operator()(unsigned int m);
};

#endif