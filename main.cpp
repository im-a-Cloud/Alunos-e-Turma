#include "Aluno.hpp"
#include "Turma.hpp"
#include <iostream>

using namespace std;

Aluno criar_aluno(string nome, string email, int matricula_aluno, int quant_mat, float IRA_aluno){
    Aluno aluno_generico;
    aluno_generico.set_nome_aluno(nome);
    aluno_generico.set_email_aluno(email);
    aluno_generico.set_matricula_aluno(matricula_aluno);
    aluno_generico.set_matricula_aluno(quant_mat);
    aluno_generico.set_IRA(IRA_aluno);
    return aluno_generico;      
} //função para criar um aluno qualquer

int main(){
    Turma turma_LP;
    list <Aluno> * lista_alunos = turma_LP.get_alunos();
    string nome_turma;
    cout <<"Digite o nome da turma" << endl;
    getline(cin, nome_turma);   
    turma_LP.set_nome_da_turma(nome_turma);
    int tamanho = 0;
    cout <<"Digite a quantidade de alunos da turma" << endl;
    cin >> tamanho;
    turma_LP.set_quant_alunos(tamanho);
    string nome_aluno;
    string email_aluno;
    int matricula = 0;
    int quant_materia = 0;
    float IRA_al = 0;
    for(int posicao = 0; posicao < turma_LP.get_quant_alunos(); posicao++){
        Aluno alunozinho;
        cout <<"Digite o nome do Aluno"<< endl;
        cin >> nome_aluno;
        cout <<"E-mail do aluno" << endl;
        cin >> email_aluno;
        cout <<"Matrícula do aluno" << endl;
        cin >> matricula;
        cout <<"Quantidade de matérias que o aluno paga" << endl;
        cin >> quant_materia;
        cout <<"O IRA(Indice de rendimento acadêmico)" << endl;
        cin >> IRA_al;
        cout << endl;
        alunozinho = criar_aluno(nome_aluno, email_aluno, matricula, quant_materia, IRA_al);
        turma_LP.adicionar_aluno(alunozinho);
    }
    //laço usado para adicionar alunos com base no tamanho da turma e adicionar direto na turma
    turma_LP.mostrar_alunos();
    cout <<"Digite o nome do aluno que deseja remover da turma " << turma_LP.get_nome_turma() << endl;
    cin >> nome_aluno;
    turma_LP.remover_aluno(nome_aluno);
    turma_LP.mostrar_alunos();

    return 0;
}