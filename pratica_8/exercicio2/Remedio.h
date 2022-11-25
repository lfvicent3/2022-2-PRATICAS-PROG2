#ifndef __INF112_P8_REMEDIO_H
#define __INF112_P8_REMEDIO_H

#include "Item.h"

class Remedio : public Item 
{
private:
    double desconto_laboratorio;
public:
    Remedio(int codigo, std::string descricao, double preco_compra, double percentual_lucro, double desconto_laboratorio);
    double getDescontoLaboratorio();
    double gerarPrecoDeVenda() const override;
    ~Remedio();
};

#endif