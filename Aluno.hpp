#include <iostream>
#include <string>

#ifndef ALUNO_HPP
#define ALUNO_HPP

using namespace std;

class Aluno
{
    private:
        string nome_aluno;
        string email;
        int matricula;
        int quantidade_materias;
        float IRA;
    public:

        Aluno();
        ~Aluno();
        string get_nome_aluno();
        string get_email_aluno();
        int get_matricula_aluno();
        int get_quant_materias();
        float get_IRA();

        void set_nome_aluno(string nome_al);
        void set_email_aluno(string email_aluno);
        void set_matricula_aluno(int matricula_aluno);
        void set_quant_materias(int quant_mat);
        void set_IRA(float IRA_aluno);
};
#endif