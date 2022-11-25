#ifndef __INF112_P8_FORMA3D_H
#define __INF112_P8_FORMA3D_H

#include "Forma.h"

class Forma3D : public Forma
{
public:
    virtual double get_volume() = 0;
};

#endif