#include <iostream>
#include <cstring>

struct Aluno
{
    std::string _nome;
    int _matricula;
    int _numero_disciplinas;
    double *_notas;
    double _media_notas;
    int _numero_notas_adicionadas;

    Aluno(std::string nome, int matricula, int numero_disciplinas);
    ~Aluno();

    void adicionaNota(double nota);
    double calculaMediaAluno(double notas[]);
    void imprimeInformacoesAluno();
};