#ifndef ALUNO_H
#define ALUNO_H

#include <iostream>
#include <vector>
#include <numeric>

#include "Criptografia.h"

class Aluno
{
private:
    int matricula;
    std::string nome;
    std::vector<double> notas;

public:
    Aluno(int matricula, std::string nome, double notas[]);
    std::string getMatricula();
    std::string getName();
    double getMediaNotas();
    ~Aluno();
};

#endif