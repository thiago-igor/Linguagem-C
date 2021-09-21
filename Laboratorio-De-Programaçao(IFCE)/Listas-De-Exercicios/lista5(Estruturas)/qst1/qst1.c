// Escreva um programa em C que utilize uma Estrutura aluno para conter duas notas, lidas do
//usuario, e sua media.

#include <stdio.h>

struct aluno{  // tipos de dados
    char nome[30];
    float n1;
    float n2;
    float media;
};

float media(float a, float b);

int main(){
    struct aluno mf;

    printf("Nome => ");
    scanf("%s",&mf.nome);

    printf("Nota 1 => ");
    scanf("%f",&mf.n1);

    printf("Nota 2 => ");
    scanf("%f",&mf.n2);

    mf.media = media(mf.n1,mf.n2);

    printf("nome => %s\n",mf.nome);
    printf("media => %.2f / %.2f = %.2f",mf.n1,mf.n2,mf.media);

    

    return 0;
}

float media(float a, float b){
    return (a+b)/2;
}
