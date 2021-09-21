/*Escreva um programa que crie uma Estrutura Node com dois campos (x, y) do tipo inteiro. Realize
a leitura e exibi ̧c ̃ao dos dados dessa Estrutura utilizando um ponteiro para essa estrutura.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int x;
    int y;
}my_ts;

int soma (my_ts *);  // obs: my_ts = (struct node)

int main(){
    my_ts *c = NULL;
    int res;

    c = (my_ts *) malloc(sizeof(my_ts));

    if(c==0){
        printf("memoria insuficiente!!!");
        exit(1);
    }

    c->x=20;
    c->y=32;

    res = soma(c);

    printf("x => %d\nY => %d\n",c->x,c->y);

    printf("\nsoma %d + %d => %d",c->x,c->y,res);

    return 0;
}

int soma (my_ts*p){
    int soma;

    soma = p->x + p->y;

    return soma;
}
