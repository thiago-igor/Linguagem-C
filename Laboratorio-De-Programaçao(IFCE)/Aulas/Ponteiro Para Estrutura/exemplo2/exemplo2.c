#include <stdio.h>

struct Node {
    int x;
    int y;
    struct Node *p;
};

void impremirseguinte(struct Node n );

int main(){

    struct Node n1, n2, n3;

    n1.x = 10;
    n1.y = 12;
    n1.p = &n2; // atribuiçao por ponteiro dos elementos de n2 em n1

    n2.x = 20;
    n2.y = 22;
    n2.p = &n3; // atribuiçao por ponteiro dos elementos de n3 em n2

    n3.x = 30;
    n3.y = 32;
    n3.p = &n1; // atribuiçao por ponteiro dos elementos de n1 em n3

    impremirseguinte(n1); // funçao para imprimir

    return 0;
}

void impremirseguinte(struct Node n ){ // funçao de impressao
    printf("X do seguinte => %d\n",n.p->x); 
    printf("Y do seguinte => %d\n",n.p->y);
}