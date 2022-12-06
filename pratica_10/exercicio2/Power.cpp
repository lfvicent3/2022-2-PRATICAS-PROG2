#include "Power.h"

Power::Power() {}

int Power::run(int k, int n)
{
    if (n == 0)
    {
        return 1;
    }
    return k * this->run(k, n - 1);
}

Power::~Power() {}