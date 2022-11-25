#ifndef __INF112_P8_ITEM_H
#define __INF112_P8_ITEM_H
#include <iostream>

class Item
{
protected:
    int codigo;
    std::string descricao;
    double preco_compra;
    double percentual_lucro;

public:
    Item(int codigo, std::string descricao, double preco_compra, double percentual_lucro);
    int getCodigo();
    std::string getDescricao();
    double getPrecoCompra();
    double getPercentualLucro();
    virtual double gerarPrecoDeVenda() const;
    ~Item();
};

#endif