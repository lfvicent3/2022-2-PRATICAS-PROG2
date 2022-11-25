#ifndef __INF112_P8_FORMA_H
#define __INF112_P8_FORMA_H

#include <iostream>

class Forma
{
public:
    virtual std::string get_cor() = 0;
    virtual std::string get_nome() = 0;
};
#endif