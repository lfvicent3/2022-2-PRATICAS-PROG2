#include <iostream>
#include <string>
#include "PosicoesVetor.h"
int main()
{
    int y = 0;
    PosicoesVetor *v = nullptr;

    std::cout << "Digite o tamanho do vetor: ";
    std::cin >> y;

    v = new PosicoesVetor(y);

    for (int i = 0; i < y; i++)
    {
        std::string a, b;
        std::cout << "Informe a posicao: ";
        std::cin >> a;

        std::cout << "Informe o valor: ";
        std::cin >> b;

        int c, d;
        try
        {
            c = std::stoi(a);
            d = std::stoi(b);
        }
        catch (const std::invalid_argument &e)
        {
            std::cerr << "Valores informados não são numeros." << '\n';
            delete v;
            return 1;
        }

        try
        {
            v->preencherValores(c, d);
        }
        catch (const std::invalid_argument &e)
        {
            std::cerr << e.what() << '\n';
            delete v;
            return 1;
        }
    }

    delete v;
    return 0;
}