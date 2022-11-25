#ifndef __INF112_P8_Triangulo_H
#define __INF112_P8_Triangulo_H

#include <iostream>
#include "Forma2D.h"

class Triangulo : public Forma2D
{
private:
    std::string cor;
    std::string nome;
    double l1, l2, l3, altura;

public:
    Triangulo(double l1, double l2, double l3, double altura, std::string nome, std::string cor);
    Triangulo(double l2, double l3, double altura, std::string nome, std::string cor);
    Triangulo(double l3, double altura, std::string nome, std::string cor);
    double get_area();
    double get_perimetro();
    std::string get_cor();
    std::string get_nome();
    ~Triangulo();
};

#endif