#include <iostream>

#include "Soma.h"

int main()
{
    Soma soma;
    int m, n;
    std::cout << "Digite m: ";
    std::cin >> m;

    std::cout << "Digite n: ";
    std::cin >> n;

    int resultado = soma.run(m, n);

    std::cout << resultado << std::endl;

    return 0;
}
