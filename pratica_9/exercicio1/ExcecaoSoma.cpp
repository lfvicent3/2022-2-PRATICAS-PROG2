#include "ExcecaoSoma.h"
#include "ExcecaoAcimaDeX.h"
#include <exception>

ExcecaoSoma::ExcecaoSoma(int x, int n)
{
    this->x = x;
    this->n = n;
    this->vN = new int[n];
    this->soma = 0;
    this->nSomados = 0;
}

void ExcecaoSoma::lerValores()
{
    int entrada = 0;
    for (int i = 0; i < this->n; i++)
    {
        std::cout << "Informe o " << i << ": ";
        std::cin >> entrada;

        if (entrada > 100 || entrada < 1)
        {
            throw std::invalid_argument("Número fora do intervalo permitido. Informe números entre 1 e 100.");
        }
        this->vN[i] = entrada;
    }
}

void ExcecaoSoma::somaValores()
{
    this->soma = 0;
    this->nSomados = 0;
    for (; this->nSomados < this->n; this->nSomados++)
    {
        this->soma += this->vN[nSomados];
        if (this->soma > this->x)
        {
            this->soma -= this->vN[nSomados];
            throw ExcecaoAcimaDeX();
        }
    }
}

int ExcecaoSoma::getNSomados()
{
    return this->nSomados;
}

int ExcecaoSoma::getMedia()
{
    return this->soma / nSomados;
}
int ExcecaoSoma::getSoma()
{
    return this->soma;
}
ExcecaoSoma::~ExcecaoSoma()
{
    delete[] this->vN;
}