#ifndef __INF112_P8_CIRCULO_H
#define __INF112_P8_CIRCULO_H

#include <iostream>
#include "Forma2D.h"

#define PI 3.14

class Circulo : public Forma2D
{
private:
    std::string cor;
    std::string nome;
    double raio;

public:
    Circulo(double raio, std::string nome, std::string cor);
    double get_area();
    double get_perimetro();
    std::string get_cor();
    std::string get_nome();
    ~Circulo();
};

#endif