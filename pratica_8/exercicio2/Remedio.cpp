#include "Remedio.h"

Remedio::Remedio(int codigo, std::string descricao, double preco_compra, double percentual_lucro, double desconto_laboratorio) : Item(codigo, descricao, preco_compra, percentual_lucro), desconto_laboratorio(desconto_laboratorio) {}

double Remedio::getDescontoLaboratorio()
{
    return this->desconto_laboratorio;
}

double Remedio::gerarPrecoDeVenda() const
{
    double reais_lucro = this->preco_compra * this->percentual_lucro / 100.0;
    double reais_laboratorio = this->preco_compra * this->desconto_laboratorio / 100.0;

    return this->preco_compra + reais_lucro - reais_laboratorio;
}

Remedio::~Remedio()
{
}