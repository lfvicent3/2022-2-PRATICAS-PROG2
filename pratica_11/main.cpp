#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include "Aluno.h"

bool maior(Aluno &a, Aluno &b)
{
    return (a.getMediaNotas() > b.getMediaNotas());
}

int main()
{
    int matricula = 0;
    std::string nome;
    double notas[2];

    std::vector<Aluno> alunos = std::vector<Aluno>();
    std::cin >> matricula;
    while (matricula != -1)
    {

        std::cin >> nome;
        std::cin >> notas[0] >> notas[1];
        alunos.push_back(Aluno(matricula, nome, notas));
        std::cin >> matricula;
    }

    std::sort(alunos.begin(), alunos.end(), maior);

    for (int i = 0; i < alunos.size(); i++)
    {
        std::cout << alunos[i].getMatricula() << " - "
                  << alunos[i].getName() << " - "
                  << alunos[i].getMediaNotas() << std::endl;
    }

    return 0;
}
