#include <stdio.h>

typedef struct node{
    int x;
    struct node *prox;
}my_ts;

void imprimir(my_ts *);

int main(){
    my_ts n1, n2, n3;

    n1.x = 10;
    n1.prox = &n2;

    n2.x = 20;
    n2.prox = &n3;

    n3.x = 30;
    n3.prox = NULL;

    imprimir(&n1);

    return 0;
}


void imprimir(my_ts *p){
    my_ts *k;

    for(k=p; k!=NULL;k=k->prox){
        printf("%d\n",k->x);
    }
}