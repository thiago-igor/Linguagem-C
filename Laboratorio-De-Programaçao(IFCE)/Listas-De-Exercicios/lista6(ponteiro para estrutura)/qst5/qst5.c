#include <stdio.h>

typedef struct node{
    int x;
    struct node *prox;
}my_ts;

void imprimir(my_ts *);
void inserir(int , my_ts *);

int main(){
    my_ts h;

    h.prox = NULL;

    imprimir(&h);

    inserir(30,&h);

    imprimir(&h);
    
    return 0;
}


void imprimir(my_ts *p){
    my_ts *k;

    for(k=p->prox; k!=NULL;k=k->prox){
        printf("%d\n",k->x);
    }
}


void inserir(int v, my_ts *p){
    my_ts *n;
    n = malloc(sizeof(my_ts));
    n->prox = v;
    n->prox = p->prox;
    p->prox = n;
}