#include "Aluno.h"

Aluno::Aluno(int matricula, std::string nome, double notas[])
{
    this->matricula = matricula;
    this->nome = nome;
    this->notas = std::vector<double>();
    this->notas.push_back(notas[0]);
    this->notas.push_back(notas[1]);
}
std::string Aluno::getMatricula()
{
    Criptografia crip;
    return crip(this->matricula);
}
std::string Aluno::getName()
{
    return this->nome;
}
double Aluno::getMediaNotas()
{
    return std::accumulate(this->notas.begin(), this->notas.end(), 0.0) / 2.00;
}

Aluno::~Aluno() {}