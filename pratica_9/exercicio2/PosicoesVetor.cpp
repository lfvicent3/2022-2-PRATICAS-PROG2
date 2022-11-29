#include "PosicoesVetor.h"
#include <cctype>
#include <exception>
#include <iostream>

PosicoesVetor::PosicoesVetor(int y){
    this->y = y;
    this->v = new int[y];
}

void PosicoesVetor::preencherValores(int pos, int valor){
    if(pos >= this->y){
        throw std::invalid_argument("A posição informada não existe no array");
    }
}

PosicoesVetor::~PosicoesVetor(){
    delete[] this->v;
}