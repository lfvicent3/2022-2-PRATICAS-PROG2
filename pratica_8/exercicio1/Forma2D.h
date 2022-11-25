#ifndef __INF112_P8_FORMA2D_H
#define __INF112_P8_FORMA2D_H

#include "Forma.h"

class Forma2D : public Forma
{
public:
    virtual double get_area() = 0;
    virtual double get_perimetro() = 0;
};

#endif