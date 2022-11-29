#ifndef VIAGEM_H
#define VIAGEM_H

#include <string>
#include <fstream>
#include <exception>
#include <iostream>
#include <cmath>
#include "Funcionario.h"

class Viagem
{
private:
    Funcionario *lFuncionarios;
    double gastoMensal;
    int nFuncionarios;

public:
    Viagem(std::string nome_arquivo);
    void gerarRelatorio();
    void salvar();
    ~Viagem();
};
#endif
