#include <stdio.h>

int main(){

    struct ficha_aluno { // tipos de dados
        char nome[40];
        int numero; 
        float nota;
    }; // definiçao da struct

    struct ficha_aluno aluno; // declaraçao da variavel aluno no struct de ficha_aluno

    printf("\n-------- Ficha Do Aluno --------\n");

    printf("Nome Do Aluno:");
    fgets(aluno.nome,40,stdin);

    printf("Digite O Numero Do Aluno:");
    scanf("%d",&aluno.numero);

    printf("Digite A Nota:");
    scanf("%f",&aluno.nota);

    printf("\n-------- Lendo Dados Da Struct:--------\n");

    printf("Nome: %s",aluno.nome);
    printf("Numero: %d\n",aluno.numero);
    printf("Nota: %.2f\n",aluno.nota);

    return 0;
}