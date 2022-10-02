#include "Data.h"
#include <iostream>
int main()
{
    Data data(1, 9, 2022);
    data.exibirDataFormatoNumero();
    data.exibirDataPorExtenso();
    std::cout << data.getDataEmSegundos(data) << std::endl;
    return 0;
}
