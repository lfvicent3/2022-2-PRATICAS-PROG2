#ifndef __INF112_P8_QUADRADO_H
#define __INF112_P8_QUADRADO_H

#include <iostream>
#include "Forma2D.h"

class Quadrado : public Forma2D
{
private:
    std::string cor;
    std::string nome;
    double lado;

public:
    Quadrado(double lado, std::string nome, std::string cor);
    double get_area();
    double get_perimetro();
    std::string get_cor();
    std::string get_nome();
    ~Quadrado();
};

#endif