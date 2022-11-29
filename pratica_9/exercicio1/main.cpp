#include <iostream>
#include "ExcecaoSoma.h"
#include "ExcecaoAcimaDeX.h"

int main()
{
    ExcecaoSoma es(10, 2);

    try
    {
        es.lerValores();
        es.somaValores();
    }
    catch (const std::invalid_argument &e)
    {
        std::cerr << e.what() << '\n';
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "Soma: " << es.getSoma() << std::endl;
    std::cout << "Número somado: " << es.getNSomados() << std::endl;

    return 0;
}
