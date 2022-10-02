#include "Aluno.h"

/**
 * @brief Construtor de inicialização do objetos
 * 
 * @param nome 
 * @param matricula 
 * @param numero_disciplinas 
 */
Aluno::Aluno(std::string nome, int matricula, int numero_disciplinas)
{
    _nome = nome;
    _matricula = matricula;
    _numero_disciplinas = numero_disciplinas;

    _notas = new double[_numero_disciplinas];

    _media_notas = 0;
    _numero_notas_adicionadas = 0;
}

/**
 * @brief Destrutor do objeto.
 * 
 */
Aluno::~Aluno()
{
    delete[] _notas;
}

/**
 * @brief Metodo para adiciona notas.
 * 
 * @param nota 
 */
void Aluno::adicionaNota(double nota)
{
    _notas[_numero_notas_adicionadas] = nota;
    _numero_notas_adicionadas++;
}

/**
 * @brief Metodo para calcular a media de notas.
 * 
 * @param notas 
 * @return double 
 */
double Aluno::calculaMediaAluno(double notas[])
{
    double soma_notas;
    for (int i = 0; i < _numero_notas_adicionadas; i++)
    {
        soma_notas += notas[i];
    }

    _media_notas = soma_notas / _numero_notas_adicionadas;

    return _media_notas;
}

/**
 * @brief Metodo para imprimir as informações do aluno
 * 
 */
void Aluno::imprimeInformacoesAluno()
{
    std::cout << "Aluno: " << _nome << std::endl
              << "Matricula: " << _matricula << std::endl
              << "Média Notas: " << _media_notas << std::endl;
}
