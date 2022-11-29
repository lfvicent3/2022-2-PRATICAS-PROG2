#ifndef EXCECAOSOMA_H
#define EXCECAOSOMAR_H
#include <iostream>
#include <exception>
class ExcecaoSoma
{
private:
    int x;
    int n;
    int *vN;
    int media, soma, nSomados;

public:
    ExcecaoSoma(int x, int n);
    void somaValores();
    int getMedia();
    int getSoma();
    void lerValores();
    int getNSomados();
    ~ExcecaoSoma();
};

#endif