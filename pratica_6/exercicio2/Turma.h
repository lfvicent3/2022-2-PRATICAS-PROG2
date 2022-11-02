#ifndef INF112_TURMA_H
#define INF112_TURMA_H

#include <iostream>
class Turma
{
private:
    std::string codigo;
    int ano;

public:
    Turma(std::string codigo, int ano);
    std::string getCodigo();
    int getAno();
    void setCodigo(std::string codigo);
    void setAno(int ano);
    ~Turma();
};

#endif