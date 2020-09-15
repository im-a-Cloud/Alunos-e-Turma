#include <iostream>
#include <string>
#include <list>
#include "Aluno.hpp"

#ifndef TURMA_HPP
#define TURMA_HPP

using namespace std;

class Turma
{
private:
    string nome_turma;
    int codigo_turma;
    int quant_alunos;
    list <Aluno> lista_alunos;
public:
    void set_nome_da_turma(string nome_da_turma);
    void set_cod_turma(int codigo_da_turma);
    void set_alunos(list <Aluno> lista_de_alunos);
    void set_quant_alunos(int num_alunos);
    void adicionar_aluno(Aluno aluno);
    void remover_aluno(string nome_aluno);
    void mostrar_alunos();


	string get_nome_turma();
	string get_cod_turma();
	int get_quant_alunos();
	list <Aluno> * get_alunos(); //está declarado como ponteiro para que possa ser acessado dinamicamente
    Turma();
    ~Turma();
};
#endif