#ifndef __INF112_P8_Cubo_H
#define __INF112_P8_Cubo_H

#include <iostream>
#include "Forma3D.h"

class Cubo : public Forma3D
{
private:
    std::string cor;
    std::string nome;
    double lado;

public:
    Cubo(double lado, std::string nome, std::string cor);
    double get_volume();
    std::string get_cor();
    std::string get_nome();
    ~Cubo();
};

#endif