#include "ArtigoHigiene.h"

ArtigoHigiene::ArtigoHigiene(int codigo, std::string descricao, double preco_compra) : Item(codigo, descricao, preco_compra, 30) {}

ArtigoHigiene::~ArtigoHigiene() {}