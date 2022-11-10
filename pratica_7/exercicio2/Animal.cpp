#include "Animal.h"
#include <vector>

unsigned int Animal::_next_id = 0;

unsigned int Animal::get_new_id()
{
    _next_id++;
    return _next_id;
}

void popula(std::vector<Animal *> &fazenda, Animal *A, unsigned int max_populacao)
{
   
    for (int i = 0; i < max_populacao; i++)
    {
        fazenda.push_back(A->reproduz());
    }
}