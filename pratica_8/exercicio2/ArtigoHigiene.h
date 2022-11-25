#ifndef __INF112_P8_HIGIENE_H
#define __INF112_P8_HIGIENE_H

#include "Item.h"

class ArtigoHigiene : public Item
{
public:
    ArtigoHigiene(int codigo, std::string descricao, double preco_compra);
    ~ArtigoHigiene();
};

#endif