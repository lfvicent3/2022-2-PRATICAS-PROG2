#include "Cubo.h"

Cubo::Cubo(double aresta){
    _aresta = aresta;
}

double Cubo::getAresta(){
    return _aresta;
}

double Cubo::calculaArea(){
    return 6*(_aresta*_aresta);
}

double Cubo::calculaVolume(){
    return _aresta*_aresta*_aresta;
}

Cubo::~Cubo(){
    
}