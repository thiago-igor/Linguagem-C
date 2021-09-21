/*Escreva um programa em C que modifique a Quest ̃ao 1 para conter um array com 3 alunos. Escreva
uma funçao para calcular a media dos alunos.*/
#include <stdio.h>
#define TAM 3
#define linha "\n------------------------\n"

struct aluno {
    char nome [30];
    float n1;
    float n2;
    float media;
};

float media (float a, float b);

int main(){

    struct aluno m[TAM];
    int k;

    for(k=0;k<TAM;k++){
        printf("Informacoes Aluno: %d \n",k+1);

        printf("Nome:");
        scanf("%s",&m[k].nome);

        printf("nota 1 => ");
        scanf("%f",&m[k].n1);

        printf("nota 2 => ");
        scanf("%f",&m[k].n2);

        m[k].media = media(m[k].n1,m[k].n2);

    }

    for(k=0;k<TAM;k++){
        printf(linha);
        printf("Aluno %d:\n",k+1);
        printf("Nome =>%s\n",m[k].nome);
        printf("nota 1 => %.2f\n",m[k].n1);
        printf("nota 2 => %.2f\n",m[k].n2);
        printf("Media => %.2f\n",m[k].media);
        printf(linha);
    }



    return 0;

}

    float media (float a, float b){
        return (a+b)/2;
    }
