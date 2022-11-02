#include <iostream>

#include "estudante.h"
#include "pessoa.h"
#include "Turma.h"

void f(Pessoa &pessoa)
{
  std::cout << "Na função: " << pessoa.defina_meu_tipo() << std::endl;
}

int main()
{

  Turma turma = Turma("INF", 2022);
  Pessoa pessoa("Julio Reis.");
  Estudante estudante("Jane Doe", 20180101, turma);
  std::cout << "A pessoa é: " << pessoa.defina_meu_tipo() << std::endl;
  std::cout << "O estudante é: " << estudante.defina_meu_tipo() << std::endl;

  f(pessoa);
  f(estudante);

  Estudante estudante2("Estudante2", 2222, turma);
  Estudante estudante20("Estudante20", 22212, turma);

  std::cout << "A turma do "
            << estudante2.get_nome()
            << " é: "
            << estudante2.getTurma().getCodigo()
            << estudante2.getTurma().getAno()
            << std::endl;

  std::cout << "A turma do "
            << estudante20.get_nome()
            << " é: "
            << estudante20.getTurma().getCodigo()
            << estudante20.getTurma().getAno()
            << std::endl;

  turma.setAno(2023);

  std::cout << "A turma do "
            << estudante2.get_nome()
            << " é: "
            << estudante2.getTurma().getCodigo()
            << estudante2.getTurma().getAno()
            << std::endl;

  std::cout << "A turma do "
            << estudante20.get_nome()
            << " é: "
            << estudante20.getTurma().getCodigo()
            << estudante20.getTurma().getAno()
            << std::endl;
  return 0;
}