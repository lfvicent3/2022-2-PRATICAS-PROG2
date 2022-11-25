#ifndef __INF112_P8_Esfera_H
#define __INF112_P8_Esfera_H

#include <iostream>
#include "Forma3D.h"

#define PI 3.14

class Esfera : public Forma3D
{
private:
    std::string cor;
    std::string nome;
    double raio;

public:
    Esfera(double raio, std::string nome, std::string cor);
    double get_volume();
    std::string get_cor();
    std::string get_nome();
    ~Esfera();
};

#endif