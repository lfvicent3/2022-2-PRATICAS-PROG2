#include "Soma.h"

Soma::Soma() {}

int Soma::run(int m, int n)
{
    if (n == m)
    {
        return m;
    }

    return m + this->run(m + 1, n);
}

Soma::~Soma() {}