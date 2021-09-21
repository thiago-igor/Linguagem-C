/*Crie uma Estrutura disciplina em que um dos campos corresponde tamb ́em a uma estrutura pro-
fessor.*/

#include <stdio.h>

struct diciplina {
    char materia [20];
    int semestre;
};

struct professor {
    char nome [30];
    int idade;
    struct diciplina a;
};

int main(){
    struct professor m;

    printf("Nome do Professor:");
    scanf("%s",&m.nome);

    printf("Idade:");
    scanf("%d",&m.idade);

    printf("Materia Prestada:");
    scanf("%s",& m.a.materia);

    printf("Semestre Atual:");
    scanf("%d",&m.a.semestre);


    printf("\n---------- Informacao Passada ----------\n");

    printf("Professor %s de %d Anos Ministra Aulas De %s do semestre %d \n\n",m.nome, m.idade, m.a.materia, m.a.semestre);



}