#include <iostream>
#include "Quadrado.h"
#include "Circulo.h"
#include "Triangulo.h"
#include "Esfera.h"
#include "Cubo.h"

int main()
{
    Quadrado q(2.0, "Quadrado", "Vermelho");
    Circulo c(3.0, "Circulo", "Azul");
    Triangulo t1(7.0, 3.0, 4.0, 2.0, "Triangulo Escaleno", "Amarelo");
    Triangulo t2(3.0, 4.0, 2.0, "Triangulo Isosceles", "Rosa");
    Triangulo t3(7.0, 2.0, "Triangulo Equilatero", "Verde");
    Esfera e(6.0, "Esfera", "Branco");
    Cubo cb(9.0, "Cubo", "Preto");

    std::cout << "Area: " << q.get_area()
              << " - Perimetro: " << q.get_perimetro()
              << " - Nome: " << q.get_nome()
              << " - Cor: " << q.get_cor() << std::endl;

    std::cout << "Area: " << c.get_area()
              << " - Perimetro: " << c.get_perimetro()
              << " - Nome: " << c.get_nome()
              << " - Cor: " << c.get_cor() << std::endl;

    std::cout << "Area: " << t1.get_area()
              << " - Perimetro: " << t1.get_perimetro()
              << " - Nome: " << t1.get_nome()
              << " - Cor: " << t1.get_cor() << std::endl;

    std::cout << "Area: " << t2.get_area()
              << " - Perimetro: " << t2.get_perimetro()
              << " - Nome: " << t2.get_nome()
              << " - Cor: " << t2.get_cor() << std::endl;

    std::cout << "Area: " << t3.get_area()
              << " - Perimetro: " << t3.get_perimetro()
              << " - Nome: " << t3.get_nome()
              << " - Cor: " << t3.get_cor() << std::endl;

    std::cout << "Volume: " << e.get_volume()
              << " - Nome: " << e.get_nome()
              << " - Cor: " << e.get_cor() << std::endl;

    std::cout << "Volume: " << cb.get_volume()
              << " - Nome: " << cb.get_nome()
              << " - Cor: " << cb.get_cor() << std::endl;
    return 0;
}
