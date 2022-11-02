#ifndef INF112_ESTUDANTE_H
#define INF112_ESTUDANTE_H

#include "pessoa.h"
#include "Turma.h"

class Estudante : public Pessoa
{
private:
  int _matricula;
  Turma &turma;

public:
  Estudante(std::string nome, int matricula, Turma &turma);
  int get_matricula() const;
  virtual std::string defina_meu_tipo() const override;
  Turma &getTurma();
  void setTurma(Turma &turma);
};

#endif