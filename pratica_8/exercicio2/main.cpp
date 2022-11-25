#include <iostream>
#include "ArtigoHigiene.h"
#include "Remedio.h"

int main()
{
    Remedio r1(123, "Amoxilina", 500.0, 5.0, 10);
    Remedio r2(456, "Ibuprofeno", 2000.0, 7.0, 20);

    ArtigoHigiene ah1(789, "Desodorante", 1500.0);
    ArtigoHigiene ah2(112, "Shampoo", 800.0);

    std::cout << " Codigo: " << r1.getCodigo()
              << " - Descricao: " << r1.getDescricao()
              << " - % de Lucro: " << r1.getPercentualLucro()
              << " - Preco de Compra: " << r1.getPrecoCompra()
              << " - Valor do desconto: " << r1.getDescontoLaboratorio()
              << " - Preco de venda : " << r1.gerarPrecoDeVenda()
              << std::endl;

    std::cout << " Codigo: " << r2.getCodigo()
              << " - Descricao: " << r2.getDescricao()
              << " - % de Lucro: " << r2.getPercentualLucro()
              << " - Preco de Compra: " << r2.getPrecoCompra()
              << " - Valor do desconto: " << r2.getDescontoLaboratorio()
              << " - Preco de venda : " << r1.gerarPrecoDeVenda()
              << std::endl;

    std::cout << " Codigo: " << ah1.getCodigo()
              << " - Descricao: " << ah1.getDescricao()
              << " - % de Lucro: " << ah1.getPercentualLucro()
              << " - Preco de Compra: " << ah1.getPrecoCompra()
              << " - Preco de venda: " << ah1.gerarPrecoDeVenda()
              << std::endl;
    
    std::cout << " Codigo: " << ah2.getCodigo()
              << " - Descricao: " << ah2.getDescricao()
              << " - % de Lucro: " << ah2.getPercentualLucro()
              << " - Preco de Compra: " << ah2.getPrecoCompra()
              << " - Preco de venda: " << ah2.gerarPrecoDeVenda()
              << std::endl;

    return 0;
}
