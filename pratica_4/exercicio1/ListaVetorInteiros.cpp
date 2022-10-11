#include "ListaVetorInteiros.h"
#include <iostream>

ListaVetorInteiros::ListaVetorInteiros()
{
    _elementos = new int[TAMANHO_INICIAL]();
    _num_elementos_inseridos = 0;
    _capacidade = TAMANHO_INICIAL;
}

void ListaVetorInteiros::inserir_elemento(int elemento)
{
    if (_num_elementos_inseridos == _capacidade)
    {
        int *new_data = new int[_capacidade * 2];

        for (int i = 0; i < _num_elementos_inseridos; i++)
        {
            new_data[i] = _elementos[i];
        }

        delete[] _elementos;
        _elementos = new_data;
        _capacidade = _capacidade * 2;
    }
    _elementos[_num_elementos_inseridos] = elemento;
    _num_elementos_inseridos++;
}

void ListaVetorInteiros::imprimir()
{
    for (int i = 0; i < _num_elementos_inseridos; i++)
    {
        std::cout << _elementos[i] << " ";
    }
    std::cout << std::endl;
}

void ListaVetorInteiros::remove_primeiro()
{
    for (int i = 0; i < _num_elementos_inseridos-1; i++)
    {
        _elementos[i] = _elementos[i + 1];
    }

    _num_elementos_inseridos--;
}

void ListaVetorInteiros::remove_ultimo()
{
    _num_elementos_inseridos--;
}

void ListaVetorInteiros::inverte()
{
    int *new_data = new int[_capacidade];
    int i = 0, j = _num_elementos_inseridos - 1;

    for (; i < _num_elementos_inseridos && j >= 0; i++, j--)
    {
        new_data[i] = _elementos[j];
    }

    delete[] _elementos;
    _elementos = new_data;
}

ListaVetorInteiros::~ListaVetorInteiros()
{
    delete[] _elementos;
}