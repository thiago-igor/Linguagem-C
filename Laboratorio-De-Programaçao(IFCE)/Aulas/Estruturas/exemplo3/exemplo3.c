#include <stdio.h>
#define TAM 2

struct curso{
    char nome[30];
    int semestre_atual;
};

struct aluno{
    char matricula[12];
    float n1;
    float n2;
    float media;
    struct curso c;
};

float media(float a, float b); // escorpo da funçao
float media2(struct aluno a); // escorpo da funçao

int main(){

    struct aluno als[TAM];
    int k;

    for(k=0;k<TAM;k++){ // entrada de dados
        printf("Digite Os Dados Do Aluno %d\n",k+1);
        printf("Matricila =>");
        scanf("%s",als[k].matricula);

        printf("nota 1 =>");
        scanf("%f",&als[k].n1);

        printf("nota 2 =>");
        scanf("%f",&als[k].n2);

        printf("nome do curso =>");
        scanf("%s",&als[k].c.nome); // nesse caso reparamos (als[k].c.nome) possui esses pontos pois e uma struct dentro de outra.

        printf("Semestre Atual =>");
        scanf("%d",&als[k].c.semestre_atual);

        puts("-------");

    }

    // processo da media

    for(k=0;k<TAM;k++){
        //als[k].media = media(als[k].n1, als[k].n2);
        als[k].media = media2(als[k]);
    }

    //saida
    for(k=0;k<TAM;k++){
        printf("%s - media: %.2f; semestre atual: %d \n",als[k].matricula,als[k].media,als[k].c.semestre_atual);
    }

    return 0;
}

float media(float a, float b){
    return(a+b)/ TAM;
}

float media2(struct aluno a){
    return( (a.n1)+(a.n2) ) / TAM;
}

