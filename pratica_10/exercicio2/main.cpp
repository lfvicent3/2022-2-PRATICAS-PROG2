#include <iostream>

#include "Power.h"

int main()
{
    Power power;
    int k, n;
    std::cout << "Digite k: ";
    std::cin >> k;

    std::cout << "Digite n: ";
    std::cin >> n;
    int resultado = power.run(k, n);

    std::cout << resultado << std::endl;
    return 0;
}
