#include "Cubo.h"
#include <iostream>

int main(){
    double area, volume;
    
    Cubo *cubo = new Cubo(3.0);
    
    area = cubo->calculaArea();
    volume = cubo->calculaVolume();

    std::cout << area << std::endl;
    std::cout << volume << std::endl;
    std::cout << cubo->getAresta() << std::endl;

    delete cubo;
    
    return 0;
}