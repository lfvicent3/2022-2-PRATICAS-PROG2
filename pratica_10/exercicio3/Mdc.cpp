#include "Mdc.h"
#include <iostream>
Mdc::Mdc() {}

int Mdc::run(int x, int y)
{
    if (y == 0)
    {
        return x;
    }

    int div = x % y;
    x = y;
    y = div;

    return this->run(x, y);
}

Mdc::~Mdc() {}