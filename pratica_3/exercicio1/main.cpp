#include "Aluno.h"

int main()
{
    /**
     * Afim de exemplicar a funcionalidade do codigo, temos um exemplo estatico 
     * de funcionamento, onde:
     */

    //Instancia-se um objeto do tipo aluno e atribui informações básicas sobre
    Aluno aluno = Aluno("TESTE ALUNO 500000", 10000, 10);

    // Adiciona-se notas ao aluno
    aluno.adicionaNota(10);
    aluno.adicionaNota(20);
    aluno.adicionaNota(30);

    // Calcula a media de notas do aluno
    double media_aluno = aluno.calculaMediaAluno(aluno._notas);

    // Exibi as informações do aluno
    aluno.imprimeInformacoesAluno();

    return 0;
}
