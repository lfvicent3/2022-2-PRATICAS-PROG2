#include "Item.h"

Item::Item(int codigo, std::string descricao, double preco_compra, double percentual_lucro)
{
    this->codigo = codigo;
    this->descricao = descricao;
    this->preco_compra = preco_compra;
    this->percentual_lucro = percentual_lucro;
}

int Item::getCodigo()
{
    return this->codigo;
}

std::string Item::getDescricao()
{
    return this->descricao;
}

double Item::getPrecoCompra()
{
    return this->preco_compra;
}

double Item::getPercentualLucro()
{
    return this->percentual_lucro;
}

double Item::gerarPrecoDeVenda() const
{
    double reais_lucro = this->preco_compra * this->percentual_lucro / 100.0;

    return this->preco_compra + reais_lucro;
}
Item::~Item()
{
}