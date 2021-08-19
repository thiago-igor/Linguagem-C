#include <stdio.h>

typedef double real; // com o typedef voce dar o nome que quiser a uma funçao 

typedef struct ponto{
    int x;
    int y;
    float m;
}my_st;

void media(my_st *);

int main(){

    //double x = 10.4
    real x = 10.4;

    //struct ponto p;
    my_st p;

    p.x = 10;
    p.y=20;

    //calMedia(&p);

    printf("%d\n",p.x);
    printf("%d\n",p.y);


    return 0;
}

//void media(struct ponto *q)

//void calMedia(my_st *q){
  //  q->m = ((q->x + q->y)/2.0);
//}

