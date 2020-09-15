#include "Aluno.hpp"
#include "Turma.hpp"

Turma::Turma(){}

void Turma::set_nome_da_turma(string nome_da_turma){
    nome_turma = nome_da_turma;
}
void Turma::set_cod_turma(int codigo_da_turma)
{
    codigo_turma = codigo_da_turma;
}
void Turma::set_alunos(list <Aluno> lista_de_alunos)
{
	lista_alunos = lista_de_alunos;
}
void Turma::set_quant_alunos(int num_alunos){
  quant_alunos = num_alunos;
}
void Turma::mostrar_alunos()
{
    for(list<Aluno>::iterator posicao = lista_alunos.begin(); posicao!=lista_alunos.end(); posicao++)//o iterator é usado para "mover-se pela lista pegando as posições de cada aluno"
    {
        cout << posicao->get_nome_aluno() << endl; //aqui ele pega a posição de cada aluno e usa ele como valor para pegar o nome do aluno pela posição da lista
    }
}
void Turma::remover_aluno(string nome_aluno)
{
    for(list<Aluno>::iterator posicao = lista_alunos.begin(); posicao!=lista_alunos.end(); posicao++)
    {
        if (posicao->get_nome_aluno()== nome_aluno) //compara os nomes com o do nome passado como parametro
        {
            lista_alunos.erase(posicao);// se ele achar um nome igual ao inserido ele vai apagar aquele item da lista
            return;
        }
    }
}
void Turma::adicionar_aluno(Aluno aluno){
   lista_alunos.push_back(aluno); //adicina o aluno na última posição da lista
}
int Turma::get_quant_alunos()
{
    return quant_alunos;
}
list <Aluno> * Turma::get_alunos()
{
	return &lista_alunos;
}
string Turma::get_nome_turma(){
  return nome_turma;
}
Turma::~Turma(){}