#include <stdio.h>
#include<stdlib.h>
#include <time.h>
#define MX 50
#define TAM 2

typedef struct node {
    int x;
    int y;
    float media;
}my_ts; //  IMPORTANTE => obs: my_ts = (struct node)

void preencher (my_ts *);
void ler(my_ts *);

int main(){
    my_ts *c = NULL;

    c = (my_ts *) malloc(sizeof(my_ts));

    if(c == NULL){
        printf("memoria insuficiente!!!");
        exit(1);
    }

    preencher (c);

    ler(c);

    return 0;
}

// preencher
void preencher (my_ts *p){
    srand(time(NULL));
    p->x = rand() % MX;
    p->y = rand() % MX;
    p->media = (float) (p->x + p->y) / TAM;
}

void ler(my_ts *p){
    printf("(%d + %d) / 2 => %.2f",p->x,p->y,p->media);
}

