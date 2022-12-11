#include "Criptografia.h"

std::string Criptografia::operator()(unsigned int m)
{
    std::string mat = "";
    for (int i = 3; i >= 0; i--)
    {
        if ((m & (1 << i)) != 0)
        {
            mat += "0";
        }
        else
        {
            mat += "1";
        }
    }
    return mat;
}