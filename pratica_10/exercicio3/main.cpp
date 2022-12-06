#include <iostream>

#include "Mdc.h"

int main()
{
    Mdc mdc;
    int x, y;
    std::cout << "Digite x: ";
    std::cin >> x;

    std::cout << "Digite y: ";
    std::cin >> y;
    std::cout << mdc.run(x, y);

    return 0;
}
