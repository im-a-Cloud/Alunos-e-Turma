#include "Aluno.hpp"

Aluno::Aluno(){

}
Aluno::~Aluno(){

}

string Aluno::get_nome_aluno(){
    return nome_aluno;
}
void Aluno::set_nome_aluno(string nome_al){
    nome_aluno = nome_al;
}

void Aluno::set_email_aluno(string email_aluno){
    email = email_aluno;
}

string Aluno::get_email_aluno(){
    return email;
}

int Aluno::get_matricula_aluno(){
    return matricula;
}
void Aluno::set_matricula_aluno(int matricula_aluno){
    matricula = matricula_aluno;
}
int Aluno::get_quant_materias(){
    return quantidade_materias;
}
void Aluno::set_quant_materias(int quant_mat){
    quantidade_materias = quant_mat;
}
float Aluno::get_IRA(){
    return IRA;
}
void Aluno::set_IRA(float IRA_aluno){
    IRA = IRA_aluno;
}
